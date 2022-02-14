
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct node {struct node* next; void* numastat_filename; struct node* name; } ;
struct dirent {scalar_t__ d_type; char* d_name; } ;
typedef int DIR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct node* FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (char*,char*,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (struct node*) ;
 int FUNC_5 (char) ;
 char* VAR_2 ;
 struct node* VAR_3 ;
 int * FUNC_6 (char*) ;
 struct dirent* FUNC_7 (int *) ;
 int FUNC_8 (char*,int ,char*,char*,char*) ;
 int FUNC_9 (char*,struct stat*) ;
 void* FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char*,char*,int) ;

__attribute__((used)) static int FUNC_12() {
    int VAR_4 = 0;
    char VAR_5[VAR_1 + 1];
    FUNC_8(VAR_5, VAR_1, "%s%s", VAR_2, "/sys/devices/system/node");
    char *VAR_6 = FUNC_2("plugin:proc:/sys/devices/system/node", "directory to monitor", VAR_5);

    DIR *VAR_7 = FUNC_6(VAR_6);
    if(!VAR_7) {
        FUNC_3("Cannot read NUMA node directory '%s'", VAR_6);
        return 0;
    }

    struct dirent *VAR_8 = ((void*)0);
    while((VAR_8 = FUNC_7(VAR_7))) {
        if(VAR_8->d_type != VAR_0)
            continue;

        if(FUNC_11(VAR_8->d_name, "node", 4) != 0)
            continue;

        if(!FUNC_5(VAR_8->d_name[4]))
            continue;

        VAR_4++;

        struct node *VAR_9 = FUNC_0(1, sizeof(struct node));
        VAR_9->name = FUNC_10(VAR_8->d_name);

        struct stat VAR_10;

        FUNC_8(VAR_5, VAR_1, "%s/%s/numastat", VAR_6, VAR_8->d_name);
        if(FUNC_9(VAR_5, &VAR_10) == -1) {
            FUNC_4(VAR_9->name);
            FUNC_4(VAR_9);
            continue;
        }

        VAR_9->numastat_filename = FUNC_10(VAR_5);

        VAR_9->next = VAR_3;
        VAR_3 = VAR_9;
    }

    FUNC_1(VAR_7);

    return VAR_4;
}
