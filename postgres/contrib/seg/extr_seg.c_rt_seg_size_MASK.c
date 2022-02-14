
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ upper; scalar_t__ lower; } ;
typedef TYPE_1__ SEG ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static void
FUNC_1(SEG *VAR_0, float *VAR_1)
{
 if (VAR_0 == (SEG *) ((void*)0) || VAR_0->upper <= VAR_0->lower)
  *VAR_1 = 0.0;
 else
  *VAR_1 = (float) FUNC_0(VAR_0->upper - VAR_0->lower);

 return;
}
