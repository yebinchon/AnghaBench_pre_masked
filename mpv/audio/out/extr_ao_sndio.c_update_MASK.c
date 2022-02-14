
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int pfd; int hdl; } ;
struct ao {struct priv* priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ao *VAR_3)
{
    struct priv *VAR_4 = VAR_3->priv;
    int VAR_5 = FUNC_1(VAR_4->hdl, VAR_4->pfd, VAR_1);
    while (FUNC_0(VAR_4->pfd, VAR_5, 0) < 0 && VAR_2 == VAR_0) {}
    FUNC_2(VAR_4->hdl, VAR_4->pfd);
}
