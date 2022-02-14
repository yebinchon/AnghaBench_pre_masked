
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int WCHAR ;
typedef int ULONGLONG ;
typedef scalar_t__ ULONG ;
struct TYPE_11__ {int Record; } ;
struct TYPE_10__ {scalar_t__ Type; scalar_t__ NameLength; scalar_t__ NameOffset; scalar_t__ Length; } ;
typedef scalar_t__ PWCHAR ;
typedef int * PVOID ;
typedef int PNTFS_VOLUME_INFO ;
typedef TYPE_1__* PNTFS_ATTR_RECORD ;
typedef TYPE_2__* PNTFS_ATTR_CONTEXT ;
typedef scalar_t__ PCHAR ;


 int * FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_2__*,int ,int *,scalar_t__) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (scalar_t__,int const*,scalar_t__) ;
 int VAR_2 ;
 int FUNC_7 (char*,scalar_t__) ;

__attribute__((used)) static PNTFS_ATTR_CONTEXT FUNC_8(PNTFS_VOLUME_INFO VAR_3, PNTFS_ATTR_RECORD VAR_4, PNTFS_ATTR_RECORD VAR_5, ULONG VAR_6, const WCHAR *VAR_7, ULONG VAR_8)
{
    while (VAR_4 < VAR_5)
    {
        if (VAR_4->Type == VAR_1)
            break;

        if (VAR_4->Type == VAR_0)
        {
            PNTFS_ATTR_CONTEXT VAR_9;
            PNTFS_ATTR_CONTEXT VAR_10;
            PVOID VAR_11;
            ULONGLONG VAR_12;
            PNTFS_ATTR_RECORD VAR_13;
            PNTFS_ATTR_RECORD VAR_14;

            VAR_10 = FUNC_3(VAR_4);

            VAR_12 = FUNC_2(&VAR_10->Record);
            if(VAR_12 <= 0xFFFFFFFF)
                VAR_11 = FUNC_0((ULONG)VAR_12, VAR_2);
            else
                VAR_11 = ((void*)0);

            if(!VAR_11)
            {
                FUNC_7("Failed to allocate memory: %x\n", (ULONG)VAR_12);
                continue;
            }

            VAR_13 = (PNTFS_ATTR_RECORD)VAR_11;
            VAR_14 = (PNTFS_ATTR_RECORD)((PCHAR)VAR_11 + VAR_12);

            if (FUNC_4(VAR_3, VAR_10, 0, VAR_11, (ULONG)VAR_12) == VAR_12)
            {
                VAR_9 = FUNC_8(VAR_3, VAR_13, VAR_14,
                                                  VAR_6, VAR_7, VAR_8);

                FUNC_5(VAR_10);
                FUNC_1(VAR_11, VAR_2);

                if (VAR_9 != ((void*)0))
                    return VAR_9;
            }
        }

        if (VAR_4->Type == VAR_6)
        {
            if (VAR_4->NameLength == VAR_8)
            {
                PWCHAR VAR_15;

                VAR_15 = (PWCHAR)((PCHAR)VAR_4 + VAR_4->NameOffset);
                if (FUNC_6(VAR_15, VAR_7, VAR_8 << 1))
                {

                    return FUNC_3(VAR_4);
                }
            }
        }

        if (VAR_4->Length == 0)
            return ((void*)0);
        VAR_4 = (PNTFS_ATTR_RECORD)((PCHAR)VAR_4 + VAR_4->Length);
    }

    return ((void*)0);
}
