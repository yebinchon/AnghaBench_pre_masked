
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* priv; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_7__ {scalar_t__ error; } ;
typedef TYPE_2__ AVIOContext ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,void*,int) ;

__attribute__((used)) static int FUNC_2(stream_t *VAR_0, void *VAR_1, int VAR_2)
{
    AVIOContext *VAR_3 = VAR_0->priv;
    FUNC_1(VAR_3, VAR_1, VAR_2);
    FUNC_0(VAR_3);
    if (VAR_3->error)
        return -1;
    return VAR_2;
}
