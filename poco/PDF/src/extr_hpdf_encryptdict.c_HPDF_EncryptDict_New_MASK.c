
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int obj_class; } ;
struct TYPE_8__ {scalar_t__ attr; int mmgr; int free_fn; TYPE_1__ header; } ;
typedef int HPDF_Xref ;
typedef int HPDF_MMgr ;
typedef int HPDF_Encrypt_Rec ;
typedef TYPE_2__* HPDF_EncryptDict ;
typedef scalar_t__ HPDF_Encrypt ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ,TYPE_2__*) ;

HPDF_EncryptDict
FUNC_6 (HPDF_MMgr VAR_3,
                       HPDF_Xref VAR_4)
{
    HPDF_Encrypt VAR_5;
    HPDF_EncryptDict VAR_6;

    FUNC_4((" HPDF_EncryptDict_New\n"));

    VAR_6 = FUNC_1 (VAR_3);
    if (!VAR_6)
        return ((void*)0);

    VAR_6->header.obj_class |= VAR_2;
    VAR_6->free_fn = VAR_0;

    VAR_5 = FUNC_3 (VAR_6->mmgr, sizeof(HPDF_Encrypt_Rec));
    if (!VAR_5) {
        FUNC_0 (VAR_6);
        return ((void*)0);
    }

    VAR_6->attr = VAR_5;
    FUNC_2 (VAR_5);

    if (FUNC_5 (VAR_4, VAR_6) != VAR_1)
        return ((void*)0);

    return VAR_6;
}
