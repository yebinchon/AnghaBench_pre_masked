
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SMACK {unsigned int is_nocase; char* name; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (struct SMACK*,int ,int) ;
 int VAR_0 ;
 int FUNC_5 (char const*) ;

struct SMACK *
FUNC_6(const char *VAR_1, unsigned VAR_2)
{
    struct SMACK *VAR_3;

    VAR_3 = (struct SMACK *)FUNC_2(sizeof (struct SMACK));
    if (VAR_3 == ((void*)0)) {
        FUNC_1(VAR_0, "%s: out of memory error\n", "smack");
        FUNC_0(1);
    }
    FUNC_4 (VAR_3, 0, sizeof (struct SMACK));

    VAR_3->is_nocase = VAR_2;
    VAR_3->name = (char*)FUNC_2(FUNC_5(VAR_1)+1);
    if (VAR_3->name == ((void*)0)) {
        FUNC_1(VAR_0, "%s: out of memory error\n", "smack");
        FUNC_0(1);
    }
    FUNC_3(VAR_3->name, VAR_1, FUNC_5(VAR_1)+1);
    return VAR_3;
}
