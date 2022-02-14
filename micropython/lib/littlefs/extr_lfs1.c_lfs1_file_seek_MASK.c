
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lfs1_t ;
typedef int lfs1_soff_t ;
struct TYPE_4__ {int pos; int size; } ;
typedef TYPE_1__ lfs1_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,TYPE_1__*) ;

lfs1_soff_t FUNC_1(lfs1_t *VAR_5, lfs1_file_t *VAR_6,
        lfs1_soff_t VAR_7, int VAR_8) {

    int VAR_9 = FUNC_0(VAR_5, VAR_6);
    if (VAR_9) {
        return VAR_9;
    }


    lfs1_soff_t VAR_10 = VAR_6->pos;
    if (VAR_8 == VAR_4) {
        VAR_10 = VAR_7;
    } else if (VAR_8 == VAR_2) {
        VAR_10 = VAR_6->pos + VAR_7;
    } else if (VAR_8 == VAR_3) {
        VAR_10 = VAR_6->size + VAR_7;
    }

    if (VAR_10 < 0 || VAR_10 > VAR_1) {

        return VAR_0;
    }


    VAR_6->pos = VAR_10;
    return VAR_10;
}
