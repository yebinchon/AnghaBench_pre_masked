
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (int,char*,char*,char const*,int,int,...) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (char*,int,char*,int) ;
 int FUNC_4 (int,char*,int) ;

__attribute__((used)) static void FUNC_5(const char *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 char VAR_7[16];

 VAR_4 = FUNC_2(VAR_2, VAR_0);
 FUNC_0(VAR_4 == -1, "open(sysctl)", "sysctl:%s fd:%d errno:%d\n",
       VAR_2, VAR_4, VAR_1);

 VAR_6 = FUNC_3(VAR_7, sizeof(VAR_7), "%d", VAR_3);
 VAR_5 = FUNC_4(VAR_4, VAR_7, VAR_6);
 FUNC_0(VAR_5 != VAR_6, "write(sysctl)",
       "sysctl:%s ret:%d size:%d errno:%d\n", VAR_2, VAR_5, VAR_6, VAR_1);
 FUNC_1(VAR_4);
}
