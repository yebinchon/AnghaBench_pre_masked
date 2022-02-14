
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ nBlockAlign; } ;
typedef TYPE_6__ WAVEFORMATEX ;
struct TYPE_15__ {int rtStreamStart; int * pClock; } ;
struct TYPE_16__ {TYPE_4__ filter; TYPE_3__* pInputPin; } ;
struct TYPE_18__ {scalar_t__ last_playpos; int play_time; scalar_t__ buf_size; TYPE_5__ renderer; int IReferenceClock_iface; } ;
struct TYPE_12__ {scalar_t__ pbFormat; } ;
struct TYPE_13__ {TYPE_1__ mtCurrent; } ;
struct TYPE_14__ {TYPE_2__ pin; } ;
typedef int REFERENCE_TIME ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;
typedef TYPE_7__ DSoundRenderImpl ;


 int FUNC_0 (TYPE_7__*,scalar_t__*,scalar_t__*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,scalar_t__,...) ;
 scalar_t__ FUNC_4 (TYPE_7__*,int) ;
 int FUNC_5 (TYPE_7__*,scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_6(DSoundRenderImpl *VAR_3, DWORD *VAR_4, REFERENCE_TIME VAR_5, DWORD *VAR_6, DWORD *VAR_7)
{
    WAVEFORMATEX *VAR_8 = (WAVEFORMATEX*)VAR_3->renderer.pInputPin->pin.mtCurrent.pbFormat;
    DWORD VAR_9, VAR_10, VAR_11;
    REFERENCE_TIME VAR_12 = 50 * 10000;
    REFERENCE_TIME VAR_13 = 25 * 10000;
    REFERENCE_TIME VAR_14, VAR_15, VAR_16;

    FUNC_0(VAR_3, &VAR_9, &VAR_10);
    VAR_11 = VAR_3->last_playpos;
    if (VAR_3->renderer.filter.pClock == &VAR_3->IReferenceClock_iface) {
        VAR_12 = VAR_13;
        VAR_14 = VAR_3->play_time + FUNC_5(VAR_3, VAR_11);
        VAR_14 -= VAR_3->renderer.filter.rtStreamStart;
    } else if (VAR_3->renderer.filter.pClock) {
        FUNC_1(VAR_3->renderer.filter.pClock, &VAR_14);
        VAR_14 -= VAR_3->renderer.filter.rtStreamStart;
    } else
        VAR_5 = -1;

    if (VAR_9 == VAR_10)
        VAR_12 = 0;

    *VAR_7 = 0;
    if (VAR_5 < 0) {
        *VAR_4 = VAR_9;
        goto end;
    }

    if (VAR_9 >= VAR_11)
        VAR_15 = VAR_14 + FUNC_5(VAR_3, VAR_9 - VAR_11);
    else
        VAR_15 = VAR_14 + FUNC_5(VAR_3, VAR_3->buf_size + VAR_9 - VAR_11);




    VAR_16 = VAR_5 - VAR_15;
    if (VAR_16 >= -VAR_12 && VAR_16 <= VAR_12) {
        FUNC_2("Continuing from old position\n");
        *VAR_4 = VAR_9;
    } else if (VAR_16 < 0) {
        REFERENCE_TIME VAR_17, VAR_18;
        FUNC_3("Delta too big %i/%i, overwriting old data or even skipping\n", (int)VAR_16 / 10000, (int)VAR_12 / 10000);
        if (VAR_10 >= VAR_11)
            VAR_18 = VAR_14 + FUNC_5(VAR_3, VAR_10 - VAR_11);
        else
            VAR_18 = VAR_14 + FUNC_5(VAR_3, VAR_3->buf_size - VAR_11 + VAR_10);
        VAR_17 = VAR_18 - VAR_5;
        if (VAR_17 >= 0) {
            DWORD VAR_19 = FUNC_4(VAR_3, VAR_17);
            FUNC_3("Skipping %u bytes\n", VAR_19);
            *VAR_7 = VAR_19;
            *VAR_4 = VAR_10;
        } else {
            DWORD VAR_20 = FUNC_4(VAR_3, -VAR_17);
            FUNC_3("Advancing %u bytes\n", VAR_20);
            *VAR_4 = (VAR_10 + VAR_20) % VAR_3->buf_size;
        }
    } else {
        DWORD VAR_21;
        FUNC_3("Delta too big %i/%i, too far ahead\n", (int)VAR_16 / 10000, (int)VAR_12 / 10000);
        VAR_21 = FUNC_4(VAR_3, VAR_16);
        FUNC_3("Advancing %u bytes\n", VAR_21);
        if (VAR_16 >= VAR_0)
            return VAR_1;
        *VAR_4 = (VAR_10 + VAR_21) % VAR_3->buf_size;
    }
end:
    if (VAR_11 > *VAR_4)
        *VAR_6 = VAR_11 - *VAR_4;
    else if (VAR_11 == *VAR_4)
        *VAR_6 = VAR_3->buf_size - VAR_8->nBlockAlign;
    else
        *VAR_6 = VAR_3->buf_size + VAR_11 - *VAR_4;
    if (FUNC_5(VAR_3, VAR_3->buf_size - *VAR_6) >= VAR_0) {
        FUNC_2("Blocked: too full %i / %i\n", (int)(FUNC_5(VAR_3, VAR_3->buf_size - *VAR_6)/10000), (int)(VAR_0 / 10000));
        return VAR_1;
    }
    return VAR_2;
}
