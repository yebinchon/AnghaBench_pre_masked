
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32 ;
typedef scalar_t__ Oid ;


 int FUNC_0 (int) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (scalar_t__,int ) ;
 char* FUNC_4 (char*,char const*,...) ;

__attribute__((used)) static char *
FUNC_5(const char *VAR_1, int32 VAR_2, Oid VAR_3)
{
 char *VAR_4;


 FUNC_0(VAR_2 >= 0);

 if (VAR_3 == VAR_0)
 {

  VAR_4 = FUNC_4("%s(%d)", VAR_1, (int) VAR_2);
 }
 else
 {

  char *VAR_5;

  VAR_5 = FUNC_1(FUNC_3(VAR_3,
             FUNC_2(VAR_2)));
  VAR_4 = FUNC_4("%s%s", VAR_1, VAR_5);
 }

 return VAR_4;
}
