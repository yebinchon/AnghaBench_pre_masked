
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {scalar_t__ retval; int stream; int mainloop; } ;
struct ao {struct priv* priv; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int,int ,struct ao*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (struct priv*,int ) ;

__attribute__((used)) static void FUNC_4(struct ao *VAR_1, bool VAR_2)
{
    struct priv *VAR_3 = VAR_1->priv;
    FUNC_2(VAR_3->mainloop);
    VAR_3->retval = 0;
    if (!FUNC_3(VAR_3, FUNC_1(VAR_3->stream, VAR_2, VAR_0, VAR_1)) ||
        !VAR_3->retval)
        FUNC_0("pa_stream_cork() failed");
}
