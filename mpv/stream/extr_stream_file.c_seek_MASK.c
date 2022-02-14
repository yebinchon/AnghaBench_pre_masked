
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct priv {int fd; } ;
struct TYPE_3__ {struct priv* priv; } ;
typedef TYPE_1__ stream_t ;
typedef scalar_t__ off_t ;
typedef int int64_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(stream_t *VAR_1, int64_t VAR_2)
{
    struct priv *VAR_3 = VAR_1->priv;
    return FUNC_0(VAR_3->fd, VAR_2, VAR_0) != (off_t)-1;
}
