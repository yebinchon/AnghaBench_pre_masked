
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int format; } ;
typedef TYPE_2__ VOID ;
struct TYPE_13__ {TYPE_1__* tables; int numTables; } ;
struct TYPE_12__ {TYPE_5__* CMAP_Table; } ;
struct TYPE_10__ {int offset; int encodingID; int platformID; } ;
typedef TYPE_3__ ScriptCache ;
typedef int HDC ;
typedef TYPE_2__ CMAP_SegmentedCoverage ;
typedef TYPE_5__ CMAP_Header ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,TYPE_5__*,int) ;
 int FUNC_3 (char*,int) ;
 TYPE_5__* FUNC_4 (int) ;

__attribute__((used)) static VOID *FUNC_5(HDC VAR_2, ScriptCache *VAR_3)
{
    CMAP_Header *VAR_4 = ((void*)0);
    int VAR_5;
    int VAR_6;

    if (!VAR_3->CMAP_Table)
    {
        VAR_5 = FUNC_2(VAR_2, VAR_0 , 0, ((void*)0), 0);
        if (VAR_5 != VAR_1)
        {
            VAR_3->CMAP_Table = FUNC_4(VAR_5);
            FUNC_2(VAR_2, VAR_0 , 0, VAR_3->CMAP_Table, VAR_5);
            FUNC_3("Loaded cmap table of %i bytes\n",VAR_5);
        }
        else
            return ((void*)0);
    }

    VAR_4 = VAR_3->CMAP_Table;

    for (VAR_6 = 0; VAR_6 < FUNC_1(VAR_4->numTables); VAR_6++)
    {
        if ( (FUNC_1(VAR_4->tables[VAR_6].platformID) == 3) &&
             (FUNC_1(VAR_4->tables[VAR_6].encodingID) == 10) )
        {
            CMAP_SegmentedCoverage *VAR_7 = (CMAP_SegmentedCoverage*)(((BYTE*)VAR_4) + FUNC_0(VAR_4->tables[VAR_6].offset));
            if (FUNC_1(VAR_7->format) == 12)
                return VAR_7;
        }
    }
    return ((void*)0);
}
