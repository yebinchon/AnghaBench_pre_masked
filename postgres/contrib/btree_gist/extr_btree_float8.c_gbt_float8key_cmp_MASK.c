
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ lower; scalar_t__ upper; } ;
typedef TYPE_1__ float8KEY ;
struct TYPE_4__ {scalar_t__ t; } ;
typedef TYPE_2__ Nsrt ;
typedef int FmgrInfo ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1, FmgrInfo *VAR_2)
{
 float8KEY *VAR_3 = (float8KEY *) (((const Nsrt *) VAR_0)->t);
 float8KEY *VAR_4 = (float8KEY *) (((const Nsrt *) VAR_1)->t);

 if (VAR_3->lower == VAR_4->lower)
 {
  if (VAR_3->upper == VAR_4->upper)
   return 0;

  return (VAR_3->upper > VAR_4->upper) ? 1 : -1;
 }

 return (VAR_3->lower > VAR_4->lower) ? 1 : -1;
}
