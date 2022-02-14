
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ float8 ;
typedef int FmgrInfo ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static float8
FUNC_3(const void *VAR_0, const void *VAR_1, FmgrInfo *VAR_2)
{
 float8 VAR_3 = *(const float8 *) VAR_0;
 float8 VAR_4 = *(const float8 *) VAR_1;
 float8 VAR_5;

 VAR_5 = VAR_3 - VAR_4;
 FUNC_1(VAR_5, FUNC_2(VAR_3) || FUNC_2(VAR_4), 1);

 return FUNC_0(VAR_5);
}
