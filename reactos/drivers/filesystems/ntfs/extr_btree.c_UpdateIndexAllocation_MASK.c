
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
typedef int ULONGLONG ;
typedef scalar_t__ ULONG ;
struct TYPE_28__ {int VCN; } ;
struct TYPE_27__ {TYPE_1__* RootNode; } ;
struct TYPE_26__ {struct TYPE_26__* NextKey; TYPE_8__* LesserChild; TYPE_3__* IndexEntry; } ;
struct TYPE_25__ {scalar_t__ BytesInUse; } ;
struct TYPE_24__ {int Length; int Flags; } ;
struct TYPE_23__ {scalar_t__ Length; } ;
struct TYPE_22__ {scalar_t__ KeyCount; TYPE_5__* FirstKey; } ;
typedef TYPE_2__* PNTFS_ATTR_RECORD ;
typedef int PNTFS_ATTR_CONTEXT ;
typedef TYPE_3__* PINDEX_ENTRY_ATTRIBUTE ;
typedef TYPE_4__* PFILE_RECORD_HEADER ;
typedef int PDEVICE_EXTENSION ;
typedef TYPE_5__* PB_TREE_KEY ;
typedef TYPE_6__* PB_TREE ;
typedef int NTSTATUS ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (int ,TYPE_4__*,TYPE_2__*,char*,int) ;
 int FUNC_1 (int ,TYPE_4__*,TYPE_2__*,char*,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_6__*) ;
 TYPE_3__* FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (TYPE_3__*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_8 (int ,TYPE_4__*,int ,char*,int,int *,scalar_t__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_9 (int ) ;
 int VAR_3 ;
 int FUNC_10 (int ,int ,scalar_t__) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_3__*,TYPE_3__*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_13 (TYPE_3__*,int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_14 (int ,TYPE_4__*,TYPE_8__*,scalar_t__,int ,scalar_t__) ;

NTSTATUS
FUNC_15(PDEVICE_EXTENSION VAR_8,
                      PB_TREE VAR_9,
                      ULONG VAR_10,
                      PFILE_RECORD_HEADER VAR_11)
{

    PNTFS_ATTR_CONTEXT VAR_12;
    PB_TREE_KEY VAR_13;
    NTSTATUS VAR_14;
    BOOLEAN VAR_15 = VAR_1;
    ULONG VAR_16;
    ULONG VAR_17;

    FUNC_3("UpdateIndexAllocation() called.\n");

    VAR_14 = FUNC_8(VAR_8, VAR_11, VAR_0, L"$I30", 4, &VAR_12, &VAR_17);
    if (FUNC_9(VAR_14))
    {
        VAR_15 = VAR_7;


        FUNC_10(VAR_8,
                     VAR_12,
                     VAR_10);

    }

    VAR_13 = VAR_9->RootNode->FirstKey;
    for (VAR_16 = 0; VAR_16 < VAR_9->RootNode->KeyCount; VAR_16++)
    {
        if (VAR_13->LesserChild)
        {
            if (!VAR_15)
            {

                PNTFS_ATTR_RECORD VAR_18 = (PNTFS_ATTR_RECORD)((ULONG_PTR)VAR_11 + VAR_11->BytesInUse - (sizeof(ULONG) * 2));
                FUNC_4("Adding index allocation...\n");


                VAR_14 = FUNC_1(VAR_8,
                                            VAR_11,
                                            VAR_18,
                                            L"$I30",
                                            4);
                if (!FUNC_9(VAR_14))
                {
                    FUNC_4("ERROR: Failed to add index allocation!\n");
                    return VAR_14;
                }


                VAR_14 = FUNC_8(VAR_8, VAR_11, VAR_0, L"$I30", 4, &VAR_12, &VAR_17);
                if (!FUNC_9(VAR_14))
                {
                    FUNC_4("ERROR: Couldn't find newly-created index allocation!\n");
                    return VAR_14;
                }


                VAR_18 = (PNTFS_ATTR_RECORD)((ULONG_PTR)VAR_18 + VAR_18->Length);


                VAR_14 = FUNC_0(VAR_8,
                                   VAR_11,
                                   VAR_18,
                                   L"$I30",
                                   4);
                if (!FUNC_9(VAR_14))
                {
                    FUNC_4("ERROR: Failed to add index bitmap!\n");
                    FUNC_11(VAR_12);
                    return VAR_14;
                }

                VAR_15 = VAR_7;
            }


            if (!FUNC_2(VAR_13->IndexEntry->Flags, VAR_2))
            {

                PINDEX_ENTRY_ATTRIBUTE VAR_19 = FUNC_6(VAR_3,
                                                                        VAR_13->IndexEntry->Length + sizeof(ULONGLONG),
                                                                        VAR_6);
                if (!VAR_19)
                {
                    FUNC_4("ERROR: Unable to allocate memory for new index entry!\n");
                    if (VAR_15)
                        FUNC_11(VAR_12);
                    return VAR_4;
                }


                FUNC_12(VAR_19, VAR_13->IndexEntry, VAR_13->IndexEntry->Length);

                VAR_19->Length += sizeof(ULONGLONG);


                FUNC_7(VAR_13->IndexEntry, VAR_6);

                VAR_13->IndexEntry = VAR_19;
                VAR_13->IndexEntry->Flags |= VAR_2;
            }


            VAR_14 = FUNC_14(VAR_8, VAR_11, VAR_13->LesserChild, VAR_10, VAR_12, VAR_17);
            if (!FUNC_9(VAR_14))
            {
                FUNC_4("ERROR: Failed to update index node!\n");
                FUNC_11(VAR_12);
                return VAR_14;
            }


            FUNC_13(VAR_13->IndexEntry, VAR_13->LesserChild->VCN);
        }
        VAR_13 = VAR_13->NextKey;
    }


    FUNC_5(VAR_9);


    if (VAR_15)
    {

        FUNC_10(VAR_8,
                     VAR_12,
                     VAR_10);

        FUNC_11(VAR_12);
    }

    return VAR_5;
}
