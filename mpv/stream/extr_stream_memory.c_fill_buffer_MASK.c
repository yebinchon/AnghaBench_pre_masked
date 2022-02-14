
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ len; scalar_t__ start; } ;
struct priv {TYPE_2__ data; } ;
struct TYPE_4__ {scalar_t__ pos; struct priv* priv; } ;
typedef TYPE_1__ stream_t ;
typedef TYPE_2__ bstr ;


 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (void*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(stream_t *VAR_0, void *VAR_1, int VAR_2)
{
    struct priv *VAR_3 = VAR_0->priv;
    bstr VAR_4 = VAR_3->data;
    if (VAR_0->pos < 0 || VAR_0->pos > VAR_4.len)
        return 0;
    VAR_2 = FUNC_0(VAR_2, VAR_4.len - VAR_0->pos);
    FUNC_1(VAR_1, VAR_4.start + VAR_0->pos, VAR_2);
    return VAR_2;
}
