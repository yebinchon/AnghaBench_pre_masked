
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct namespace {char* name; struct namespace* parent; } ;


 scalar_t__ FUNC_0 (struct namespace*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;

__attribute__((used)) static char *FUNC_4(char *VAR_1, struct namespace *VAR_2, const char *VAR_3)
{
    if(FUNC_0(VAR_2)) {
        if(!VAR_0)
            return VAR_1;
        FUNC_2(VAR_1, "ABI");
        FUNC_1(VAR_1, VAR_3);
        return VAR_1 + FUNC_3(VAR_1);
    }

    VAR_1 = FUNC_4(VAR_1, VAR_2->parent, VAR_3);
    FUNC_2(VAR_1, VAR_2->name);
    FUNC_1(VAR_1, VAR_3);
    return VAR_1 + FUNC_3(VAR_1);
}
