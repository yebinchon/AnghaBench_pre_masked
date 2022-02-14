
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char* d_name; } ;
typedef int FILE ;
typedef int DIR ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int,char*,char*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int *,char*,int*,char*,char*,int*) ;
 int * FUNC_6 (char*) ;
 int FUNC_7 (int,char*) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (char*,char*,char*) ;

int FUNC_10(int VAR_0, int VAR_1, int VAR_2) {
        int VAR_3, VAR_4, VAR_5, VAR_6 = 0;
        FILE *VAR_7;
        char VAR_8[8];
        char VAR_9[128];
        char VAR_10[1024];
        struct dirent *VAR_11;
        DIR *VAR_12;

        if (VAR_0 < 1)
        return 0;
 VAR_12 = FUNC_6 ("/proc/");
 if (!VAR_12) {
                return 0;
 }

        while ((VAR_11 = (struct dirent *)FUNC_8 (VAR_12))) {
                VAR_3 = FUNC_0 (VAR_11->d_name);
                if (VAR_3) {
                        FUNC_9 (VAR_9,"/proc/%s/stat", VAR_11->d_name);
                        VAR_7 = FUNC_4 (VAR_9, "r");
                        if (VAR_7) {
                                VAR_4 = 0;
                                FUNC_5 (VAR_7,"%d %s %s %d",
                                        &VAR_5, VAR_10, VAR_8, &VAR_4);
                                if (VAR_4 == VAR_0) {
                                        FUNC_7 (VAR_3, VAR_10);


                                        FUNC_2 (" `- %d : %s (%s)\n",
      VAR_3, VAR_10, (VAR_8[0]=='S')?
      "sleeping":(VAR_8[0]=='T')?
      "stopped":"running");
                                        VAR_6++;
                                        if (VAR_1<VAR_2) {
                                                VAR_6 += FUNC_10 (VAR_3, VAR_1+1, VAR_2);
     }
                                }
                        }
                        FUNC_3 (VAR_7);
                }
        }
 FUNC_1 (VAR_12);
        return VAR_6;
}
