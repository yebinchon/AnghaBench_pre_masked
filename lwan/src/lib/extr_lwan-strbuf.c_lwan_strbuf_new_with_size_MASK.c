
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_strbuf {int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct lwan_strbuf*) ;
 int FUNC_2 (struct lwan_strbuf*,size_t) ;
 struct lwan_strbuf* FUNC_3 (int) ;

struct lwan_strbuf *FUNC_4(size_t VAR_1)
{
    struct lwan_strbuf *VAR_2 = FUNC_3(sizeof(*VAR_2));

    if (FUNC_0(!FUNC_2(VAR_2, VAR_1))) {
        FUNC_1(VAR_2);

        return ((void*)0);
    }

    VAR_2->flags |= VAR_0;

    return VAR_2;
}
