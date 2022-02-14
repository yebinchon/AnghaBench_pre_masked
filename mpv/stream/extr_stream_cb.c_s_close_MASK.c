
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cookie; int (* close_fn ) (int ) ;} ;
struct priv {TYPE_1__ info; } ;
struct TYPE_5__ {struct priv* priv; } ;
typedef TYPE_2__ stream_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(stream_t *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    VAR_1->info.close_fn(VAR_1->info.cookie);
}
