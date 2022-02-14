
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int utf8string ;
typedef int pg_wchar ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 char* FUNC_1 (char*,int ,int ) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,unsigned char*) ;

__attribute__((used)) static char *
FUNC_5(pg_wchar VAR_1)
{
 char VAR_2[8];
 char *VAR_3;

 FUNC_0(VAR_2, 0, sizeof(VAR_2));
 FUNC_4(VAR_1, (unsigned char *) VAR_2);

 VAR_3 = FUNC_1(VAR_2, FUNC_3(VAR_2), VAR_0);

 if (VAR_3 == VAR_2)
  VAR_3 = FUNC_2(VAR_3);
 return VAR_3;
}
