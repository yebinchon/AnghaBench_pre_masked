
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {scalar_t__ stream; int mainloop; } ;
struct ao {struct priv* priv; } ;


 int FUNC_0 (scalar_t__,int ,struct ao*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct priv*,int ) ;

__attribute__((used)) static void FUNC_3(struct ao *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;
    if (VAR_2->stream) {
        FUNC_1(VAR_2->mainloop);
        FUNC_2(VAR_2, FUNC_0(VAR_2->stream, VAR_0, VAR_1));
    }
}
