
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_connection {int dummy; } ;
struct lwan {int conns; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (size_t const,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,size_t const) ;

__attribute__((used)) static void FUNC_4(struct lwan *VAR_0, size_t VAR_1)
{
    const size_t VAR_2 = VAR_1 * sizeof(struct lwan_connection);

    VAR_0->conns = FUNC_1(VAR_2, 64);
    if (FUNC_0(!VAR_0->conns))
        FUNC_2("lwan_alloc_aligned");

    FUNC_3(VAR_0->conns, 0, VAR_2);
}
