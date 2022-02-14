
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parser {int template_flags; } ;
struct lwan_strbuf {int dummy; } ;
struct TYPE_2__ {int len; int value; } ;
struct lexeme {TYPE_1__ value; } ;


 int VAR_0 ;
 struct lwan_strbuf* FUNC_0 (int ,int ) ;
 struct lwan_strbuf* FUNC_1 (int ) ;
 int FUNC_2 (struct lwan_strbuf*,int ,int ) ;

__attribute__((used)) static struct lwan_strbuf *FUNC_3(struct parser *VAR_1,
                                                   struct lexeme *VAR_2)
{
    if (VAR_1->template_flags & VAR_0)
        return FUNC_0(VAR_2->value.value, VAR_2->value.len);

    struct lwan_strbuf *VAR_3 = FUNC_1(VAR_2->value.len);
    if (VAR_3)
        FUNC_2(VAR_3, VAR_2->value.value, VAR_2->value.len);

    return VAR_3;
}
