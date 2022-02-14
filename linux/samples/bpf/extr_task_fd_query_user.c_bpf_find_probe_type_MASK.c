
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (char*,int,char*,char const*) ;
 scalar_t__ FUNC_5 (char*,int *,int) ;

__attribute__((used)) static int FUNC_6(const char *VAR_3)
{
 char VAR_4[256];
 int VAR_5, VAR_6;

 VAR_6 = FUNC_4(VAR_4, sizeof(VAR_4), VAR_1, VAR_3);
 FUNC_0(VAR_6 < 0 || VAR_6 >= sizeof(VAR_4));

 VAR_5 = FUNC_2(VAR_4, VAR_0);
 FUNC_0(VAR_5 < 0);

 VAR_6 = FUNC_3(VAR_5, VAR_4, sizeof(VAR_4));
 FUNC_1(VAR_5);
 FUNC_0(VAR_6 < 0 || VAR_6 >= sizeof(VAR_4));

 VAR_2 = 0;
 VAR_6 = (int)FUNC_5(VAR_4, ((void*)0), 10);
 FUNC_0(VAR_2);
 return VAR_6;
}
