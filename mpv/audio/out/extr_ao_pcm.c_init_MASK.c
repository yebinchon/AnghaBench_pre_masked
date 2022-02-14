
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct priv {int fp; scalar_t__ waveheader; scalar_t__ outputfilename; scalar_t__ append; } ;
struct mp_chmap_sel {int member_0; } ;
struct TYPE_2__ {int num; } ;
struct ao {int format; int bps; int samplerate; int untimed; TYPE_1__ channels; struct priv* priv; } ;






 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ao*,char*,scalar_t__) ;
 int FUNC_1 (struct ao*,char*) ;
 int FUNC_2 (struct ao*,char*,scalar_t__,char*,int,int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct ao*,struct mp_chmap_sel*,TYPE_1__*) ;
 int FUNC_8 (scalar_t__,char*) ;
 int FUNC_9 (struct mp_chmap_sel*) ;
 scalar_t__ FUNC_10 (struct priv*,char*) ;
 int FUNC_11 (struct ao*,int ,int) ;

__attribute__((used)) static int FUNC_12(struct ao *VAR_2)
{
    struct priv *VAR_3 = VAR_2->priv;

    if (!VAR_3->outputfilename)
        VAR_3->outputfilename =
            FUNC_10(VAR_3, VAR_3->waveheader ? "audiodump.wav" : "audiodump.pcm");

    VAR_2->format = FUNC_3(VAR_2->format);

    if (VAR_3->waveheader) {




        if (VAR_1 == VAR_0) {
            FUNC_1(VAR_2, "Not supported on big endian.\n");
            return -1;
        }

        switch (VAR_2->format) {
        case 128:
        case 130:
        case 129:
        case 131:
             break;
        default:
            if (!FUNC_4(VAR_2->format))
                VAR_2->format = 130;
            break;
        }
    }

    struct mp_chmap_sel VAR_4 = {0};
    FUNC_9(&VAR_4);
    if (!FUNC_7(VAR_2, &VAR_4, &VAR_2->channels))
        return -1;

    VAR_2->bps = VAR_2->channels.num * VAR_2->samplerate * FUNC_5(VAR_2->format);

    FUNC_2(VAR_2, "File: %s (%s)\nPCM: Samplerate: %d Hz Channels: %d Format: %s\n",
            VAR_3->outputfilename,
            VAR_3->waveheader ? "WAVE" : "RAW PCM", VAR_2->samplerate,
            VAR_2->channels.num, FUNC_6(VAR_2->format));

    VAR_3->fp = FUNC_8(VAR_3->outputfilename, VAR_3->append ? "ab" : "wb");
    if (!VAR_3->fp) {
        FUNC_0(VAR_2, "Failed to open %s for writing!\n", VAR_3->outputfilename);
        return -1;
    }
    if (VAR_3->waveheader)
        FUNC_11(VAR_2, VAR_3->fp, 0x7ffff000);
    VAR_2->untimed = 1;

    return 0;
}
