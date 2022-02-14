
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {int datalen; } ;
typedef TYPE_1__ send_context ;
typedef int ULONG ;
typedef char BTRFS_TIME ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,char*,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(send_context* VAR_5, char* VAR_6, BTRFS_TIME* VAR_7, BTRFS_TIME* VAR_8, BTRFS_TIME* VAR_9) {
    ULONG VAR_10 = VAR_5->datalen;

    FUNC_1(VAR_5, VAR_0);

    FUNC_0(VAR_5, VAR_4, VAR_6, VAR_6 ? (uint16_t)FUNC_3(VAR_6) : 0);
    FUNC_0(VAR_5, VAR_1, VAR_7, sizeof(BTRFS_TIME));
    FUNC_0(VAR_5, VAR_3, VAR_8, sizeof(BTRFS_TIME));
    FUNC_0(VAR_5, VAR_2, VAR_9, sizeof(BTRFS_TIME));

    FUNC_2(VAR_5, VAR_10);
}
