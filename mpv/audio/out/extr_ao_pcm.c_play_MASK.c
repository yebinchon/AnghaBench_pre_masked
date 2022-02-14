
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int data_length; int fp; } ;
struct ao {int sstride; struct priv* priv; } ;


 int FUNC_0 (void*,int,int,int ) ;

__attribute__((used)) static int FUNC_1(struct ao *VAR_0, void **VAR_1, int VAR_2, int VAR_3)
{
    struct priv *VAR_4 = VAR_0->priv;
    int VAR_5 = VAR_2 * VAR_0->sstride;

    FUNC_0(VAR_1[0], VAR_5, 1, VAR_4->fp);
    VAR_4->data_length += VAR_5;
    return VAR_2;
}
