
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_22__ {int ListEntry; int SectionItemList; int SectionItemCount; void* ItemValue; struct TYPE_22__* ItemName; void* SectionName; } ;
typedef TYPE_1__* PINI_SECTION_ITEM ;
typedef TYPE_1__* PINI_SECTION ;
typedef TYPE_1__* PCHAR ;
typedef int INI_SECTION_ITEM ;
typedef int INI_SECTION ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (void*,TYPE_1__*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,scalar_t__) ;
 int FUNC_4 (void*,TYPE_1__*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (TYPE_1__*,scalar_t__,TYPE_1__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_7 (TYPE_1__*,scalar_t__) ;
 int FUNC_8 (TYPE_1__*,scalar_t__) ;
 int FUNC_9 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_10 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_11 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_12 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_13 (TYPE_1__*,scalar_t__) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 () ;
 int FUNC_17 (TYPE_1__*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_18 (char*,...) ;
 scalar_t__ VAR_10 ;
 int FUNC_19 (char*,...) ;
 scalar_t__ FUNC_20 (TYPE_1__*) ;

BOOLEAN FUNC_21(PCHAR VAR_11, ULONG VAR_12)
{
    ULONG VAR_13;
    ULONG VAR_14;
    PCHAR VAR_15;
    ULONG VAR_16;
    ULONG VAR_17;
    PINI_SECTION VAR_18 = ((void*)0);
    PINI_SECTION_ITEM VAR_19 = ((void*)0);

    FUNC_18("IniParseFile() IniFileSize: %d\n", VAR_12);

    if (!VAR_2)
    {
        FUNC_14(&VAR_3);
        VAR_2 = VAR_10;
    }


    VAR_16 = 80;
    VAR_15 = FUNC_0(VAR_16, VAR_5);
    if (!VAR_15)
    {
        return VAR_0;
    }


    VAR_14 = 0;
    VAR_13 = 0;
    while (VAR_13 < VAR_12)
    {

        if (VAR_16 < FUNC_6(VAR_11, VAR_12, VAR_13))
        {
            VAR_16 = FUNC_6(VAR_11, VAR_12, VAR_13);
            FUNC_1(VAR_15, VAR_5);
            VAR_15 = FUNC_0(VAR_16, VAR_5);
            if (!VAR_15)
            {
                return VAR_0;
            }
        }


        VAR_13 = FUNC_5(VAR_11, VAR_12, VAR_15, VAR_16, VAR_13);
        VAR_17 = (ULONG)FUNC_20(VAR_15);


        if (FUNC_11(VAR_15, VAR_17) || FUNC_10(VAR_15, VAR_17))
        {
            VAR_14++;
            continue;
        }


        if (FUNC_12(VAR_15, VAR_17))
        {

            VAR_18 = FUNC_0(sizeof(INI_SECTION), VAR_7);
            if (!VAR_18)
            {
                FUNC_1(VAR_15, VAR_5);
                return VAR_0;
            }

            FUNC_17(VAR_18, sizeof(INI_SECTION));


            VAR_18->SectionName = FUNC_0(FUNC_7(VAR_15, VAR_17), VAR_6);
            if (!VAR_18->SectionName)
            {
                FUNC_1(VAR_18, VAR_5);
                FUNC_1(VAR_15, VAR_5);
                return VAR_0;
            }


            FUNC_2(VAR_18->SectionName, VAR_15, VAR_17);
            FUNC_14(&VAR_18->SectionItemList);


            VAR_1++;
            FUNC_15(&VAR_3, &VAR_18->ListEntry);

            VAR_14++;
            continue;
        }


        if (FUNC_13(VAR_15, VAR_17))
        {

            if (VAR_18 == ((void*)0))
            {
                FUNC_19("Error: freeldr.ini:%lu: Setting '%s' found outside of a [section].\n", VAR_14, VAR_15);
                FUNC_19("Press any key to continue...\n");
                FUNC_16();
                VAR_14++;
                continue;
            }


            VAR_19 = FUNC_0(sizeof(INI_SECTION_ITEM), VAR_8);
            if (!VAR_19)
            {
                FUNC_1(VAR_15, VAR_5);
                return VAR_0;
            }

            FUNC_17(VAR_19, sizeof(INI_SECTION_ITEM));


            VAR_19->ItemName = FUNC_0(FUNC_8(VAR_15, VAR_17), VAR_6);
            if (!VAR_19->ItemName)
            {
                FUNC_1(VAR_19, VAR_8);
                FUNC_1(VAR_15, VAR_5);
                return VAR_0;
            }


            VAR_19->ItemValue = FUNC_0(FUNC_9(VAR_15, VAR_17), VAR_9);
            if (!VAR_19->ItemValue)
            {
                FUNC_1(VAR_19->ItemName, VAR_6);
                FUNC_1(VAR_19, VAR_8);
                FUNC_1(VAR_15, VAR_5);
                return VAR_0;
            }


            FUNC_3(VAR_19->ItemName, VAR_15, VAR_17);
            FUNC_4(VAR_19->ItemValue, VAR_15, VAR_17);


            VAR_4++;
            VAR_18->SectionItemCount++;
            FUNC_15(&VAR_18->SectionItemList, &VAR_19->ListEntry);

            VAR_14++;
            continue;
        }

        VAR_14++;
    }

    FUNC_1(VAR_15, VAR_5);

    FUNC_18("Parsed %d sections and %d settings.\n", VAR_1, VAR_4);
    FUNC_18("IniParseFile() done.\n");

    return VAR_10;
}
