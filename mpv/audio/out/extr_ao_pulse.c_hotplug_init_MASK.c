
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int context; int mainloop; } ;
struct ao {struct priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,struct ao*) ;
 scalar_t__ FUNC_1 (struct ao*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct priv*,int ) ;

__attribute__((used)) static int FUNC_4(struct ao *VAR_2)
{
    struct priv *VAR_3 = VAR_2->priv;
    if (FUNC_1(VAR_2) < 0)
        return -1;

    FUNC_2(VAR_3->mainloop);
    FUNC_3(VAR_3, FUNC_0(VAR_3->context, VAR_0,
                                      VAR_1, VAR_2));

    return 0;
}
