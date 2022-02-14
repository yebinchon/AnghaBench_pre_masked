
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;
typedef scalar_t__ int32 ;


 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

text *
FUNC_5(text *VAR_1, text *VAR_2)
{
 int32 VAR_3 = FUNC_2(VAR_1) - VAR_0;
 int32 VAR_4 = FUNC_2(VAR_2) - VAR_0;
 int32 VAR_5 = VAR_3 + VAR_4 + VAR_0;
 text *VAR_6 = (text *) FUNC_4(VAR_5);

 FUNC_0(VAR_6, VAR_5);
 FUNC_3(FUNC_1(VAR_6), FUNC_1(VAR_1), VAR_3);
 FUNC_3(FUNC_1(VAR_6) + VAR_3, FUNC_1(VAR_2), VAR_4);
 return VAR_6;
}
