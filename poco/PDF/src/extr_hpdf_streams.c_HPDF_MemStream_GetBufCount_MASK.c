
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* buf; } ;
struct TYPE_6__ {scalar_t__ type; scalar_t__ attr; } ;
struct TYPE_5__ {int count; } ;
typedef int HPDF_UINT ;
typedef TYPE_2__* HPDF_Stream ;
typedef TYPE_3__* HPDF_MemStreamAttr ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;

HPDF_UINT
FUNC_1 (HPDF_Stream VAR_1)
{
    HPDF_MemStreamAttr VAR_2;

    FUNC_0((" HPDF_MemStream_GetBufCount\n"));

    if (!VAR_1 || VAR_1->type != VAR_0)
        return 0;

    VAR_2 = (HPDF_MemStreamAttr)VAR_1->attr;
    return VAR_2->buf->count;
}
