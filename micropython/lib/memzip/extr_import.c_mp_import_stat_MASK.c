
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mp_import_stat_t ;
struct TYPE_3__ {scalar_t__ is_dir; } ;
typedef TYPE_1__ MEMZIP_FILE_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (char const*,TYPE_1__*) ;

mp_import_stat_t FUNC_1(const char *VAR_4) {
    MEMZIP_FILE_INFO VAR_5;

    if (FUNC_0(VAR_4, &VAR_5) != VAR_3) {
        return VAR_2;
    }

    if (VAR_5.is_dir) {
        return VAR_0;
    }
    return VAR_1;
}
