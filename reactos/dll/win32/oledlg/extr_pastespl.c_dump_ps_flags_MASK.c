
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps_flag {char* name; int flag; } ;
typedef int DWORD ;


 int FUNC_0 (char*,int,char*) ;
 struct ps_flag* VAR_0 ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static void FUNC_2(DWORD VAR_1)
{
    char VAR_2[1000] = "";

    const struct ps_flag *VAR_3 = VAR_0;
    for( ; VAR_3->name; VAR_3++) {
        if(VAR_1 & VAR_3->flag) {
            FUNC_1(VAR_2, VAR_3->name);
            FUNC_1(VAR_2, "|");
        }
    }
    FUNC_0("flags %08x %s\n", VAR_1, VAR_2);
}
