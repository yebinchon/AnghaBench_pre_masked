
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ off_t ;
struct TYPE_3__ {scalar_t__ spf; scalar_t__ ntom_step; } ;
typedef TYPE_1__ mpg123_handle ;


 int VAR_0 ;

unsigned long FUNC_0(mpg123_handle *VAR_1, off_t VAR_2)
{
 off_t VAR_3;
 VAR_3 = (VAR_0>>1) + VAR_1->spf*VAR_2*VAR_1->ntom_step;
 VAR_3 -= (VAR_3/VAR_0)*VAR_0;

 return (unsigned long) VAR_3;
}
