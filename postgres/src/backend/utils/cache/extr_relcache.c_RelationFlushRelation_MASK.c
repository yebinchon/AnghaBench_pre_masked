
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ rd_createSubid; scalar_t__ rd_newRelfilenodeSubid; } ;
typedef TYPE_1__* Relation ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(Relation VAR_1)
{
 if (VAR_1->rd_createSubid != VAR_0 ||
  VAR_1->rd_newRelfilenodeSubid != VAR_0)
 {
  FUNC_3(VAR_1);
  FUNC_0(VAR_1, 1);
  FUNC_1(VAR_1);
 }
 else
 {



  bool VAR_2 = !FUNC_2(VAR_1);

  FUNC_0(VAR_1, VAR_2);
 }
}
