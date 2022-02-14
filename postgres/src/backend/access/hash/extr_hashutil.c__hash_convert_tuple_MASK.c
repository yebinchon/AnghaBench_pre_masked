
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int Relation ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

bool
FUNC_2(Relation VAR_0,
     Datum *VAR_1, bool *VAR_2,
     Datum *VAR_3, bool *VAR_4)
{
 uint32 VAR_5;





 if (VAR_2[0])
  return 0;

 VAR_5 = FUNC_1(VAR_0, VAR_1[0]);
 VAR_3[0] = FUNC_0(VAR_5);
 VAR_4[0] = 0;
 return 1;
}
