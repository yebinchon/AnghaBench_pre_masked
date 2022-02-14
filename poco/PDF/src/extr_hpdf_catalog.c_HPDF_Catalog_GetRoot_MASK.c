
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int error; } ;
struct TYPE_9__ {int obj_class; } ;
struct TYPE_10__ {TYPE_1__ header; } ;
typedef TYPE_2__* HPDF_Pages ;
typedef TYPE_2__* HPDF_Dict ;
typedef TYPE_4__* HPDF_Catalog ;


 TYPE_2__* FUNC_0 (TYPE_4__*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;

HPDF_Pages
FUNC_2 (HPDF_Catalog VAR_3)
{
    HPDF_Dict VAR_4;

    if (!VAR_3)
        return ((void*)0);

    VAR_4 = FUNC_0 (VAR_3, "Pages", VAR_0);
    if (!VAR_4 || VAR_4->header.obj_class != (VAR_1 |
                VAR_0))
        FUNC_1 (VAR_3->error, VAR_2, 0);

    return VAR_4;
}
