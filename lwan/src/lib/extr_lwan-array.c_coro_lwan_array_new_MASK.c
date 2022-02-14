
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_array {int dummy; } ;
struct coro {int dummy; } ;


 scalar_t__ FUNC_0 (struct lwan_array*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct lwan_array* FUNC_1 (struct coro*,int,int ) ;
 int FUNC_2 (struct lwan_array*) ;

struct lwan_array *FUNC_3(struct coro *VAR_2, bool VAR_3)
{
    struct lwan_array *VAR_4;

    VAR_4 = FUNC_1(VAR_2, sizeof(*VAR_4),
                             VAR_3 ? VAR_1
                                          : VAR_0);
    if (FUNC_0(VAR_4))
        FUNC_2(VAR_4);

    return VAR_4;
}
