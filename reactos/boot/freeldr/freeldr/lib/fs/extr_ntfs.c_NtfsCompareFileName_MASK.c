
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t UCHAR ;
struct TYPE_5__ {size_t FileNameLength; scalar_t__ FileNameType; scalar_t__* FileName; } ;
struct TYPE_6__ {TYPE_1__ FileName; } ;
typedef scalar_t__* PWCHAR ;
typedef TYPE_2__* PNTFS_INDEX_ENTRY ;
typedef scalar_t__* PCHAR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 size_t FUNC_1 (scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static BOOLEAN FUNC_3(PCHAR VAR_3, PNTFS_INDEX_ENTRY VAR_4)
{
    PWCHAR VAR_5;
    UCHAR VAR_6;
    UCHAR VAR_7;

    VAR_5 = VAR_4->FileName.FileName;
    VAR_6 = VAR_4->FileName.FileNameLength;





    if (FUNC_1(VAR_3) != VAR_6)
        return VAR_0;


    if (VAR_4->FileName.FileNameType == VAR_1)
    {
        for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
            if (VAR_5[VAR_7] != VAR_3[VAR_7])
                return VAR_0;
    }
    else
    {
        for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
            if (FUNC_2(VAR_5[VAR_7]) != FUNC_2(VAR_3[VAR_7]))
                return VAR_0;
    }

    return VAR_2;
}
