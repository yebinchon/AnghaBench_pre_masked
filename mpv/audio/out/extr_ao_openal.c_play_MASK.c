
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int num_samples; size_t num_buffers; int al_format; } ;
struct ao {int sstride; int samplerate; struct priv* priv; } ;
typedef scalar_t__ ALint ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,int,int ) ;
 int FUNC_1 (int ,int ,scalar_t__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int *) ;
 int* VAR_3 ;
 int * VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_4(struct ao *VAR_7, void **VAR_8, int VAR_9, int VAR_10)
{
    struct priv *VAR_11 = VAR_7->priv;

    int VAR_12 = 0;
    int VAR_13 = 0;
    if (VAR_10 & VAR_2) {
        VAR_13 = 1;
        VAR_12 = VAR_9;
    } else {
        VAR_13 = VAR_9 / VAR_11->num_samples;
        VAR_12 = VAR_13 * VAR_11->num_samples;
    }

    for (int VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
        char *VAR_15 = *VAR_8;
        if (VAR_10 & VAR_2) {
            VAR_3[VAR_5] = VAR_9;
        } else {
            VAR_3[VAR_5] = VAR_11->num_samples;
        }
        VAR_15 += VAR_14 * VAR_3[VAR_5] * VAR_7->sstride;
        FUNC_0(VAR_4[VAR_5], VAR_11->al_format, VAR_15,
            VAR_3[VAR_5] * VAR_7->sstride, VAR_7->samplerate);
        FUNC_3(VAR_6, 1, &VAR_4[VAR_5]);
        VAR_5 = (VAR_5 + 1) % VAR_11->num_buffers;
    }

    ALint VAR_16;
    FUNC_1(VAR_6, VAR_1, &VAR_16);
    if (VAR_16 != VAR_0)
        FUNC_2(VAR_6);

    return VAR_12;
}
