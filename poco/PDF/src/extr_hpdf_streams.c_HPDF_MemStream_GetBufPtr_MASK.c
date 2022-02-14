
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int count; } ;
struct TYPE_6__ {int w_pos; int buf_siz; TYPE_4__* buf; } ;
struct TYPE_5__ {scalar_t__ type; int error; scalar_t__ attr; } ;
typedef int HPDF_UINT ;
typedef TYPE_1__* HPDF_Stream ;
typedef TYPE_2__* HPDF_MemStreamAttr ;
typedef int HPDF_BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int ,int ) ;

HPDF_BYTE*
FUNC_3 (HPDF_Stream VAR_3,
                           HPDF_UINT VAR_4,
                           HPDF_UINT *VAR_5)
{
    HPDF_BYTE *VAR_6;
    HPDF_MemStreamAttr VAR_7;

    FUNC_1((" HPDF_MemStream_GetBufPtr\n"));

    if (VAR_3->type != VAR_2) {
        FUNC_2 (VAR_3->error, VAR_0, 0);
        return ((void*)0);
    }

    VAR_7 = (HPDF_MemStreamAttr)VAR_3->attr;

    VAR_6 = (HPDF_BYTE *)FUNC_0 (VAR_7->buf, VAR_4);
    if (VAR_6 == ((void*)0)) {
        FUNC_2 (VAR_3->error, VAR_1, 0);
        *VAR_5 = 0;
        return ((void*)0);
    }

    *VAR_5 = (VAR_7->buf->count - 1 == VAR_4) ? VAR_7->w_pos : VAR_7->buf_siz;
    return VAR_6;
}
