
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct stat {int dummy; } ;
struct dirent {scalar_t__ d_type; char* d_name; } ;
struct TYPE_7__ {int exists; scalar_t__ hash; char* name; char const* size_filename; char const* hw_sector_size_filename; int size; int hw_sector_size; struct TYPE_7__* next; } ;
struct TYPE_6__ {int logged_error; TYPE_2__* disks; scalar_t__ all_disks_total; } ;
typedef int DIR ;
typedef TYPE_1__ BTRFS_NODE ;
typedef TYPE_2__ BTRFS_DISK ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char const*) ;
 int * FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,int*) ;
 struct dirent* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (char*,int ,char*,char const*,char*) ;
 int FUNC_9 (char*,struct stat*) ;
 int FUNC_10 (char*,char*) ;
 void* FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static inline int FUNC_13(BTRFS_NODE *VAR_2, const char *VAR_3) {
    char VAR_4[VAR_1 + 1];

    VAR_2->all_disks_total = 0;

    BTRFS_DISK *VAR_5;
    for(VAR_5 = VAR_2->disks ; VAR_5 ; VAR_5 = VAR_5->next)
        VAR_5->exists = 0;

    DIR *VAR_6 = FUNC_4(VAR_3);
    if (!VAR_6) {
        if(!VAR_2->logged_error) {
            FUNC_3("BTRFS: Cannot open directory '%s'.", VAR_3);
            VAR_2->logged_error = 1;
        }
        return 1;
    }
    VAR_2->logged_error = 0;

    struct dirent *VAR_7 = ((void*)0);
    while ((VAR_7 = FUNC_6(VAR_6))) {
        if (VAR_7->d_type != VAR_0
            || !FUNC_10(VAR_7->d_name, ".")
            || !FUNC_10(VAR_7->d_name, "..")
                ) {

            continue;
        }

        uint32_t VAR_8 = FUNC_7(VAR_7->d_name);




        for(VAR_5 = VAR_2->disks ; VAR_5 ; VAR_5 = VAR_5->next) {
            if(VAR_8 == VAR_5->hash && !FUNC_10(VAR_7->d_name, VAR_5->name))
                break;
        }




        if(!VAR_5) {
            VAR_5 = FUNC_1(sizeof(BTRFS_DISK), 1);

            VAR_5->name = FUNC_11(VAR_7->d_name);
            VAR_5->hash = FUNC_7(VAR_5->name);

            FUNC_8(VAR_4, VAR_1, "%s/%s/size", VAR_3, VAR_7->d_name);
            VAR_5->size_filename = FUNC_11(VAR_4);


            FUNC_8(VAR_4, VAR_1, "%s/%s/bcache/../queue/hw_sector_size", VAR_3, VAR_7->d_name);
            struct stat VAR_9;
            if(FUNC_9(VAR_4, &VAR_9) == -1) {

                FUNC_8(VAR_4, VAR_1, "%s/%s/queue/hw_sector_size", VAR_3, VAR_7->d_name);
                if(FUNC_9(VAR_4, &VAR_9) == -1)

                    FUNC_8(VAR_4, VAR_1, "%s/%s/../queue/hw_sector_size", VAR_3, VAR_7->d_name);
            }

            VAR_5->hw_sector_size_filename = FUNC_11(VAR_4);


            VAR_5->next = VAR_2->disks;
            VAR_2->disks = VAR_5;
        }

        VAR_5->exists = 1;





        if(FUNC_5(VAR_5->size_filename, &VAR_5->size) != 0) {
            FUNC_3("BTRFS: failed to read '%s'", VAR_5->size_filename);
            VAR_5->exists = 0;
            continue;
        }

        if(FUNC_5(VAR_5->hw_sector_size_filename, &VAR_5->hw_sector_size) != 0) {
            FUNC_3("BTRFS: failed to read '%s'", VAR_5->hw_sector_size_filename);
            VAR_5->exists = 0;
            continue;
        }

        VAR_2->all_disks_total += VAR_5->size * VAR_5->hw_sector_size;
    }
    FUNC_2(VAR_6);




    BTRFS_DISK *VAR_10 = ((void*)0);
    VAR_5 = VAR_2->disks;

    while(VAR_5) {
        if(FUNC_12(!VAR_5->exists)) {
            if(FUNC_12(VAR_2->disks == VAR_5)) {
                VAR_2->disks = VAR_5->next;
                FUNC_0(VAR_5);
                VAR_5 = VAR_2->disks;
                VAR_10 = ((void*)0);
            }
            else {
                VAR_10->next = VAR_5->next;
                FUNC_0(VAR_5);
                VAR_5 = VAR_10->next;
            }

            continue;
        }

        VAR_10 = VAR_5;
        VAR_5 = VAR_5->next;
    }

    return 0;
}
