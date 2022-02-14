
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relation ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int ,int ) ;

Buffer
FUNC_5(Relation VAR_2, Buffer VAR_3, BlockNumber VAR_4, int VAR_5)
{
 Buffer VAR_6;

 FUNC_0(VAR_4 != VAR_1);
 if (FUNC_1(VAR_3))
  FUNC_2(VAR_3, VAR_0);
 VAR_6 = FUNC_3(VAR_3, VAR_2, VAR_4);
 FUNC_2(VAR_6, VAR_5);
 FUNC_4(VAR_2, VAR_6);
 return VAR_6;
}
