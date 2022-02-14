
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int ULONGLONG ;
typedef scalar_t__ ULONG ;
struct TYPE_28__ {TYPE_4__* RootNode; } ;
struct TYPE_27__ {scalar_t__ KeyCount; TYPE_3__* FirstKey; void* DiskNeedsUpdating; } ;
struct TYPE_26__ {struct TYPE_26__* NextKey; TYPE_4__* LesserChild; TYPE_2__* IndexEntry; } ;
struct TYPE_24__ {int Name; int NameLength; } ;
struct TYPE_25__ {TYPE_1__ FileName; } ;
typedef int PFILENAME_ATTRIBUTE ;
typedef TYPE_3__* PB_TREE_KEY ;
typedef TYPE_4__* PB_TREE_FILENAME_NODE ;
typedef TYPE_5__* PB_TREE ;
typedef int NTSTATUS ;
typedef scalar_t__ LONG ;
typedef int BOOLEAN ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_3__*,int ) ;
 TYPE_3__* FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,TYPE_5__*,int ,int ,TYPE_4__*,char*,scalar_t__,scalar_t__,TYPE_3__**,TYPE_4__**) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_9 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_10 (TYPE_5__*,TYPE_4__*,TYPE_3__**,TYPE_4__**,int ) ;
 int VAR_4 ;
 void* VAR_5 ;

NTSTATUS
FUNC_11(PB_TREE VAR_6,
              ULONGLONG VAR_7,
              PFILENAME_ATTRIBUTE VAR_8,
              PB_TREE_FILENAME_NODE VAR_9,
              BOOLEAN VAR_10,
              ULONG VAR_11,
              ULONG VAR_12,
              PB_TREE_KEY *VAR_13,
              PB_TREE_FILENAME_NODE *VAR_14)
{
    PB_TREE_KEY VAR_15, VAR_16, VAR_17;
    NTSTATUS VAR_18 = VAR_3;
    ULONG VAR_19;
    ULONG VAR_20;
    ULONG VAR_21;
    ULONG VAR_22;

    *VAR_13 = ((void*)0);
    *VAR_14 = ((void*)0);

    FUNC_3("NtfsInsertKey(%p, 0x%I64x, %p, %p, %s, %lu, %lu, %p, %p)\n",
           VAR_6,
           VAR_7,
           VAR_8,
           VAR_9,
           VAR_10 ? "TRUE" : "FALSE",
           VAR_11,
           VAR_12,
           VAR_13,
           VAR_14);


    VAR_15 = FUNC_2(VAR_7, VAR_8);
    if (!VAR_15)
        return VAR_2;


    VAR_16 = VAR_9->FirstKey;
    VAR_17 = ((void*)0);
    for (VAR_22 = 0; VAR_22 < VAR_9->KeyCount; VAR_22++)
    {

        LONG VAR_23 = FUNC_1(VAR_15, VAR_16, VAR_10);

        if (VAR_23 == 0)
        {
            FUNC_4("\t\tComparison == 0: %.*S\n", VAR_15->IndexEntry->FileName.NameLength, VAR_15->IndexEntry->FileName.Name);
            FUNC_4("\t\tComparison == 0: %.*S\n", VAR_16->IndexEntry->FileName.NameLength, VAR_16->IndexEntry->FileName.Name);
        }
        FUNC_0(VAR_23 != 0);


        if (VAR_23 < 0)
        {

            if (VAR_16->LesserChild)
            {
                PB_TREE_KEY VAR_24;
                PB_TREE_FILENAME_NODE VAR_25;


                VAR_18 = FUNC_11(VAR_6,
                                       VAR_7,
                                       VAR_8,
                                       VAR_16->LesserChild,
                                       VAR_10,
                                       VAR_11,
                                       VAR_12,
                                       &VAR_24,
                                       &VAR_25);
                if (!FUNC_9(VAR_18))
                {
                    FUNC_4("ERROR: Failed to insert key.\n");
                    FUNC_6(VAR_15, VAR_4);
                    return VAR_18;
                }


                if (VAR_24)
                {
                    FUNC_0(VAR_25 != ((void*)0));


                    VAR_24->NextKey = VAR_16;


                    if (!VAR_17)
                        VAR_9->FirstKey = VAR_24;
                    else
                        VAR_17->NextKey = VAR_24;


                    VAR_16->LesserChild = VAR_25;

                    VAR_9->KeyCount++;
                    VAR_9->DiskNeedsUpdating = VAR_5;


                    FUNC_5(VAR_6);

                }
            }
            else
            {

                VAR_15->NextKey = VAR_16;


                VAR_9->KeyCount++;
                VAR_9->DiskNeedsUpdating = VAR_5;


                if (VAR_16 == VAR_9->FirstKey)
                    VAR_9->FirstKey = VAR_15;
                else
                    VAR_17->NextKey = VAR_15;
            }
            break;
        }

        VAR_17 = VAR_16;
        VAR_16 = VAR_16->NextKey;
    }


    VAR_19 = FUNC_8(VAR_9);


    if (VAR_9 != VAR_6->RootNode)
    {

        VAR_20 = VAR_12 - FUNC_7(VAR_1, VAR_0);


        VAR_21 = VAR_20 - 0x28;


        if (VAR_19 > VAR_21)
        {
            NTSTATUS VAR_26;

            VAR_26 = FUNC_10(VAR_6, VAR_9, VAR_13, VAR_14, VAR_10);
            if (!FUNC_9(VAR_26))
            {
                FUNC_4("ERROR: Failed to split B-Tree node!\n");
                return VAR_26;
            }

            return VAR_26;
        }
    }



    return VAR_18;
}
