
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct priv {double base_time; int seek_reinit; int last_dts; int base_dts; } ;
struct TYPE_4__ {int stream; struct priv* priv; } ;
typedef TYPE_1__ demuxer_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,double) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,double*) ;

__attribute__((used)) static void FUNC_2(demuxer_t *VAR_2)
{
    struct priv *VAR_3 = VAR_2->priv;

    double VAR_4;
    if (FUNC_1(VAR_2->stream, VAR_1, &VAR_4) < 1)
        VAR_4 = 0;

    FUNC_0(VAR_2, "reset to time: %f\n", VAR_4);

    VAR_3->base_dts = VAR_3->last_dts = VAR_0;
    VAR_3->base_time = VAR_4;
    VAR_3->seek_reinit = 0;
}
