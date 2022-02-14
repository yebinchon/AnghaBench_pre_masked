
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct mc {struct mc* next; struct mc* name; void* ue_count_filename; void* ce_count_filename; } ;
struct dirent {scalar_t__ d_type; char* d_name; } ;
typedef int DIR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct mc* FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (char*,char*,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (struct mc*) ;
 scalar_t__ FUNC_5 (char) ;
 struct mc* VAR_2 ;
 char* VAR_3 ;
 int * FUNC_6 (char*) ;
 struct dirent* FUNC_7 (int *) ;
 int FUNC_8 (char*,int ,char*,char*,char*) ;
 int FUNC_9 (char*,struct stat*) ;
 void* FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12() {
    char VAR_4[VAR_1 + 1];
    FUNC_8(VAR_4, VAR_1, "%s%s", VAR_3, "/sys/devices/system/edac/mc");
    char *VAR_5 = FUNC_2("plugin:proc:/sys/devices/system/edac/mc", "directory to monitor", VAR_4);

    DIR *VAR_6 = FUNC_6(VAR_5);
    if(FUNC_11(!VAR_6)) {
        FUNC_3("Cannot read ECC memory errors directory '%s'", VAR_5);
        return;
    }

    struct dirent *VAR_7 = ((void*)0);
    while((VAR_7 = FUNC_7(VAR_6))) {
        if(VAR_7->d_type == VAR_0 && VAR_7->d_name[0] == 'm' && VAR_7->d_name[1] == 'c' && FUNC_5(VAR_7->d_name[2])) {
            struct mc *VAR_8 = FUNC_0(1, sizeof(struct mc));
            VAR_8->name = FUNC_10(VAR_7->d_name);

            struct stat VAR_9;

            FUNC_8(VAR_4, VAR_1, "%s/%s/ce_count", VAR_5, VAR_7->d_name);
            if(FUNC_9(VAR_4, &VAR_9) != -1)
                VAR_8->ce_count_filename = FUNC_10(VAR_4);

            FUNC_8(VAR_4, VAR_1, "%s/%s/ue_count", VAR_5, VAR_7->d_name);
            if(FUNC_9(VAR_4, &VAR_9) != -1)
                VAR_8->ue_count_filename = FUNC_10(VAR_4);

            if(!VAR_8->ce_count_filename && !VAR_8->ue_count_filename) {
                FUNC_4(VAR_8->name);
                FUNC_4(VAR_8);
            }
            else {
                VAR_8->next = VAR_2;
                VAR_2 = VAR_8;
            }
        }
    }

    FUNC_1(VAR_6);
}
