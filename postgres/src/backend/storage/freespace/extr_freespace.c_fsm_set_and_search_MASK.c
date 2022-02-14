
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint16 ;
struct TYPE_4__ {scalar_t__ level; } ;
typedef int Relation ;
typedef int Page ;
typedef TYPE_1__ FSMAddress ;
typedef int Buffer ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_1__,int) ;
 int FUNC_5 (int ,int ,int,int) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_7(Relation VAR_2, FSMAddress VAR_3, uint16 VAR_4,
       uint8 VAR_5, uint8 VAR_6)
{
 Buffer VAR_7;
 Page VAR_8;
 int VAR_9 = -1;

 VAR_7 = FUNC_4(VAR_2, VAR_3, 1);
 FUNC_1(VAR_7, VAR_0);

 VAR_8 = FUNC_0(VAR_7);

 if (FUNC_6(VAR_8, VAR_4, VAR_5))
  FUNC_2(VAR_7, 0);

 if (VAR_6 != 0)
 {

  VAR_9 = FUNC_5(VAR_7, VAR_6,
           VAR_3.level == VAR_1,
           1);
 }

 FUNC_3(VAR_7);

 return VAR_9;
}
