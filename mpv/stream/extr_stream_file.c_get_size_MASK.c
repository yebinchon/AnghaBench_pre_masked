
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct priv {int fd; } ;
struct TYPE_3__ {int pos; struct priv* priv; } ;
typedef TYPE_1__ stream_t ;
typedef int off_t ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int64_t FUNC_1(stream_t *VAR_2)
{
    struct priv *VAR_3 = VAR_2->priv;
    off_t VAR_4 = FUNC_0(VAR_3->fd, 0, VAR_0);
    FUNC_0(VAR_3->fd, VAR_2->pos, VAR_1);
    return VAR_4 == (off_t)-1 ? -1 : VAR_4;
}
