
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {double buffered; double latency; double outburst; scalar_t__ broken_delay; scalar_t__ broken_eof; } ;
struct ao {double samplerate; struct priv* priv; } ;


 int FUNC_0 (struct ao*) ;

__attribute__((used)) static double FUNC_1(struct ao *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    FUNC_0(VAR_0);



    double VAR_2 = VAR_1->buffered;



    if (VAR_1->broken_eof && VAR_1->buffered < VAR_1->latency)
        VAR_2 = VAR_1->latency;

    VAR_2 /= VAR_0->samplerate;

    if (VAR_1->broken_delay) {
        double VAR_3 = VAR_1->outburst / (double)VAR_0->samplerate;
        if (VAR_2 > 0)
            VAR_2 = (int)(VAR_2 / VAR_3) * VAR_3;
    }

    return VAR_2;
}
