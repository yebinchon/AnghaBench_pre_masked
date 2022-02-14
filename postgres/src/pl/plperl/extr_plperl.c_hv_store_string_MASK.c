
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int SV ;
typedef int HV ;


 int VAR_0 ;
 int VAR_1 ;
 int ** FUNC_0 (int *,char*,int,int *,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static SV **
FUNC_4(HV *VAR_2, const char *VAR_3, SV *VAR_4)
{
 VAR_1;
 int32 VAR_5;
 char *VAR_6;
 SV **VAR_7;

 VAR_6 = FUNC_2(VAR_3, FUNC_3(VAR_3), VAR_0);





 VAR_5 = -(int) FUNC_3(VAR_6);
 VAR_7 = FUNC_0(VAR_2, VAR_6, VAR_5, VAR_4, 0);

 if (VAR_6 != VAR_3)
  FUNC_1(VAR_6);

 return VAR_7;
}
