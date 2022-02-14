
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int outburst; int paused; int final_chunk_written; int alsa; int convert; } ;
struct ao {int format; struct priv* priv; } ;
typedef int snd_pcm_sframes_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ao*,char*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,void**,int) ;
 int FUNC_4 (struct ao*,int) ;
 int FUNC_5 (struct ao*) ;
 int FUNC_6 (struct ao*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,void*,int) ;
 int FUNC_9 (int ,void**,int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct ao *VAR_5, void **VAR_6, int VAR_7, int VAR_8)
{
    struct priv *VAR_9 = VAR_5->priv;
    snd_pcm_sframes_t VAR_10 = 0;
    bool VAR_11 = VAR_8 & VAR_0;

    if (!VAR_11)
        VAR_7 = VAR_7 / VAR_9->outburst * VAR_9->outburst;

    if (VAR_7 == 0)
        goto done;
    FUNC_3(&VAR_9->convert, VAR_6, VAR_7);

    do {
        if (FUNC_2(VAR_5->format)) {
            VAR_10 = FUNC_9(VAR_9->alsa, VAR_6, VAR_7);
        } else {
            VAR_10 = FUNC_8(VAR_9->alsa, VAR_6[0], VAR_7);
        }

        if (VAR_10 == -VAR_2 || VAR_10 == -VAR_1) {
            VAR_10 = 0;
        } else if (!FUNC_4(VAR_5, VAR_10)) {
            goto alsa_error;
        } else if (VAR_10 < 0) {
            if (VAR_10 == -VAR_4) {
                FUNC_6(VAR_5);
            } else if (VAR_10 == -VAR_3) {
                FUNC_5(VAR_5);
            } else {
                FUNC_1(VAR_5, "Write error: %s\n", FUNC_10(VAR_10));
            }
            int VAR_12 = FUNC_7(VAR_9->alsa);
            FUNC_0("pcm prepare error");
            VAR_10 = 0;
        }
    } while (VAR_10 == 0);

    VAR_9->paused = 0;

done:
    VAR_9->final_chunk_written = VAR_10 == VAR_7 && VAR_11;
    return VAR_10 < 0 ? -1 : VAR_10;

alsa_error:
    return -1;
}
