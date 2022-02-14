
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct stat {int st_rdev; } ;
struct dirent {int d_name; } ;
typedef int procfile ;
struct TYPE_4__ {int * file; } ;
typedef TYPE_1__ ZRAM_DEVICE ;
typedef int DIR ;
typedef int DICTIONARY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,TYPE_1__*,int) ;
 int VAR_2 ;
 int FUNC_2 (char*,char*,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,TYPE_1__*,int) ;
 unsigned int FUNC_5 (int ) ;
 int * FUNC_6 (char*) ;
 int * FUNC_7 (char*,char*,int ) ;
 struct dirent* FUNC_8 (int *) ;
 int FUNC_9 (char*,int ,char*,int ) ;
 scalar_t__ FUNC_10 (char*,struct stat*) ;
 char* FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(DICTIONARY *VAR_3, unsigned int VAR_4, int VAR_5) {
    int VAR_6 = 0;
    DIR *VAR_7 = FUNC_6("/dev");
    struct dirent *VAR_8;
    struct stat VAR_9;
    char VAR_10[VAR_0 + 1];
    procfile *VAR_11 = ((void*)0);
    ZRAM_DEVICE VAR_12;

    if (FUNC_12(!VAR_7))
        return 0;
    while ((VAR_8 = FUNC_8(VAR_7)))
    {
        FUNC_9(VAR_10, VAR_0, "/dev/%s", VAR_8->d_name);
        if (FUNC_12(FUNC_10(VAR_10, &VAR_9) != 0))
        {
            FUNC_2("ZRAM : Unable to stat %s: %s", VAR_10, FUNC_11(VAR_2));
            continue;
        }
        if (FUNC_5(VAR_9.st_rdev) == VAR_4)
        {
            FUNC_3("ZRAM : Found device %s", VAR_10);
            FUNC_9(VAR_10, VAR_0, "/sys/block/%s/mm_stat", VAR_8->d_name);
            VAR_11 = FUNC_7(VAR_10, " \t:", VAR_1);
            if (VAR_11 == ((void*)0))
            {
                FUNC_2("ZRAM : Failed to open %s: %s", VAR_10, FUNC_11(VAR_2));
                continue;
            }
            VAR_12.file = VAR_11;
            FUNC_4(VAR_8->d_name, &VAR_12, VAR_5);
            FUNC_1(VAR_3, VAR_8->d_name, &VAR_12, sizeof(ZRAM_DEVICE));
            VAR_6++;
        }
    }
    FUNC_0(VAR_7);
    return VAR_6;
}
