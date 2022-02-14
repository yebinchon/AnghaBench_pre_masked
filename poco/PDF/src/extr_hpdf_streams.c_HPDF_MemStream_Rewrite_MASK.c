
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ r_ptr_idx; scalar_t__ r_pos; scalar_t__ w_pos; scalar_t__ buf_siz; int r_ptr; TYPE_1__* buf; int w_ptr; } ;
struct TYPE_8__ {int attr; } ;
struct TYPE_7__ {scalar_t__ count; } ;
typedef scalar_t__ HPDF_UINT ;
typedef TYPE_2__* HPDF_Stream ;
typedef int HPDF_STATUS ;
typedef TYPE_3__* HPDF_MemStreamAttr ;
typedef int HPDF_BYTE ;


 int FUNC_0 (int ,int *,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,scalar_t__,scalar_t__*) ;
 int FUNC_2 (TYPE_2__*,int *,scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;

HPDF_STATUS
FUNC_4 (HPDF_Stream VAR_1,
                         HPDF_BYTE *VAR_2,
                         HPDF_UINT VAR_3)
{
    HPDF_MemStreamAttr VAR_4 = (HPDF_MemStreamAttr)VAR_1->attr;
    HPDF_UINT VAR_5;
    HPDF_UINT VAR_6 = VAR_3;

    FUNC_3((" HPDF_MemStream_Rewrite\n"));

    while (VAR_6 > 0) {
        HPDF_UINT VAR_7;

        if (VAR_4->buf->count <= VAR_4->r_ptr_idx) {
            HPDF_STATUS VAR_8 = FUNC_2 (VAR_1, VAR_2, VAR_6);
            VAR_4->r_ptr_idx = VAR_4->buf->count;
            VAR_4->r_pos = VAR_4->w_pos;
            VAR_4->r_ptr = VAR_4->w_ptr;
            return VAR_8;
        } else if (VAR_4->buf->count == VAR_4->r_ptr_idx)
            VAR_7 = VAR_4->w_pos - VAR_4->r_pos;
        else
            VAR_7 = VAR_4->buf_siz - VAR_4->r_pos;

        if (VAR_7 >= VAR_6) {
            FUNC_0(VAR_4->r_ptr, VAR_2, VAR_6);
            VAR_4->r_pos += VAR_6;
            VAR_4->r_ptr += VAR_6;
            return VAR_0;
        } else {
            FUNC_0(VAR_4->r_ptr, VAR_2, VAR_7);
            VAR_2 += VAR_7;
            VAR_6 -= VAR_7;
            VAR_4->r_ptr_idx++;

            if (VAR_4->buf->count > VAR_4->r_ptr_idx) {
                VAR_4->r_pos = 0;
                VAR_4->r_ptr = FUNC_1 (VAR_1, VAR_4->r_ptr_idx,
                        &VAR_5);
            }
        }
    }
    return VAR_0;
}
