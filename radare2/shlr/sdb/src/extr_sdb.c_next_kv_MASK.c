
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int elem_size; } ;
struct TYPE_5__ {TYPE_1__ opt; } ;
typedef int SdbKv ;
typedef TYPE_2__ HtPP ;



__attribute__((used)) static inline SdbKv *FUNC_0(HtPP *VAR_0, SdbKv *VAR_1) {
 return (SdbKv *)((char *)VAR_1 + VAR_0->opt.elem_size);
}
