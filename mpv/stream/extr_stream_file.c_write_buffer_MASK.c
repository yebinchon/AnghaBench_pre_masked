
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct priv {int fd; } ;
struct TYPE_3__ {struct priv* priv; } ;
typedef TYPE_1__ stream_t ;


 int FUNC_0 (int ,void*,int) ;

__attribute__((used)) static int FUNC_1(stream_t *VAR_0, void *VAR_1, int VAR_2)
{
    struct priv *VAR_3 = VAR_0->priv;
    return FUNC_0(VAR_3->fd, VAR_1, VAR_2);
}
