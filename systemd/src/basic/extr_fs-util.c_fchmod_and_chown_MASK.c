
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct stat {scalar_t__ st_uid; scalar_t__ st_gid; int st_mode; } ;
typedef int mode_t ;
typedef scalar_t__ gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int,char*,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int,struct stat*) ;

int FUNC_4(int VAR_7, mode_t VAR_8, uid_t VAR_9, gid_t VAR_10) {
        bool VAR_11, VAR_12;
        struct stat VAR_13;
        if (FUNC_3(VAR_7, &VAR_13) < 0)
                return -VAR_6;

        VAR_11 =
                (VAR_9 != VAR_5 && VAR_13.st_uid != VAR_9) ||
                (VAR_10 != VAR_2 && VAR_13.st_gid != VAR_10);

        VAR_12 =
                !FUNC_0(VAR_13.st_mode) &&
                ((VAR_8 != VAR_3 && ((VAR_13.st_mode ^ VAR_8) & 07777) != 0) ||
                 VAR_11);


        if (VAR_8 == VAR_3)
                VAR_8 = VAR_13.st_mode;
        else if ((VAR_8 & VAR_4) != 0 && ((VAR_8 ^ VAR_13.st_mode) & VAR_4) != 0)
                return -VAR_1;

        if (VAR_11 && VAR_12) {
                mode_t VAR_14 = VAR_13.st_mode & VAR_8;

                if (((VAR_14 ^ VAR_13.st_mode) & 07777) != 0)
                        if (FUNC_1(VAR_7, VAR_14 & 07777) < 0)
                                return -VAR_6;
        }

        if (VAR_11)
                if (FUNC_2(VAR_7, "", VAR_9, VAR_10, VAR_0) < 0)
                        return -VAR_6;

        if (VAR_12)
                if (FUNC_1(VAR_7, VAR_8 & 07777) < 0)
                        return -VAR_6;

        return VAR_11 || VAR_12;
}
