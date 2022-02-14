
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int wBitsPerSample; } ;
typedef TYPE_5__ WAVEFORMATEX ;
struct TYPE_12__ {TYPE_3__* pInputPin; } ;
struct TYPE_14__ {scalar_t__ writepos; scalar_t__ buf_size; scalar_t__ last_playpos; int dsbuffer; int play_time; TYPE_4__ renderer; } ;
struct TYPE_9__ {scalar_t__ pbFormat; } ;
struct TYPE_10__ {TYPE_1__ mtCurrent; } ;
struct TYPE_11__ {TYPE_2__ pin; } ;
typedef scalar_t__ DWORD ;
typedef TYPE_6__ DSoundRenderImpl ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,void**,scalar_t__*,void**,scalar_t__*,int ) ;
 int FUNC_3 (int ,int *,scalar_t__,int *,scalar_t__) ;
 int FUNC_4 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (int *,int,scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_6__*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(DSoundRenderImpl *VAR_0, DWORD *VAR_1, DWORD *VAR_2) {
    WAVEFORMATEX *VAR_3 = (WAVEFORMATEX*)VAR_0->renderer.pInputPin->pin.mtCurrent.pbFormat;
    BYTE *VAR_4, *VAR_5;
    DWORD VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    BOOL VAR_13 = VAR_0->writepos < VAR_0->buf_size;


    VAR_10 = VAR_0->writepos;
    VAR_11 = VAR_0->last_playpos;
    if (VAR_10 <= VAR_11)
        VAR_10 += VAR_0->buf_size;

    FUNC_1(VAR_0->dsbuffer, &VAR_8, &VAR_9);
    if (VAR_11 > VAR_8) {
        VAR_12 = VAR_0->buf_size + VAR_8 - VAR_11;
        VAR_0->play_time += FUNC_6(VAR_0, VAR_0->buf_size);
    } else
        VAR_12 = VAR_8 - VAR_11;
    VAR_0->last_playpos = VAR_8;
    if (VAR_12) {
        FUNC_4("Moving from %u to %u: clearing %u bytes\n", VAR_11, VAR_8, VAR_12);
        FUNC_2(VAR_0->dsbuffer, VAR_11, VAR_12, (void**)&VAR_4, &VAR_6, (void**)&VAR_5, &VAR_7, 0);
        FUNC_5(VAR_4, VAR_3->wBitsPerSample == 8 ? 128 : 0, VAR_6);
        FUNC_5(VAR_5, VAR_3->wBitsPerSample == 8 ? 128 : 0, VAR_7);
        FUNC_3(VAR_0->dsbuffer, VAR_4, VAR_6, VAR_5, VAR_7);
    }
    *VAR_2 = VAR_9;
    if (!VAR_13 || VAR_10 < VAR_9) {
        if (VAR_13) {
            VAR_0->writepos = VAR_0->buf_size;
            FUNC_0("Underrun of data occurred!\n");
        }
        *VAR_1 = VAR_9;
    } else
        *VAR_1 = VAR_0->writepos;
}
