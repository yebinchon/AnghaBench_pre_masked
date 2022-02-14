
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_buf {struct d3d_buf* priv; } ;
struct ra {int dummy; } ;
struct d3d_buf {int uav; int buf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ra_buf*) ;

__attribute__((used)) static void FUNC_2(struct ra *VAR_0, struct ra_buf *VAR_1)
{
    if (!VAR_1)
        return;
    struct d3d_buf *VAR_2 = VAR_1->priv;
    FUNC_0(VAR_2->buf);
    FUNC_0(VAR_2->uav);
    FUNC_1(VAR_1);
}
