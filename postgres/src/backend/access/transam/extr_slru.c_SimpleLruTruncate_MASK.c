
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ (* PagePrecedes ) (int ,int) ;int Dir; TYPE_1__* shared; } ;
struct TYPE_7__ {int num_slots; scalar_t__* page_status; int ControlLock; int * page_dirty; int * page_number; int latest_page_number; } ;
typedef TYPE_1__* SlruShared ;
typedef TYPE_2__* SlruCtl ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int,int *) ;
 int VAR_5 ;
 int FUNC_4 (TYPE_2__*,int ,int*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,int ) ;
 scalar_t__ FUNC_7 (int ,int) ;
 scalar_t__ FUNC_8 (int ,int) ;

void
FUNC_9(SlruCtl VAR_6, int VAR_7)
{
 SlruShared VAR_8 = VAR_6->shared;
 int VAR_9;




 VAR_7 -= VAR_7 % VAR_2;







 FUNC_0(VAR_8->ControlLock, VAR_1);

restart:;







 if (VAR_6->PagePrecedes(VAR_8->latest_page_number, VAR_7))
 {
  FUNC_1(VAR_8->ControlLock);
  FUNC_5(VAR_0,
    (FUNC_6("could not truncate directory \"%s\": apparent wraparound",
      VAR_6->Dir)));
  return;
 }

 for (VAR_9 = 0; VAR_9 < VAR_8->num_slots; VAR_9++)
 {
  if (VAR_8->page_status[VAR_9] == VAR_3)
   continue;
  if (!VAR_6->PagePrecedes(VAR_8->page_number[VAR_9], VAR_7))
   continue;




  if (VAR_8->page_status[VAR_9] == VAR_4 &&
   !VAR_8->page_dirty[VAR_9])
  {
   VAR_8->page_status[VAR_9] = VAR_3;
   continue;
  }
  if (VAR_8->page_status[VAR_9] == VAR_4)
   FUNC_3(VAR_6, VAR_9, ((void*)0));
  else
   FUNC_2(VAR_6, VAR_9);
  goto restart;
 }

 FUNC_1(VAR_8->ControlLock);


 (void) FUNC_4(VAR_6, VAR_5, &VAR_7);
}
