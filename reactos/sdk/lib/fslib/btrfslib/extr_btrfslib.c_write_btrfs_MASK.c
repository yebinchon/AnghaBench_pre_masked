
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int btrfs_root ;
struct TYPE_7__ {int dev_id; } ;
struct TYPE_6__ {TYPE_4__ dev_item; } ;
typedef TYPE_1__ btrfs_dev ;
typedef int btrfs_chunk ;
typedef int ULONG ;
typedef int PUNICODE_STRING ;
typedef int NTSTATUS ;
typedef int LIST_ENTRY ;
typedef int HANDLE ;
typedef int DEV_ITEM ;
typedef int BTRFS_UUID ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,int,int *,TYPE_1__*,int *,int *,int ) ;
 int FUNC_5 (int *,int,int ,int ,TYPE_4__*,int) ;
 int * FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int *,int *,int ,int *,int *,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,...) ;
 int FUNC_12 (TYPE_1__*,int,int,int *,int ,...) ;
 int FUNC_13 (int *,int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (unsigned int) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (int ,int *,int ,int *,int *) ;
 int FUNC_19 (int ,TYPE_1__*,int *,int *,int *,int *,int ,int *,int ,int ,int) ;

__attribute__((used)) static NTSTATUS FUNC_20(HANDLE VAR_16, uint64_t VAR_17, PUNICODE_STRING VAR_18, uint32_t VAR_19, uint32_t VAR_20, uint64_t VAR_21) {
    NTSTATUS VAR_22;
    LIST_ENTRY VAR_23, VAR_24;
    btrfs_root *VAR_25, *VAR_26, *VAR_27, *VAR_28, *VAR_29, *VAR_30;
    btrfs_chunk *VAR_31, *VAR_32;
    btrfs_dev VAR_33;
    BTRFS_UUID VAR_34, VAR_35;
    BOOL VAR_36;
    uint64_t VAR_37;





    FUNC_16((unsigned int)FUNC_17(0));
    FUNC_11(&VAR_34);
    FUNC_11(&VAR_35);






    FUNC_0(&VAR_23);
    FUNC_0(&VAR_24);

    VAR_25 = FUNC_6(&VAR_23, VAR_12);
    VAR_26 = FUNC_6(&VAR_23, VAR_7);
    VAR_27 = FUNC_6(&VAR_23, VAR_10);
    VAR_28 = FUNC_6(&VAR_23, VAR_9);
    FUNC_6(&VAR_23, VAR_6);
    VAR_29 = FUNC_6(&VAR_23, VAR_11);
    VAR_30 = FUNC_6(&VAR_23, VAR_8);


    FUNC_12(&VAR_33, 1, VAR_17, &VAR_34, VAR_19);




    VAR_36 = FUNC_14(VAR_16);

    VAR_31 = FUNC_4(&VAR_24, VAR_3 | (VAR_36 ? 0 : VAR_1), VAR_26, &VAR_33, VAR_28, &VAR_35, VAR_19);
    if (!VAR_31)
        return VAR_13;

    VAR_37 = VAR_2;

    if (!VAR_36 && !(VAR_21 & VAR_4))
        VAR_37 |= VAR_1;

    if (VAR_21 & VAR_4)
        VAR_37 |= VAR_0;

    VAR_32 = FUNC_4(&VAR_24, VAR_37, VAR_26, &VAR_33, VAR_28, &VAR_35, VAR_19);
    if (!VAR_32)
        return VAR_13;

    FUNC_5(VAR_26, 1, VAR_15, VAR_33.dev_item.dev_id, &VAR_33.dev_item, sizeof(DEV_ITEM));

    FUNC_15(VAR_25, VAR_20);

    FUNC_13(VAR_29, VAR_20);
    FUNC_13(VAR_30, VAR_20);

    FUNC_7(&VAR_23, VAR_31, VAR_32, VAR_20, VAR_25, VAR_27, VAR_21 & VAR_5);

    FUNC_3(&VAR_24, VAR_27);

    VAR_22 = FUNC_18(VAR_16, &VAR_23, VAR_20, &VAR_34, &VAR_35);
    if (!FUNC_1(VAR_22))
        return VAR_22;

    VAR_22 = FUNC_8(VAR_16);
    if (!FUNC_1(VAR_22))
        return VAR_22;

    VAR_22 = FUNC_19(VAR_16, &VAR_33, VAR_26, VAR_25, VAR_27, VAR_31, VAR_20, &VAR_34, VAR_19, VAR_18, VAR_21);
    if (!FUNC_1(VAR_22))
        return VAR_22;

    FUNC_10(&VAR_23);
    FUNC_9(&VAR_24);

    return VAR_14;
}
