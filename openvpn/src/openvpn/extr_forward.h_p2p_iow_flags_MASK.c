
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ len; } ;
struct TYPE_4__ {scalar_t__ len; } ;
struct TYPE_6__ {TYPE_2__ to_tun; TYPE_1__ to_link; } ;
struct context {TYPE_3__ c2; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;

__attribute__((used)) static inline unsigned int
FUNC_0(const struct context *VAR_7)
{
    unsigned int VAR_8 = (VAR_3|VAR_0|VAR_1|VAR_2|VAR_6);
    if (VAR_7->c2.to_link.len > 0)
    {
        VAR_8 |= VAR_4;
    }
    if (VAR_7->c2.to_tun.len > 0)
    {
        VAR_8 |= VAR_5;
    }
    return VAR_8;
}
