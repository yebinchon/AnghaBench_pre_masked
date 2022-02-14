
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int mainloop; int stream; } ;
struct ao {int sstride; struct priv* priv; } ;
typedef int pa_operation ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int *,int *) ;
 scalar_t__ FUNC_3 (int ,void*,int,int *,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct ao *VAR_2, void **VAR_3, int VAR_4, int VAR_5)
{
    struct priv *VAR_6 = VAR_2->priv;
    FUNC_4(VAR_6->mainloop);
    if (FUNC_3(VAR_6->stream, VAR_3[0], VAR_4 * VAR_2->sstride, ((void*)0), 0,
                        VAR_1) < 0) {
        FUNC_0("pa_stream_write() failed");
        VAR_4 = -1;
    }
    if (VAR_5 & VAR_0) {

        pa_operation *VAR_7 = FUNC_2(VAR_6->stream, ((void*)0), ((void*)0));
        FUNC_1(VAR_7);
    }
    FUNC_5(VAR_6->mainloop);
    return VAR_4;
}
