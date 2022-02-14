
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {scalar_t__ audio_fd; int device_failed; double audio_end; int outburst; } ;
struct ao {int sstride; scalar_t__ samplerate; struct priv* priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct ao*,char*) ;
 double FUNC_1 () ;
 scalar_t__ FUNC_2 (struct ao*,int) ;
 int FUNC_3 (scalar_t__,void*,int) ;

__attribute__((used)) static int FUNC_4(struct ao *VAR_1, void **VAR_2, int VAR_3, int VAR_4)
{
    struct priv *VAR_5 = VAR_1->priv;
    int VAR_6 = VAR_3 * VAR_1->sstride;
    if (VAR_6 == 0)
        return VAR_6;

    if (VAR_5->audio_fd < 0 && !VAR_5->device_failed && FUNC_2(VAR_1, 0) < 0)
        FUNC_0(VAR_1, "Fatal error: *** CANNOT RE-OPEN / RESET AUDIO DEVICE ***\n");
    if (VAR_5->audio_fd < 0) {

        VAR_5->device_failed = 1;
        double VAR_7 = FUNC_1();
        if (VAR_5->audio_end < VAR_7)
            VAR_5->audio_end = VAR_7;
        VAR_5->audio_end += VAR_3 / (double)VAR_1->samplerate;
        return VAR_3;
    }

    if (VAR_6 > VAR_5->outburst || !(VAR_4 & VAR_0)) {
        VAR_6 /= VAR_5->outburst;
        VAR_6 *= VAR_5->outburst;
    }
    VAR_6 = FUNC_3(VAR_5->audio_fd, VAR_2[0], VAR_6);
    return VAR_6 / VAR_1->sstride;
}
