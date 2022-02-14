
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int SV ;
typedef int HV ;


 int VAR_0 ;
 int VAR_1 ;
 int ** FUNC_0 (int *,char*,int,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static SV **
FUNC_4(HV *VAR_2, const char *VAR_3)
{
 VAR_1;
 int32 VAR_4;
 char *VAR_5;
 SV **VAR_6;

 VAR_5 = FUNC_2(VAR_3, FUNC_3(VAR_3), VAR_0);


 VAR_4 = -(int) FUNC_3(VAR_5);
 VAR_6 = FUNC_0(VAR_2, VAR_5, VAR_4, 0);

 if (VAR_5 != VAR_3)
  FUNC_1(VAR_5);

 return VAR_6;
}
