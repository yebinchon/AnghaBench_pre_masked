
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct priv {TYPE_1__** buffer_queue; } ;
struct ao {struct priv* priv; } ;
struct TYPE_2__ {int (* Clear ) (TYPE_1__**) ;} ;


 int FUNC_0 (TYPE_1__**) ;

__attribute__((used)) static void FUNC_1(struct ao *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    (*VAR_1->buffer_queue)->Clear(VAR_1->buffer_queue);
}
