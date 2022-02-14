
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int r_ptr_idx; int buf_siz; scalar_t__ r_pos; } ;
struct TYPE_4__ {int attr; } ;
typedef TYPE_1__* HPDF_Stream ;
typedef TYPE_2__* HPDF_MemStreamAttr ;
typedef int HPDF_INT32 ;


 int FUNC_0 (char*) ;

HPDF_INT32
FUNC_1 (HPDF_Stream VAR_0)
{
    HPDF_INT32 VAR_1;
    HPDF_MemStreamAttr VAR_2 = (HPDF_MemStreamAttr)VAR_0->attr;

    FUNC_0((" HPDF_MemStream_TellFunc\n"));

    VAR_1 = VAR_2->r_ptr_idx * VAR_2->buf_siz;
    VAR_1 += VAR_2->r_pos;

    return VAR_1;
}
