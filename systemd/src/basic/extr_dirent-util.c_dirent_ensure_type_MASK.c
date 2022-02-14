
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct dirent {scalar_t__ d_type; int d_name; } ;
typedef struct dirent DIR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct dirent*) ;
 int FUNC_8 (struct dirent*) ;
 int VAR_9 ;
 scalar_t__ FUNC_9 (int ,int ,struct stat*,int ) ;

int FUNC_10(DIR *VAR_10, struct dirent *VAR_11) {
        struct stat VAR_12;

        FUNC_7(VAR_10);
        FUNC_7(VAR_11);

        if (VAR_11->d_type != VAR_8)
                return 0;

        if (FUNC_9(FUNC_8(VAR_10), VAR_11->d_name, &VAR_12, VAR_0) < 0)
                return -VAR_9;

        VAR_11->d_type =
                FUNC_5(VAR_12.st_mode) ? VAR_6 :
                FUNC_2(VAR_12.st_mode) ? VAR_3 :
                FUNC_4(VAR_12.st_mode) ? VAR_5 :
                FUNC_3(VAR_12.st_mode) ? VAR_4 :
                FUNC_6(VAR_12.st_mode) ? VAR_7 :
                FUNC_1(VAR_12.st_mode) ? VAR_2 :
                FUNC_0(VAR_12.st_mode) ? VAR_1 :
                                       VAR_8;

        return 0;
}
