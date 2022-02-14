
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ ConType; int Cap; int hContainer; } ;
struct TYPE_6__ {int* ItemList; int NumItems; scalar_t__ ItemType; size_t CurrentIndex; size_t DefaultIndex; } ;
struct TYPE_5__ {int Item; int ItemType; } ;
typedef int TW_UINT8 ;
typedef int TW_UINT32 ;
typedef int TW_UINT16 ;
typedef TYPE_1__ TW_ONEVALUE ;
typedef int TW_INT32 ;
typedef TYPE_2__ TW_ENUMERATION ;
typedef TYPE_3__ TW_CAPABILITY ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int,char*,int,int,int) ;
 int FUNC_3 (char*,int,int,...) ;

__attribute__((used)) static void FUNC_4(TW_CAPABILITY *VAR_9, TW_INT32 VAR_10,
                TW_UINT32 VAR_11, TW_UINT32 VAR_12, TW_UINT32 *VAR_13)
{
    void *VAR_14;
    if (VAR_13)
        *VAR_13 = VAR_11 + 1;
    VAR_14 = FUNC_0(VAR_9->hContainer);
    if (VAR_14)
    {
        if (VAR_9->ConType == VAR_1)
        {
            TW_ONEVALUE *VAR_15 = VAR_14;
            FUNC_2(VAR_15->Item == VAR_11 || !(VAR_10 & VAR_2), "MSG_GET of 0x%x returned 0x%x, expecting 0x%x\n",
                VAR_9->Cap, VAR_15->Item, VAR_11);
            FUNC_3("MSG_GET of 0x%x returned val 0x%x, type %d\n", VAR_9->Cap, VAR_15->Item, VAR_15->ItemType);
            if (VAR_13)
                *VAR_13 = VAR_15->Item;
        }
        else if (VAR_9->ConType == VAR_0)
        {
            int VAR_16;
            TW_UINT8 *VAR_17;
            TW_UINT16 *VAR_18;
            TW_UINT32 *VAR_19;
            TW_ENUMERATION *VAR_20 = VAR_14;
            VAR_17 = VAR_20->ItemList;
            VAR_18 = (TW_UINT16 *) VAR_17;
            VAR_19 = (TW_UINT32 *) VAR_17;
            FUNC_3("MSG_GET of 0x%x returned %d items:\n", VAR_9->Cap, VAR_20->NumItems);
            for (VAR_16 = 0; VAR_16 < VAR_20->NumItems; VAR_16++)
            {
                if (VAR_20->ItemType == VAR_8 || VAR_20->ItemType == VAR_5)
                    FUNC_3("  %d: 0x%x\n", VAR_16, VAR_17[VAR_16]);
                if (VAR_20->ItemType == VAR_6 || VAR_20->ItemType == VAR_3)
                    FUNC_3("  %d: 0x%x\n", VAR_16, VAR_18[VAR_16]);
                if (VAR_20->ItemType == VAR_7 || VAR_20->ItemType == VAR_4)
                    FUNC_3("  %d: 0x%x\n", VAR_16, VAR_19[VAR_16]);
            }
            if (VAR_20->ItemType == VAR_6 || VAR_20->ItemType == VAR_3)
            {
                FUNC_2(VAR_18[VAR_20->CurrentIndex] == VAR_11,
                    "Type 0x%x, values from MSG_GET (0x%x) and MSG_GETCURRENT (0x%x) do not match.\n",
                    VAR_9->Cap, VAR_18[VAR_20->CurrentIndex], VAR_11);
                FUNC_2(VAR_18[VAR_20->DefaultIndex] == VAR_12,
                    "Type 0x%x, values from MSG_GET (0x%x) and MSG_GETDEFAULT (0x%x) do not match.\n",
                    VAR_9->Cap, VAR_18[VAR_20->DefaultIndex], VAR_12);
                if (VAR_13)
                    *VAR_13 = VAR_18[(VAR_20->CurrentIndex + 1) % VAR_20->NumItems];
            }
            if (VAR_20->ItemType == VAR_7 || VAR_20->ItemType == VAR_4)
            {
                FUNC_2(VAR_19[VAR_20->CurrentIndex] == VAR_11,
                    "Type 0x%x, values from MSG_GET (0x%x) and MSG_GETCURRENT (0x%x) do not match.\n",
                    VAR_9->Cap, VAR_19[VAR_20->CurrentIndex], VAR_11);
                FUNC_2(VAR_19[VAR_20->DefaultIndex] == VAR_12,
                    "Type 0x%x, values from MSG_GET (0x%x) and MSG_GETDEFAULT (0x%x) do not match.\n",
                    VAR_9->Cap, VAR_19[VAR_20->DefaultIndex], VAR_12);
                if (VAR_13)
                    *VAR_13 = VAR_19[(VAR_20->CurrentIndex + 1) % VAR_20->NumItems];
            }
        }
        else
            FUNC_3("MSG_GET on type 0x%x returned type 0x%x, which we didn't check.\n", VAR_9->Cap, VAR_9->ConType);
        FUNC_1(VAR_9->hContainer);
    }
}
