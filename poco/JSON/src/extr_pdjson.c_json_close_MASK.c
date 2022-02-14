
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int string; } ;
struct TYPE_5__ {int (* free ) (int ) ;} ;
struct TYPE_7__ {TYPE_2__ data; TYPE_1__ alloc; int stack; } ;
typedef TYPE_3__ json_stream ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(json_stream *VAR_0)
{
    VAR_0->alloc.free(VAR_0->stack);
    VAR_0->alloc.free(VAR_0->data.string);
}
