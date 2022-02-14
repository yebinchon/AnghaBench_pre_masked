
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,int ) ;
 char* FUNC_2 (struct file*,int ) ;
 int FUNC_3 (char*,char const*,char*,char*,char*,char*,int ,char*,char*,char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(const char *VAR_2, struct file *VAR_3, char *VAR_4)
{
 char *VAR_5, *VAR_6;

 VAR_6 = FUNC_2(VAR_3, VAR_0);
 VAR_5 = FUNC_1(VAR_1, VAR_0);

 FUNC_3("%s %s obj=%s%s%s pid=%d cmdline=%s%s%s\n",
    VAR_2, VAR_4,
    (VAR_6 && VAR_6[0] != '<') ? "\"" : "",
    VAR_6,
    (VAR_6 && VAR_6[0] != '<') ? "\"" : "",
    FUNC_4(VAR_1),
    VAR_5 ? "\"" : "", VAR_5, VAR_5 ? "\"" : "");

 FUNC_0(VAR_5);
 FUNC_0(VAR_6);
}
