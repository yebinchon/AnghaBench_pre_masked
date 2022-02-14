
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_16__ {int objsize; scalar_t__ sclust; } ;
struct TYPE_15__ {scalar_t__ fs_type; int csize; scalar_t__ winsect; int const* win; int wflag; int drv; } ;
struct TYPE_14__ {int flag; int fptr; scalar_t__ sect; int const* buf; TYPE_3__ obj; scalar_t__ clust; scalar_t__ cltbl; scalar_t__ err; } ;
typedef scalar_t__ FRESULT ;
typedef TYPE_1__ FIL ;
typedef TYPE_2__ FATFS ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int const*,scalar_t__,int) ;
 scalar_t__ FUNC_7 (int ,int const*,scalar_t__,int) ;
 int FUNC_8 (int const*,int const*,int) ;
 scalar_t__ FUNC_9 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (TYPE_3__*,TYPE_2__**) ;

FRESULT FUNC_12 (
    FIL* VAR_10,
    const void* VAR_11,
    UINT VAR_12,
    UINT* VAR_13
)
{
    FRESULT VAR_14;
    FATFS *VAR_15;
    DWORD VAR_16, VAR_17;
    UINT VAR_18, VAR_19, VAR_20;
    const BYTE *VAR_21 = (const BYTE*)VAR_11;


    *VAR_13 = 0;
    VAR_14 = FUNC_11(&VAR_10->obj, &VAR_15);
    if (VAR_14 != VAR_7 || (VAR_14 = (FRESULT)VAR_10->err) != VAR_7) FUNC_1(VAR_15, VAR_14);
    if (!(VAR_10->flag & VAR_2)) FUNC_1(VAR_15, VAR_4);


    if ((!VAR_3 || VAR_15->fs_type != VAR_8) && (DWORD)(VAR_10->fptr + VAR_12) < (DWORD)VAR_10->fptr) {
        VAR_12 = (UINT)(0xFFFFFFFF - (DWORD)VAR_10->fptr);
    }

    for ( ; VAR_12;
        VAR_12 -= VAR_18, *VAR_13 += VAR_18, VAR_21 += VAR_18, VAR_10->fptr += VAR_18, VAR_10->obj.objsize = (VAR_10->fptr > VAR_10->obj.objsize) ? VAR_10->fptr : VAR_10->obj.objsize) {
        if (VAR_10->fptr % FUNC_2(VAR_15) == 0) {
            VAR_20 = (UINT)(VAR_10->fptr / FUNC_2(VAR_15)) & (VAR_15->csize - 1);
            if (VAR_20 == 0) {
                if (VAR_10->fptr == 0) {
                    VAR_16 = VAR_10->obj.sclust;
                    if (VAR_16 == 0) {
                        VAR_16 = FUNC_5(&VAR_10->obj, 0);
                    }
                } else {





                    {
                        VAR_16 = FUNC_5(&VAR_10->obj, VAR_10->clust);
                    }
                }
                if (VAR_16 == 0) break;
                if (VAR_16 == 1) FUNC_0(VAR_15, VAR_6);
                if (VAR_16 == 0xFFFFFFFF) FUNC_0(VAR_15, VAR_5);
                VAR_10->clust = VAR_16;
                if (VAR_10->obj.sclust == 0) VAR_10->obj.sclust = VAR_16;
            }



            if (VAR_10->flag & VAR_0) {
                if (FUNC_7(VAR_15->drv, VAR_10->buf, VAR_10->sect, 1) != VAR_9) FUNC_0(VAR_15, VAR_5);
                VAR_10->flag &= (BYTE)~VAR_0;
            }

            VAR_17 = FUNC_4(VAR_15, VAR_10->clust);
            if (VAR_17 == 0) FUNC_0(VAR_15, VAR_6);
            VAR_17 += VAR_20;
            VAR_19 = VAR_12 / FUNC_2(VAR_15);
            if (VAR_19 > 0) {
                if (VAR_20 + VAR_19 > VAR_15->csize) {
                    VAR_19 = VAR_15->csize - VAR_20;
                }
                if (FUNC_7(VAR_15->drv, VAR_21, VAR_17, VAR_19) != VAR_9) FUNC_0(VAR_15, VAR_5);







                if (VAR_10->sect - VAR_17 < VAR_19) {
                    FUNC_8(VAR_10->buf, VAR_21 + ((VAR_10->sect - VAR_17) * FUNC_2(VAR_15)), FUNC_2(VAR_15));
                    VAR_10->flag &= (BYTE)~VAR_0;
                }


                VAR_18 = FUNC_2(VAR_15) * VAR_19;
                continue;
            }






            if (VAR_10->sect != VAR_17 &&
                VAR_10->fptr < VAR_10->obj.objsize &&
                FUNC_6(VAR_15->drv, VAR_10->buf, VAR_17, 1) != VAR_9) {
                    FUNC_0(VAR_15, VAR_5);
            }

            VAR_10->sect = VAR_17;
        }
        VAR_18 = FUNC_2(VAR_15) - (UINT)VAR_10->fptr % FUNC_2(VAR_15);
        if (VAR_18 > VAR_12) VAR_18 = VAR_12;





        FUNC_8(VAR_10->buf + VAR_10->fptr % FUNC_2(VAR_15), VAR_21, VAR_18);
        VAR_10->flag |= VAR_0;

    }

    VAR_10->flag |= VAR_1;

    FUNC_1(VAR_15, VAR_7);
}
