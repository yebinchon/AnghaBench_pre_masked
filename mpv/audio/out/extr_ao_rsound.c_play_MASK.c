
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int rd; } ;
struct ao {int sstride; struct priv* priv; } ;


 int FUNC_0 (int ,void*,int) ;

__attribute__((used)) static int FUNC_1(struct ao *VAR_0, void **VAR_1, int VAR_2, int VAR_3)
{
    struct priv *VAR_4 = VAR_0->priv;
    return FUNC_0(VAR_4->rd, VAR_1[0], VAR_2 * VAR_0->sstride) / VAR_0->sstride;
}
