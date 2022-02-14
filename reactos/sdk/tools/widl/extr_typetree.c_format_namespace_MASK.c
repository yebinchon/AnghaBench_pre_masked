
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct namespace {char* name; struct namespace* parent; } ;


 char* FUNC_0 (char*,struct namespace*,char const*) ;
 int FUNC_1 (struct namespace*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char const*) ;
 scalar_t__ VAR_0 ;
 char* FUNC_4 (unsigned int) ;

char *FUNC_5(struct namespace *VAR_1, const char *VAR_2, const char *VAR_3, const char *VAR_4)
{
    unsigned VAR_5 = FUNC_3(VAR_2) + FUNC_3(VAR_4);
    unsigned VAR_6 = FUNC_3(VAR_3);
    struct namespace *VAR_7;
    char *VAR_8, *VAR_9;

    if(VAR_0 && !FUNC_1(VAR_1))
        VAR_5 += 3 + VAR_6;

    for(VAR_7 = VAR_1; !FUNC_1(VAR_7); VAR_7 = VAR_7->parent)
        VAR_5 += FUNC_3(VAR_7->name) + VAR_6;

    VAR_8 = FUNC_4(VAR_5+1);
    FUNC_2(VAR_8, VAR_2);
    VAR_9 = FUNC_0(VAR_8 + FUNC_3(VAR_8), VAR_1, VAR_3);
    FUNC_2(VAR_9, VAR_4);

    return VAR_8;
}
