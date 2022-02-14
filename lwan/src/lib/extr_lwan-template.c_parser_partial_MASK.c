
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parser {int descriptor; } ;
struct lwan_tpl {int dummy; } ;
struct TYPE_2__ {int len; int value; } ;
struct lexeme {scalar_t__ type; TYPE_1__ value; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct parser*,int ,int ,struct lwan_tpl*) ;
 void* FUNC_1 (struct lexeme*,char*,char*) ;
 struct lwan_tpl* FUNC_2 (char*,int ) ;
 void* VAR_2 ;
 char* FUNC_3 (int ,int ) ;
 void* FUNC_4 (struct lexeme*) ;

__attribute__((used)) static void *FUNC_5(struct parser *VAR_3, struct lexeme *VAR_4)
{
    struct lwan_tpl *VAR_5;
    char *VAR_6 = FUNC_3(VAR_4->value.value, VAR_4->value.len);

    if (VAR_4->type != VAR_1)
        return FUNC_4(VAR_4);

    VAR_5 = FUNC_2(VAR_6, VAR_3->descriptor);
    if (VAR_5) {
        FUNC_0(VAR_3, VAR_0, 0, VAR_5);
        return VAR_2;
    }

    return FUNC_1(VAR_4, "Could not compile template ``%s''", VAR_6);
}
