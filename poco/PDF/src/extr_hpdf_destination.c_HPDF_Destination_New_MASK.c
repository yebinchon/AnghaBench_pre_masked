
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int obj_class; } ;
struct TYPE_13__ {TYPE_1__ header; } ;
struct TYPE_12__ {int error; } ;
typedef int HPDF_Xref ;
typedef int HPDF_Page ;
typedef TYPE_2__* HPDF_MMgr ;
typedef size_t HPDF_INT ;
typedef TYPE_3__* HPDF_Destination ;


 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_2 (TYPE_2__*) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (int ,TYPE_3__*) ;

HPDF_Destination
FUNC_7 (HPDF_MMgr VAR_5,
                       HPDF_Page VAR_6,
                       HPDF_Xref VAR_7)
{
    HPDF_Destination VAR_8;

    FUNC_3((" HPDF_Destination_New\n"));

    if (!FUNC_4 (VAR_6)) {
        FUNC_5 (VAR_5->error, VAR_2, 0);
        return ((void*)0);
    }

    VAR_8 = FUNC_2 (VAR_5);
    if (!VAR_8)
        return ((void*)0);

    VAR_8->header.obj_class |= VAR_4;

    if (FUNC_6 (VAR_7, VAR_8) != VAR_3)
        return ((void*)0);


    if (FUNC_0 (VAR_8, VAR_6) != VAR_3)
        return ((void*)0);


    if (FUNC_1 (VAR_8,
            VAR_0[(HPDF_INT)VAR_1]) != VAR_3)
        return ((void*)0);

    return VAR_8;
}
