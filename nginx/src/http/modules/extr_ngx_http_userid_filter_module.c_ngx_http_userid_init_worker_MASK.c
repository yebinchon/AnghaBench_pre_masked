
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timeval {scalar_t__ tv_usec; } ;
typedef int ngx_int_t ;
typedef int ngx_cycle_t ;


 int VAR_0 ;
 int FUNC_0 (struct timeval*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_cycle_t *VAR_3)
{
    struct timeval VAR_4;

    FUNC_0(&VAR_4);


    VAR_2 = (((uint32_t) VAR_4.tv_usec / 20) << 16) | VAR_1;

    return VAR_0;
}
