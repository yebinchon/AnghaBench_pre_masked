
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int count; } ;
struct TYPE_7__ {int r_ptr_idx; scalar_t__ buf_siz; scalar_t__ r_pos; scalar_t__ w_pos; int * r_ptr; TYPE_5__* buf; } ;
struct TYPE_6__ {int attr; } ;
typedef scalar_t__ HPDF_UINT ;
typedef TYPE_1__* HPDF_Stream ;
typedef int HPDF_STATUS ;
typedef TYPE_2__* HPDF_MemStreamAttr ;
typedef int HPDF_BYTE ;


 scalar_t__ FUNC_0 (TYPE_5__*,int) ;
 int * FUNC_1 (int *,int *,scalar_t__) ;
 int * FUNC_2 (TYPE_1__*,int,scalar_t__*) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;
 int VAR_1 ;

HPDF_STATUS
FUNC_4 (HPDF_Stream VAR_2,
                          HPDF_BYTE *VAR_3,
                          HPDF_UINT *VAR_4)
{
    HPDF_MemStreamAttr VAR_5 = (HPDF_MemStreamAttr)VAR_2->attr;
    HPDF_UINT VAR_6;
    HPDF_UINT VAR_7 = *VAR_4;

    FUNC_3((" HPDF_MemStream_ReadFunc\n"));

    *VAR_4 = 0;

    while (VAR_7 > 0) {
        HPDF_UINT VAR_8;

        if (VAR_5->buf->count == 0)
            return VAR_1;

        if (VAR_5->buf->count - 1 > VAR_5->r_ptr_idx)
            VAR_8 = VAR_5->buf_siz - VAR_5->r_pos;
        else if (VAR_5->buf->count - 1 == VAR_5->r_ptr_idx)
            VAR_8 = VAR_5->w_pos - VAR_5->r_pos;
        else
            return VAR_1;

        if (!VAR_5->r_ptr)
            VAR_5->r_ptr = (HPDF_BYTE*)FUNC_0 (VAR_5->buf,
                            VAR_5->r_ptr_idx);

        if (VAR_8 >= VAR_7) {
            FUNC_1 (VAR_3, VAR_5->r_ptr, VAR_7);
            VAR_5->r_pos += VAR_7;
            *VAR_4 += VAR_7;
            VAR_5->r_ptr += VAR_7;
            return VAR_0;
        } else {
            VAR_3 = FUNC_1 (VAR_3, VAR_5->r_ptr, VAR_8);
            VAR_7 -= VAR_8;
            *VAR_4 += VAR_8;

            if (VAR_5->r_ptr_idx == VAR_5->buf->count - 1) {
                VAR_5->r_ptr += VAR_8;
                VAR_5->r_pos += VAR_8;
                return VAR_1;
            }

            VAR_5->r_ptr_idx++;
            VAR_5->r_pos = 0;
            VAR_5->r_ptr = FUNC_2 (VAR_2, VAR_5->r_ptr_idx,
                    &VAR_6);
        }
    }

    return VAR_0;
}
