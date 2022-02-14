
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int superblock ;
struct TYPE_4__ {scalar_t__ num_bytes; } ;
struct TYPE_5__ {int fileobj; int devobj; TYPE_1__ devitem; } ;
typedef TYPE_2__ device ;
typedef int NTSTATUS ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;
 int FUNC_5 (int ,int ,scalar_t__,int *,int) ;

__attribute__((used)) static NTSTATUS FUNC_6(device* VAR_5) {
    NTSTATUS VAR_6;
    superblock* VAR_7;
    int VAR_8 = 0;

    VAR_7 = FUNC_1(VAR_1, sizeof(superblock), VAR_0);
    if (!VAR_7) {
        FUNC_0("out of memory\n");
        return VAR_2;
    }

    FUNC_4(VAR_7, sizeof(superblock));

    while (VAR_4[VAR_8] > 0 && VAR_5->devitem.num_bytes >= VAR_4[VAR_8] + sizeof(superblock)) {
        VAR_6 = FUNC_5(VAR_5->devobj, VAR_5->fileobj, VAR_4[VAR_8], VAR_7, sizeof(superblock));

        if (!FUNC_3(VAR_6)) {
            FUNC_2(VAR_7);
            return VAR_6;
        }

        VAR_8++;
    }

    FUNC_2(VAR_7);

    return VAR_3;
}
