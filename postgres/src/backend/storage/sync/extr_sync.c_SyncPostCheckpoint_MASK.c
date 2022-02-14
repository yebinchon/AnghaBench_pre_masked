
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {size_t handler; } ;
struct TYPE_6__ {scalar_t__ (* sync_unlinkfiletag ) (TYPE_3__*,char*) ;} ;
struct TYPE_5__ {scalar_t__ cycle_ctr; TYPE_3__ tag; } ;
typedef TYPE_1__ PendingUnlinkEntry ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*,char*) ;
 TYPE_2__* VAR_8 ;

void
FUNC_8(void)
{
 int VAR_9;

 VAR_9 = VAR_3;
 while (VAR_7 != VAR_2)
 {
  PendingUnlinkEntry *VAR_10 = (PendingUnlinkEntry *) FUNC_4(VAR_7);
  char VAR_11[VAR_1];
  if (VAR_10->cycle_ctr == VAR_5)
   break;


  if (VAR_8[VAR_10->tag.handler].sync_unlinkfiletag(&VAR_10->tag,
                VAR_11) < 0)
  {







   if (VAR_6 != VAR_0)
    FUNC_1(VAR_4,
      (FUNC_2(),
       FUNC_3("could not remove file \"%s\": %m", VAR_11)));
  }


  VAR_7 = FUNC_5(VAR_7);
  FUNC_6(VAR_10);







  if (--VAR_9 <= 0)
  {
   FUNC_0();
   VAR_9 = VAR_3;
  }
 }
}
