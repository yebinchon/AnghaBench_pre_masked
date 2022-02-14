
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct encode_priv {double t0; double frames; double audioseconds; TYPE_1__* muxer; scalar_t__ failed; } ;
struct encode_lavc_context {int lock; struct encode_priv* priv; } ;
struct TYPE_2__ {scalar_t__ pb; } ;


 float FUNC_0 (double,float) ;
 double FUNC_1 (scalar_t__) ;
 double FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int,char*,...) ;

int FUNC_6(struct encode_lavc_context *VAR_0,
                          char *VAR_1, int VAR_2,
                          float VAR_3)
{
    if (!VAR_0)
        return -1;

    struct encode_priv *VAR_4 = VAR_0->priv;

    double VAR_5 = FUNC_2();
    float VAR_6, VAR_7, VAR_8, VAR_9;
    float VAR_10 = FUNC_0(0.0001, VAR_3);

    FUNC_3(&VAR_0->lock);

    if (VAR_4->failed) {
        FUNC_5(VAR_1, VAR_2, "(failed)\n");
        goto done;
    }

    VAR_6 = (VAR_5 - VAR_4->t0) / 60.0 * (1 - VAR_10) / VAR_10;
    VAR_7 = VAR_4->muxer->pb ? (FUNC_1(VAR_4->muxer->pb) / 1048576.0 / VAR_10) : 0;
    VAR_8 = VAR_4->frames / (VAR_5 - VAR_4->t0);
    VAR_9 = VAR_4->audioseconds / (VAR_5 - VAR_4->t0);
    if (VAR_4->frames) {
        FUNC_5(VAR_1, VAR_2, "{%.1fmin %.1ffps %.1fMB}",
                 VAR_6, VAR_8, VAR_7);
    } else if (VAR_4->audioseconds) {
        FUNC_5(VAR_1, VAR_2, "{%.1fmin %.2fx %.1fMB}",
                 VAR_6, VAR_9, VAR_7);
    } else {
        FUNC_5(VAR_1, VAR_2, "{%.1fmin %.1fMB}",
                 VAR_6, VAR_7);
    }
    VAR_1[VAR_2 - 1] = 0;

done:
    FUNC_4(&VAR_0->lock);
    return 0;
}
