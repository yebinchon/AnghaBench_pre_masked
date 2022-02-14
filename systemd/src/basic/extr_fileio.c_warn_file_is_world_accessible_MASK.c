
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int ,char const*,unsigned int,int ,char*,char const*,int) ;
 int FUNC_1 (char*,char const*,int) ;
 scalar_t__ FUNC_2 (char const*,struct stat*) ;

int FUNC_3(const char *VAR_3, struct stat *VAR_4, const char *VAR_5, unsigned VAR_6) {
        struct stat VAR_7;

        if (!VAR_3)
                return 0;

        if (!VAR_4) {
                if (FUNC_2(VAR_3, &VAR_7) < 0)
                        return -VAR_2;
                VAR_4 = &VAR_7;
        }

        if ((VAR_4->st_mode & VAR_1) == 0)
                return 0;

        if (VAR_5)
                FUNC_0(VAR_5, VAR_0, VAR_3, VAR_6, 0,
                           "%s has %04o mode that is too permissive, please adjust the ownership and access mode.",
                           VAR_3, VAR_4->st_mode & 07777);
        else
                FUNC_1("%s has %04o mode that is too permissive, please adjust the ownership and access mode.",
                            VAR_3, VAR_4->st_mode & 07777);
        return 0;
}
