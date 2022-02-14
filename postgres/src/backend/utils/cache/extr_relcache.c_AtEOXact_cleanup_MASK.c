
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int rd_refcnt; scalar_t__ rd_createSubid; scalar_t__ rd_newRelfilenodeSubid; scalar_t__ rd_isnailed; } ;
typedef TYPE_1__* Relation ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_5 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_6(Relation VAR_2, bool VAR_3)
{
 if (VAR_2->rd_createSubid != VAR_0)
 {
  if (VAR_3)
   VAR_2->rd_createSubid = VAR_0;
  else if (FUNC_4(VAR_2))
  {
   FUNC_2(VAR_2, 0);
   return;
  }
  else
  {
   VAR_2->rd_createSubid = VAR_0;
   FUNC_5(VAR_1, "cannot remove relcache entry for \"%s\" because it has nonzero refcount",
     FUNC_3(VAR_2));
  }
 }




 VAR_2->rd_newRelfilenodeSubid = VAR_0;
}
