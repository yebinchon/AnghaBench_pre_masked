
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ rd_createSubid; scalar_t__ rd_newRelfilenodeSubid; } ;
typedef scalar_t__ SubTransactionId ;
typedef TYPE_1__* Relation ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_4(Relation VAR_2, bool VAR_3,
     SubTransactionId VAR_4, SubTransactionId VAR_5)
{






 if (VAR_2->rd_createSubid == VAR_4)
 {
  if (VAR_3)
   VAR_2->rd_createSubid = VAR_5;
  else if (FUNC_2(VAR_2))
  {
   FUNC_0(VAR_2, 0);
   return;
  }
  else
  {







   VAR_2->rd_createSubid = VAR_5;
   FUNC_3(VAR_1, "cannot remove relcache entry for \"%s\" because it has nonzero refcount",
     FUNC_1(VAR_2));
  }
 }




 if (VAR_2->rd_newRelfilenodeSubid == VAR_4)
 {
  if (VAR_3)
   VAR_2->rd_newRelfilenodeSubid = VAR_5;
  else
   VAR_2->rd_newRelfilenodeSubid = VAR_0;
 }
}
