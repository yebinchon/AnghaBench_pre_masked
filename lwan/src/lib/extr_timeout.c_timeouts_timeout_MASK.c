
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timeout_t ;
struct timeouts {int expired; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct timeouts*) ;

timeout_t FUNC_2(struct timeouts *VAR_0)
{
    if (!FUNC_0(&VAR_0->expired))
        return 0;

    return FUNC_1(VAR_0);
}
