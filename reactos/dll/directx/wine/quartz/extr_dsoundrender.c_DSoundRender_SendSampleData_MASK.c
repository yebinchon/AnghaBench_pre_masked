
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ state; } ;
struct TYPE_9__ {TYPE_2__ filter; TYPE_1__* pInputPin; int csRenderLock; } ;
struct TYPE_10__ {int in_loop; scalar_t__ buf_size; scalar_t__ writepos; int dsbuffer; TYPE_3__ renderer; int blocked; } ;
struct TYPE_7__ {scalar_t__ flushing; } ;
typedef int REFERENCE_TIME ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ DWORD ;
typedef TYPE_4__ DSoundRenderImpl ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__*,scalar_t__*,int,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,int ,void**,scalar_t__*,void**,scalar_t__*,int ) ;
 int FUNC_5 (int ,int *,scalar_t__,int *,scalar_t__) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_8 (int ,int) ;
 int FUNC_9 (int *,int const*,scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_11(DSoundRenderImpl* VAR_8, REFERENCE_TIME VAR_9, REFERENCE_TIME VAR_10, const BYTE *VAR_11, DWORD VAR_12)
{
    HRESULT VAR_13;

    while (VAR_12 && VAR_8->renderer.filter.state != VAR_5) {
        DWORD VAR_14, VAR_15 = 0, VAR_16, VAR_17, VAR_18, VAR_19;
        BYTE *VAR_20, *VAR_21;

        if (VAR_8->renderer.filter.state == VAR_4)
            VAR_13 = FUNC_0(VAR_8, &VAR_14, VAR_9, &VAR_16, &VAR_15);
        else
            VAR_13 = VAR_1;

        if (VAR_13 != VAR_2) {
            VAR_8->in_loop = 1;
            FUNC_6(&VAR_8->renderer.csRenderLock);
            VAR_19 = FUNC_8(VAR_8->blocked, 10);
            FUNC_2(&VAR_8->renderer.csRenderLock);
            VAR_8->in_loop = 0;
            if (VAR_8->renderer.pInputPin->flushing ||
                VAR_8->renderer.filter.state == VAR_5) {
                return VAR_8->renderer.filter.state == VAR_3 ? VAR_2 : VAR_6;
            }
            if (VAR_19 != VAR_7)
                FUNC_1("%x\n", VAR_19);
            continue;
        }
        VAR_9 = -1;

        if (VAR_15)
            FUNC_3("Sample dropped %u of %u bytes\n", VAR_15, VAR_12);
        if (VAR_15 >= VAR_12)
            return VAR_2;
        VAR_11 += VAR_15;
        VAR_12 -= VAR_15;

        VAR_13 = FUNC_4(VAR_8->dsbuffer, VAR_14, FUNC_10(VAR_16, VAR_12), (void**)&VAR_20, &VAR_17, (void**)&VAR_21, &VAR_18, 0);
        if (VAR_13 != VAR_0) {
            FUNC_1("Unable to lock sound buffer! (%x)\n", VAR_13);
            break;
        }
        FUNC_9(VAR_20, VAR_11, VAR_17);
        if (VAR_18)
            FUNC_9(VAR_21, VAR_11+VAR_17, VAR_18);
        FUNC_5(VAR_8->dsbuffer, VAR_20, VAR_17, VAR_21, VAR_18);
        VAR_8->writepos = (VAR_14 + VAR_17 + VAR_18) % VAR_8->buf_size;
        FUNC_7("Wrote %u bytes at %u, next at %u - (%u/%u)\n", VAR_17+VAR_18, VAR_14, VAR_8->writepos, VAR_16, VAR_12);
        VAR_11 += VAR_17 + VAR_18;
        VAR_12 -= VAR_17 + VAR_18;
    }
    return VAR_2;
}
