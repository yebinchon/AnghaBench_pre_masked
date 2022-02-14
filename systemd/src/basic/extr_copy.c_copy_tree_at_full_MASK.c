
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct stat {int st_mode; int st_dev; } ;
typedef int gid_t ;
typedef int copy_progress_path_t ;
typedef int copy_progress_bytes_t ;
typedef int CopyFlags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (char const*) ;
 int VAR_3 ;
 int FUNC_8 (int,char const*,struct stat*,int,char const*,int ,int ,int ,int ,int ,int *,int ,int ,void*) ;
 int FUNC_9 (int,char const*,struct stat*,int,char const*,int ,int ,int ) ;
 int FUNC_10 (int,char const*,struct stat*,int,char const*,int ,int ,int ) ;
 int FUNC_11 (int,char const*,struct stat*,int,char const*,int ,int ,int ,int ,void*) ;
 int FUNC_12 (int,char const*,struct stat*,int,char const*,int ,int ,int ) ;
 scalar_t__ FUNC_13 (int,char const*,struct stat*,int ) ;

int FUNC_14(
                int VAR_4,
                const char *VAR_5,
                int VAR_6,
                const char *VAR_7,
                uid_t VAR_8,
                gid_t VAR_9,
                CopyFlags VAR_10,
                copy_progress_path_t VAR_11,
                copy_progress_bytes_t VAR_12,
                void *VAR_13) {

        struct stat VAR_14;

        FUNC_7(VAR_5);
        FUNC_7(VAR_7);

        if (FUNC_13(VAR_4, VAR_5, &VAR_14, VAR_0) < 0)
                return -VAR_3;

        if (FUNC_5(VAR_14.st_mode))
                return FUNC_11(VAR_4, VAR_5, &VAR_14, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_12, VAR_13);
        else if (FUNC_2(VAR_14.st_mode))
                return FUNC_8(VAR_4, VAR_5, &VAR_14, VAR_6, VAR_7, VAR_14.st_dev, VAR_1, VAR_8, VAR_9, VAR_10, ((void*)0), VAR_11, VAR_12, VAR_13);
        else if (FUNC_4(VAR_14.st_mode))
                return FUNC_12(VAR_4, VAR_5, &VAR_14, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
        else if (FUNC_3(VAR_14.st_mode))
                return FUNC_9(VAR_4, VAR_5, &VAR_14, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
        else if (FUNC_0(VAR_14.st_mode) || FUNC_1(VAR_14.st_mode) || FUNC_6(VAR_14.st_mode))
                return FUNC_10(VAR_4, VAR_5, &VAR_14, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
        else
                return -VAR_2;
}
