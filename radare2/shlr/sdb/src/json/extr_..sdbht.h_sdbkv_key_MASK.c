
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ key; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
typedef TYPE_2__ SdbKv ;



__attribute__((used)) static inline char *FUNC_0(const SdbKv *VAR_0) {
 return (char *)VAR_0->base.key;
}
