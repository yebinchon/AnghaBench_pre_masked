
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {scalar_t__ retval; int stream; int mainloop; } ;
struct ao {struct priv* priv; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct ao*,int) ;
 int FUNC_2 (int ,int ,struct ao*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (struct priv*,int ) ;

__attribute__((used)) static void FUNC_5(struct ao *VAR_1)
{

    FUNC_1(VAR_1, 1);
    struct priv *VAR_2 = VAR_1->priv;
    FUNC_3(VAR_2->mainloop);
    VAR_2->retval = 0;
    if (!FUNC_4(VAR_2, FUNC_2(VAR_2->stream, VAR_0, VAR_1)) ||
        !VAR_2->retval)
        FUNC_0("pa_stream_flush() failed");
    FUNC_1(VAR_1, 0);
}
