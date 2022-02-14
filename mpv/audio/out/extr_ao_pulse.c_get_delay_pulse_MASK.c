
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int mainloop; int context; int stream; } ;
struct ao {struct priv* priv; } ;
typedef double pa_usec_t ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,double*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static double FUNC_6(struct ao *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;
    pa_usec_t VAR_3 = (pa_usec_t) -1;
    FUNC_3(VAR_2->mainloop);
    while (FUNC_2(VAR_2->stream, &VAR_3, ((void*)0)) < 0) {
        if (FUNC_1(VAR_2->context) != VAR_0) {
            FUNC_0("pa_stream_get_latency() failed");
            break;
        }

        FUNC_5(VAR_2->mainloop);
    }
    FUNC_4(VAR_2->mainloop);
    return VAR_3 == (pa_usec_t) -1 ? 0 : VAR_3 / 1000000.0;
}
