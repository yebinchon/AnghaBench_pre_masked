
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int num; } ;
struct TYPE_3__ {unsigned int num; unsigned int start; } ;
struct parsed_symbol {TYPE_2__ stack; TYPE_1__ names; } ;
struct array {int dummy; } ;


 char* VAR_0 ;
 char* FUNC_0 (struct parsed_symbol*,struct array*,char*,char,char) ;
 char* FUNC_1 (struct parsed_symbol*) ;
 int FUNC_2 (struct array*) ;
 char* FUNC_3 (struct parsed_symbol*,char*,char*,char*) ;

__attribute__((used)) static char* FUNC_4(struct parsed_symbol* VAR_1)
{
    char *VAR_2, *VAR_3;
    unsigned VAR_4 = VAR_1->names.num;
    unsigned VAR_5 = VAR_1->names.start;
    unsigned VAR_6 = VAR_1->stack.num;
    struct array VAR_7;

    VAR_1->names.start = VAR_1->names.num;
    if (!(VAR_2 = FUNC_1(VAR_1))) {
        VAR_1->names.start = VAR_5;
        return VAR_0;
    }
    FUNC_2(&VAR_7);
    VAR_3 = FUNC_0(VAR_1, &VAR_7, VAR_0, '<', '>');
    if (VAR_3 != ((void*)0))
        VAR_2 = FUNC_3(VAR_1, "%s%s", VAR_2, VAR_3);
    VAR_1->names.num = VAR_4;
    VAR_1->names.start = VAR_5;
    VAR_1->stack.num = VAR_6;
    return VAR_2;
}
