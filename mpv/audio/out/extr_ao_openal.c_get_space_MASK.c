
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int num_buffers; int num_samples; } ;
struct ao {struct priv* priv; } ;
typedef int ALint ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int*) ;
 int VAR_1 ;
 int FUNC_1 (struct ao*) ;

__attribute__((used)) static int FUNC_2(struct ao *VAR_2)
{
    struct priv *VAR_3 = VAR_2->priv;
    ALint VAR_4;
    FUNC_1(VAR_2);
    FUNC_0(VAR_1, VAR_0, &VAR_4);
    VAR_4 = VAR_3->num_buffers - VAR_4;
    if (VAR_4 < 0)
        return 0;
    return VAR_3->num_samples * VAR_4;
}
