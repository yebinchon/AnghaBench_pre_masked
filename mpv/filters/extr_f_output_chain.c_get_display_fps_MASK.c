
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_stream_info {struct chain* priv; } ;
struct chain {scalar_t__ vo; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,double*) ;

__attribute__((used)) static double FUNC_1(struct mp_stream_info *VAR_1)
{
    struct chain *VAR_2 = VAR_1->priv;
    double VAR_3 = 0;
    if (VAR_2->vo)
        FUNC_0(VAR_2->vo, VAR_0, &VAR_3);
    return VAR_3;
}
