
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p_string {size_t namelen; int name; } ;


 int FUNC_0 (char*,int ,size_t) ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static const char* FUNC_2(const struct p_string* VAR_0)
{
    static char VAR_1[256];

    FUNC_0(VAR_1, VAR_0->name, VAR_0->namelen);
    VAR_1[VAR_0->namelen] = '\0';

    return (!*VAR_1 || FUNC_1(VAR_1, "__unnamed") == 0) ? ((void*)0) : VAR_1;
}
