
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* Dir; TYPE_1__* shared; } ;
struct TYPE_6__ {int num_slots; int* page_number; scalar_t__* page_status; int ControlLock; int * page_dirty; } ;
typedef TYPE_1__* SlruShared ;
typedef TYPE_2__* SlruCtl ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int,char*,char*,int) ;
 int FUNC_7 (char*) ;

void
FUNC_8(SlruCtl VAR_6, int VAR_7)
{
 SlruShared VAR_8 = VAR_6->shared;
 int VAR_9;
 char VAR_10[VAR_2];
 bool VAR_11;


 FUNC_0(VAR_8->ControlLock, VAR_1);
restart:
 VAR_11 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_8->num_slots; VAR_9++)
 {
  int VAR_12 = VAR_8->page_number[VAR_9] / VAR_3;

  if (VAR_8->page_status[VAR_9] == VAR_4)
   continue;


  if (VAR_12 != VAR_7)
   continue;


  if (VAR_8->page_status[VAR_9] == VAR_5 &&
   !VAR_8->page_dirty[VAR_9])
  {
   VAR_8->page_status[VAR_9] = VAR_4;
   continue;
  }


  if (VAR_8->page_status[VAR_9] == VAR_5)
   FUNC_3(VAR_6, VAR_9, ((void*)0));
  else
   FUNC_2(VAR_6, VAR_9);

  VAR_11 = 1;
 }





 if (VAR_11)
  goto restart;

 FUNC_6(VAR_10, VAR_2, "%s/%04X", VAR_6->Dir, VAR_7);
 FUNC_4(VAR_0,
   (FUNC_5("removing file \"%s\"", VAR_10)));
 FUNC_7(VAR_10);

 FUNC_1(VAR_8->ControlLock);
}
