
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_4__ {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct bcm_msg_head {TYPE_1__ ival2; TYPE_2__ ival1; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct bcm_msg_head *VAR_2)
{
 if ((VAR_2->ival1.tv_sec < 0) ||
     (VAR_2->ival1.tv_sec > VAR_0) ||
     (VAR_2->ival1.tv_usec < 0) ||
     (VAR_2->ival1.tv_usec >= VAR_1) ||
     (VAR_2->ival2.tv_sec < 0) ||
     (VAR_2->ival2.tv_sec > VAR_0) ||
     (VAR_2->ival2.tv_usec < 0) ||
     (VAR_2->ival2.tv_usec >= VAR_1))
  return 1;

 return 0;
}
