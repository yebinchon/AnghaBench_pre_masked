
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ buf_siz; scalar_t__ w_pos; int * w_ptr; int buf; } ;
struct TYPE_4__ {int error; int mmgr; int attr; } ;
typedef scalar_t__ HPDF_UINT ;
typedef TYPE_1__* HPDF_Stream ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_2__* HPDF_MemStreamAttr ;
typedef int HPDF_BYTE ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int const*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (char*) ;

HPDF_STATUS
FUNC_6 (HPDF_Stream VAR_1,
                         const HPDF_BYTE **VAR_2,
                         HPDF_UINT *VAR_3)
{
    HPDF_MemStreamAttr VAR_4 = (HPDF_MemStreamAttr)VAR_1->attr;
    HPDF_UINT VAR_5 = VAR_4->buf_siz - VAR_4->w_pos;

    FUNC_5((" HPDF_MemStream_InWrite\n"));

    if (*VAR_3 <= 0)
        return VAR_0;

    if (VAR_5 >= *VAR_3) {
        FUNC_4 (VAR_4->w_ptr, *VAR_2, *VAR_3);
        VAR_4->w_ptr += *VAR_3;
        VAR_4->w_pos += *VAR_3;
        *VAR_3 = 0;
    } else {
        if (VAR_5 > 0) {
            FUNC_4 (VAR_4->w_ptr, *VAR_2, VAR_5);
            *VAR_2 += VAR_5;
            *VAR_3 -= VAR_5;
        }
        VAR_4->w_ptr = (HPDF_BYTE*)FUNC_2 (VAR_1->mmgr, VAR_4->buf_siz);

        if (VAR_4->w_ptr == ((void*)0))
           return FUNC_0 (VAR_1->error);

        if (FUNC_3 (VAR_4->buf, VAR_4->w_ptr) != VAR_0) {
            FUNC_1 (VAR_1->mmgr, VAR_4->w_ptr);
            VAR_4->w_ptr = ((void*)0);

            return FUNC_0 (VAR_1->error);
        }
        VAR_4->w_pos = 0;
    }
    return VAR_0;
}
