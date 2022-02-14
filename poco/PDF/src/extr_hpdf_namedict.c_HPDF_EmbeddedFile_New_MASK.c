
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int filter; scalar_t__ stream; } ;
typedef int HPDF_Xref ;
typedef TYPE_1__* HPDF_String ;
typedef scalar_t__ HPDF_Stream ;
typedef scalar_t__ HPDF_STATUS ;
typedef int HPDF_MMgr ;
typedef TYPE_1__* HPDF_EmbeddedFile ;
typedef TYPE_1__* HPDF_Dict ;


 TYPE_1__* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,char*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char*,char*) ;
 TYPE_1__* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,char const*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (scalar_t__) ;
 TYPE_1__* FUNC_6 (int ,char const*,int *) ;
 scalar_t__ FUNC_7 (int ,TYPE_1__*) ;

HPDF_EmbeddedFile
FUNC_8 (HPDF_MMgr VAR_2,
                        HPDF_Xref VAR_3,
                        const char *VAR_4)
{
    HPDF_STATUS VAR_5 = VAR_0;
    HPDF_Dict VAR_6;
    HPDF_String VAR_7;
    HPDF_Dict VAR_8;
    HPDF_Dict VAR_9;
    HPDF_Stream VAR_10;

    VAR_6 = FUNC_3 (VAR_2);
    if (!VAR_6)
        return ((void*)0);
    if (FUNC_7 (VAR_3, VAR_6) != VAR_0)
        return ((void*)0);

    VAR_9 = FUNC_0 (VAR_2, VAR_3);
    if (!VAR_9)
        return ((void*)0);
    VAR_10 = FUNC_4 (VAR_2, VAR_4);
    if (!VAR_10)
        return ((void*)0);
    FUNC_5(VAR_9->stream);
    VAR_9->stream = VAR_10;
    VAR_9->filter = VAR_1;

    VAR_8 = FUNC_3 (VAR_2);
    if (!VAR_8)
        return ((void*)0);

    VAR_7 = FUNC_6 (VAR_2, VAR_4, ((void*)0));
    if (!VAR_7)
        return ((void*)0);

    VAR_5 += FUNC_2 (VAR_6, "Type", "F");
    VAR_5 += FUNC_1 (VAR_6, "F", VAR_7);
    VAR_5 += FUNC_1 (VAR_6, "EF", VAR_8);
    VAR_5 += FUNC_1 (VAR_8, "F", VAR_9);

    if (VAR_5 != VAR_0)
        return ((void*)0);

    return VAR_6;
}
