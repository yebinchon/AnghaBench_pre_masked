
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ (* size_fn ) (int ) ;int cookie; } ;
struct priv {TYPE_1__ info; } ;
struct TYPE_5__ {struct priv* priv; } ;
typedef TYPE_2__ stream_t ;
typedef scalar_t__ int64_t ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int64_t FUNC_1(stream_t *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    if (VAR_1->info.size_fn) {
        int64_t VAR_2 = VAR_1->info.size_fn(VAR_1->info.cookie);
        if (VAR_2 >= 0)
            return VAR_2;
    }

    return -1;
}
