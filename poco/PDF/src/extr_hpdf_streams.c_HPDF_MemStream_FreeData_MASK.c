
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ count; } ;
struct TYPE_7__ {scalar_t__ r_pos; scalar_t__ r_ptr_idx; int * w_ptr; int buf_siz; int w_pos; TYPE_4__* buf; } ;
struct TYPE_6__ {scalar_t__ type; scalar_t__ size; int mmgr; scalar_t__ attr; } ;
typedef scalar_t__ HPDF_UINT ;
typedef TYPE_1__* HPDF_Stream ;
typedef TYPE_2__* HPDF_MemStreamAttr ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,scalar_t__) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_0 ;

void
FUNC_4 (HPDF_Stream VAR_1)
{
    HPDF_MemStreamAttr VAR_2;
    HPDF_UINT VAR_3;

    FUNC_3((" HPDF_MemStream_FreeData\n"));

    if (!VAR_1 || VAR_1->type != VAR_0)
        return;

    VAR_2 = (HPDF_MemStreamAttr)VAR_1->attr;

    for (VAR_3 = 0; VAR_3 < VAR_2->buf->count; VAR_3++)
        FUNC_0 (VAR_1->mmgr, FUNC_2 (VAR_2->buf, VAR_3));

    FUNC_1(VAR_2->buf);

    VAR_1->size = 0;
    VAR_2->w_pos = VAR_2->buf_siz;
    VAR_2->w_ptr = ((void*)0);
    VAR_2->r_ptr_idx = 0;
    VAR_2->r_pos = 0;
}
