
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int last_mod_time; int last_mod_date; int uncompressed_size; } ;
struct TYPE_5__ {int is_dir; int last_mod_time; int last_mod_date; int file_size; } ;
typedef int MEMZIP_RESULT ;
typedef TYPE_1__ MEMZIP_FILE_INFO ;
typedef TYPE_2__ MEMZIP_FILE_HDR ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*) ;

MEMZIP_RESULT FUNC_2(const char *VAR_2, MEMZIP_FILE_INFO *VAR_3) {
    const MEMZIP_FILE_HDR *VAR_4 = FUNC_0(VAR_2);
    if (VAR_4 == ((void*)0)) {
        if (FUNC_1(VAR_2)) {
            VAR_3->file_size = 0;
            VAR_3->last_mod_date = 0;
            VAR_3->last_mod_time = 0;
            VAR_3->is_dir = 1;
            return VAR_1;
        }
        return VAR_0;
    }
    VAR_3->file_size = VAR_4->uncompressed_size;
    VAR_3->last_mod_date = VAR_4->last_mod_date;
    VAR_3->last_mod_time = VAR_4->last_mod_time;
    VAR_3->is_dir = 0;

    return VAR_1;
}
