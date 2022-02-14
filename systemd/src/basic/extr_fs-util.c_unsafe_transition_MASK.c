
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_uid; } ;



__attribute__((used)) static bool FUNC_0(const struct stat *VAR_0, const struct stat *VAR_1) {




        if (VAR_0->st_uid == 0)
                return 0;

        return VAR_0->st_uid != VAR_1->st_uid;
}
