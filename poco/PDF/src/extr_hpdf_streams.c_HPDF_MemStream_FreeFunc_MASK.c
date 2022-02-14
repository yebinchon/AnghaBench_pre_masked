
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int buf; } ;
struct TYPE_6__ {int * attr; int mmgr; } ;
typedef TYPE_1__* HPDF_Stream ;
typedef TYPE_2__* HPDF_MemStreamAttr ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*) ;

void
FUNC_4 (HPDF_Stream VAR_0)
{
    HPDF_MemStreamAttr VAR_1;

    FUNC_3((" HPDF_MemStream_FreeFunc\n"));

    VAR_1 = (HPDF_MemStreamAttr)VAR_0->attr;
    FUNC_2 (VAR_0);
    FUNC_1 (VAR_1->buf);
    FUNC_0 (VAR_0->mmgr, VAR_1);
    VAR_0->attr = ((void*)0);
}
