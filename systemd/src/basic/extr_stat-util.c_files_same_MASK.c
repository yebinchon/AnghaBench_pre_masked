
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_dev; scalar_t__ st_ino; } ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,char const*,struct stat*,int) ;

int FUNC_2(const char *VAR_2, const char *VAR_3, int VAR_4) {
        struct stat VAR_5, VAR_6;

        FUNC_0(VAR_2);
        FUNC_0(VAR_3);

        if (FUNC_1(VAR_0, VAR_2, &VAR_5, VAR_4) < 0)
                return -VAR_1;

        if (FUNC_1(VAR_0, VAR_3, &VAR_6, VAR_4) < 0)
                return -VAR_1;

        return VAR_5.st_dev == VAR_6.st_dev &&
               VAR_5.st_ino == VAR_6.st_ino;
}
