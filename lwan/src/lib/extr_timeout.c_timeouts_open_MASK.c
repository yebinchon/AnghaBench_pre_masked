
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timeout_error_t ;
struct timeouts {int dummy; } ;


 int VAR_0 ;
 struct timeouts* FUNC_0 (int,int) ;
 struct timeouts* FUNC_1 (struct timeouts*) ;

struct timeouts *FUNC_2(timeout_error_t *VAR_1)
{
    struct timeouts *VAR_2;

    if ((VAR_2 = FUNC_0(sizeof *VAR_2, 64)))
        return FUNC_1(VAR_2);

    *VAR_1 = VAR_0;

    return ((void*)0);
}
