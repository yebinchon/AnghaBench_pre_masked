
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int namelen; int name; int parent; } ;
typedef TYPE_1__ send_dir ;
struct TYPE_10__ {int datalen; } ;
typedef TYPE_2__ send_context ;
typedef int ULONG ;
typedef int BTRFS_TIME ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ,int *,int) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_4(send_context* VAR_5, send_dir* VAR_6, BTRFS_TIME* VAR_7, BTRFS_TIME* VAR_8, BTRFS_TIME* VAR_9) {
    ULONG VAR_10 = VAR_5->datalen;

    FUNC_2(VAR_5, VAR_0);

    FUNC_1(VAR_5, VAR_4, VAR_6->parent, VAR_6->name, VAR_6->namelen);

    FUNC_0(VAR_5, VAR_1, VAR_7, sizeof(BTRFS_TIME));
    FUNC_0(VAR_5, VAR_3, VAR_8, sizeof(BTRFS_TIME));
    FUNC_0(VAR_5, VAR_2, VAR_9, sizeof(BTRFS_TIME));

    FUNC_3(VAR_5, VAR_10);
}
