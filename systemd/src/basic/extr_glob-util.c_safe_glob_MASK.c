
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct dirent* (* gl_readdir ) (void*) ;void* (* gl_opendir ) (char const*) ;int gl_pathv; scalar_t__ gl_stat; scalar_t__ gl_lstat; scalar_t__ gl_closedir; } ;
typedef TYPE_1__ glob_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*,int,int *,TYPE_1__*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_3 (int ) ;

int FUNC_4(const char *VAR_12, int VAR_13, glob_t *VAR_14) {
        int VAR_15;


        FUNC_0(!(VAR_13 & VAR_3));

        if (!VAR_14->gl_closedir)
                VAR_14->gl_closedir = VAR_6;
        if (!VAR_14->gl_readdir)
                VAR_14->gl_readdir = (struct dirent *(*)(void *)) VAR_10;
        if (!VAR_14->gl_opendir)
                VAR_14->gl_opendir = (void *(*)(const char *)) VAR_9;
        if (!VAR_14->gl_lstat)
                VAR_14->gl_lstat = VAR_8;
        if (!VAR_14->gl_stat)
                VAR_14->gl_stat = VAR_11;

        VAR_7 = 0;
        VAR_15 = FUNC_2(VAR_12, VAR_13 | VAR_3, ((void*)0), VAR_14);
        if (VAR_15 == VAR_4)
                return -VAR_1;
        if (VAR_15 == VAR_5)
                return -VAR_2;
        if (VAR_15 != 0)
                return FUNC_1(VAR_0);
        if (FUNC_3(VAR_14->gl_pathv))
                return -VAR_1;

        return 0;
}
