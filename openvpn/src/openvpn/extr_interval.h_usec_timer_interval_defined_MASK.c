
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tv_sec; } ;
struct TYPE_3__ {scalar_t__ tv_sec; } ;
struct usec_timer {TYPE_2__ end; TYPE_1__ start; } ;



__attribute__((used)) static inline bool
FUNC_0(struct usec_timer *VAR_0)
{
    return VAR_0->start.tv_sec && VAR_0->end.tv_sec;
}
