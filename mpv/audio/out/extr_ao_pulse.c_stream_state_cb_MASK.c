
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int mainloop; } ;
struct ao {struct priv* priv; } ;
typedef int pa_stream ;


 int FUNC_0 (struct ao*,char*) ;



 int FUNC_1 (struct ao*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(pa_stream *VAR_0, void *VAR_1)
{
    struct ao *VAR_2 = VAR_1;
    struct priv *VAR_3 = VAR_2->priv;
    switch (FUNC_2(VAR_0)) {
    case 130:
        FUNC_0(VAR_2, "Stream failed.\n");
        FUNC_1(VAR_2);
        FUNC_3(VAR_3->mainloop, 0);
        break;
    case 129:
    case 128:
        FUNC_3(VAR_3->mainloop, 0);
        break;
    }
}
