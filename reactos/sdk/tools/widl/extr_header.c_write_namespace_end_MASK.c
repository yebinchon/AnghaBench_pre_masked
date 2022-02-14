
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct namespace {struct namespace* parent; int name; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (struct namespace*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int,char*,int ) ;

__attribute__((used)) static void FUNC_2(FILE *VAR_1, struct namespace *VAR_2)
{
    if(FUNC_0(VAR_2)) {
        if(VAR_0)
            FUNC_1(VAR_1, -1, "}", VAR_2->name);
        return;
    }

    FUNC_1(VAR_1, -1, "}", VAR_2->name);
    FUNC_2(VAR_1, VAR_2->parent);
}
