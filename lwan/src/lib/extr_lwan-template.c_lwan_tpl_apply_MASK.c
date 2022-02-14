
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_tpl {int minimum_size; } ;
struct lwan_strbuf {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct lwan_strbuf*) ;
 struct lwan_strbuf* FUNC_3 (int ) ;
 int FUNC_4 (struct lwan_tpl*,struct lwan_strbuf*,void*) ;

struct lwan_strbuf *FUNC_5(struct lwan_tpl *VAR_0, void *VAR_1)
{
    struct lwan_strbuf *VAR_2 = FUNC_3(VAR_0->minimum_size);

    if (FUNC_1(!VAR_2))
        return ((void*)0);

    if (FUNC_0(FUNC_4(VAR_0, VAR_2, VAR_1)))
        return VAR_2;

    FUNC_2(VAR_2);
    return ((void*)0);
}
