
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {struct priv* priv; } ;
struct priv {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct priv*,int) ;

__attribute__((used)) static int FUNC_1(struct vo *VAR_1, int VAR_2)
{
    struct priv *VAR_3 = VAR_1->priv;
    if (VAR_2 == VAR_0 || FUNC_0(VAR_3, VAR_2))
        return 1;

    return 0;
}
