
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * buf; } ;
struct magic_set {TYPE_1__ o; } ;


 size_t FUNC_0 (int *) ;

size_t
FUNC_1(const struct magic_set *VAR_0)
{
 return VAR_0->o.buf == ((void*)0) ? 0 : FUNC_0(VAR_0->o.buf);
}
