
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ (* seek_fn ) (int ,int ) ;int cookie; } ;
struct priv {TYPE_1__ info; } ;
struct TYPE_5__ {struct priv* priv; } ;
typedef TYPE_2__ stream_t ;
typedef int int64_t ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(stream_t *VAR_0, int64_t VAR_1)
{
    struct priv *VAR_2 = VAR_0->priv;
    return VAR_2->info.seek_fn(VAR_2->info.cookie, VAR_1) >= 0;
}
