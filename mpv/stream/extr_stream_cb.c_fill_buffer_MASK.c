
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cookie; scalar_t__ (* read_fn ) (int ,void*,size_t) ;} ;
struct priv {TYPE_1__ info; } ;
struct TYPE_5__ {struct priv* priv; } ;
typedef TYPE_2__ stream_t ;


 scalar_t__ FUNC_0 (int ,void*,size_t) ;

__attribute__((used)) static int FUNC_1(stream_t *VAR_0, void *VAR_1, int VAR_2)
{
    struct priv *VAR_3 = VAR_0->priv;
    return (int)VAR_3->info.read_fn(VAR_3->info.cookie, VAR_1, (size_t)VAR_2);
}
