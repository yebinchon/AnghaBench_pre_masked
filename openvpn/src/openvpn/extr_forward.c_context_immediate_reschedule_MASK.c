
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_4__ {TYPE_1__ timeval; } ;
struct context {TYPE_2__ c2; } ;



__attribute__((used)) static inline void
FUNC_0(struct context *VAR_0)
{
    VAR_0->c2.timeval.tv_sec = 0;
    VAR_0->c2.timeval.tv_usec = 0;
}
