
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct priv {int fd; scalar_t__ close; } ;
struct TYPE_3__ {struct priv* priv; } ;
typedef TYPE_1__ stream_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(stream_t *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    if (VAR_1->close)
        FUNC_0(VAR_1->fd);
}
