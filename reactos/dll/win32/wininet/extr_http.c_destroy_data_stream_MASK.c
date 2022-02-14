
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* vtbl; } ;
typedef TYPE_2__ data_stream_t ;
struct TYPE_5__ {int (* destroy ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static inline void FUNC_1(data_stream_t *VAR_0)
{
    VAR_0->vtbl->destroy(VAR_0);
}
