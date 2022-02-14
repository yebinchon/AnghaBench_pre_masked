
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_dev; int st_mode; } ;
typedef int copy_progress_path_t ;
typedef int copy_progress_bytes_t ;
typedef int CopyFlags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (char const*) ;
 int VAR_5 ;
 int FUNC_2 (int ,char const*,struct stat*,int ,char const*,int ,int ,int ,int ,int ,int *,int ,int ,void*) ;
 scalar_t__ FUNC_3 (char const*,struct stat*) ;

int FUNC_4(
                const char *VAR_6,
                const char *VAR_7,
                CopyFlags VAR_8,
                copy_progress_path_t VAR_9,
                copy_progress_bytes_t VAR_10,
                void *VAR_11) {

        struct stat VAR_12;

        FUNC_1(VAR_6);
        FUNC_1(VAR_7);

        if (FUNC_3(VAR_6, &VAR_12) < 0)
                return -VAR_5;

        if (!FUNC_0(VAR_12.st_mode))
                return -VAR_2;

        return FUNC_2(VAR_0, VAR_6, &VAR_12, VAR_0, VAR_7, VAR_12.st_dev, VAR_1, VAR_4, VAR_3, VAR_8, ((void*)0), VAR_9, VAR_10, VAR_11);
}
