
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ncp_enabled; int route_nopull; } ;
struct context {TYPE_1__ options; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;

unsigned int
FUNC_0(const struct context *VAR_17)
{
    unsigned int VAR_18 =
        VAR_16
        | VAR_10
        | VAR_13
        | VAR_14
        | VAR_11
        | VAR_12
        | VAR_15
        | VAR_0
        | VAR_7
        | VAR_4
        | VAR_2
        | VAR_1
        | VAR_8
        | VAR_6;

    if (!VAR_17->options.route_nopull)
    {
        VAR_18 |= (VAR_9 | VAR_3);
    }

    if (VAR_17->options.ncp_enabled)
    {
        VAR_18 |= VAR_5;
    }

    return VAR_18;
}
