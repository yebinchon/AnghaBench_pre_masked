
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64 ;
typedef int Numeric ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static Numeric
FUNC_5(Numeric VAR_2, unsigned VAR_3)
{
 Datum VAR_4 = FUNC_4(VAR_2);
 Datum VAR_5;
 Datum VAR_6;
 Datum VAR_7;

 VAR_5 = FUNC_3((int64) (1 << VAR_3));
 VAR_6 = FUNC_1(VAR_0, VAR_5);
 VAR_7 = FUNC_2(VAR_1, VAR_4, VAR_6);
 return FUNC_0(VAR_7);
}
