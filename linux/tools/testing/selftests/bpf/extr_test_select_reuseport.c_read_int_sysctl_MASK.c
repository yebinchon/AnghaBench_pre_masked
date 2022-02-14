
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (int,char*,char*,char const*,int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (char const*,int ) ;
 int FUNC_4 (int,char*,int) ;

__attribute__((used)) static int FUNC_5(const char *VAR_1)
{
 char VAR_2[16];
 int VAR_3, VAR_4;

 VAR_3 = FUNC_3(VAR_1, 0);
 FUNC_0(VAR_3 == -1, "open(sysctl)", "sysctl:%s fd:%d errno:%d\n",
       VAR_1, VAR_3, VAR_0);

 VAR_4 = FUNC_4(VAR_3, VAR_2, sizeof(VAR_2));
 FUNC_0(VAR_4 <= 0, "read(sysctl)", "sysctl:%s ret:%d errno:%d\n",
       VAR_1, VAR_4, VAR_0);
 FUNC_2(VAR_3);

 return FUNC_1(VAR_2);
}
