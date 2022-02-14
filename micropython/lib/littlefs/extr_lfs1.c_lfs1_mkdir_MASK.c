
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_23__ {int deorphaned; } ;
typedef TYPE_4__ lfs1_t ;
struct TYPE_20__ {int * dir; } ;
struct TYPE_21__ {int elen; TYPE_1__ u; int nlen; scalar_t__ alen; int type; } ;
struct TYPE_24__ {TYPE_2__ d; } ;
typedef TYPE_5__ lfs1_entry_t ;
struct TYPE_22__ {int * tail; } ;
struct TYPE_25__ {int * pair; TYPE_3__ d; } ;
typedef TYPE_6__ lfs1_dir_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_6__*,TYPE_5__*,char const*) ;
 int FUNC_4 (TYPE_4__*,TYPE_6__*,int *,int ) ;
 int FUNC_5 (TYPE_4__*,TYPE_6__*,TYPE_5__*,char const**) ;
 int * FUNC_6 (char const*,char) ;
 int FUNC_7 (char const*) ;

int FUNC_8(lfs1_t *VAR_3, const char *VAR_4) {

    if (!VAR_3->deorphaned) {
        int VAR_5 = FUNC_1(VAR_3);
        if (VAR_5) {
            return VAR_5;
        }
    }


    lfs1_dir_t VAR_6;
    lfs1_entry_t VAR_7;
    int VAR_8 = FUNC_5(VAR_3, &VAR_6, &VAR_7, &VAR_4);
    if (VAR_8 != VAR_1 || FUNC_6(VAR_4, '/') != ((void*)0)) {
        return VAR_8 ? VAR_8 : VAR_0;
    }


    FUNC_0(VAR_3);

    lfs1_dir_t VAR_9;
    VAR_8 = FUNC_2(VAR_3, &VAR_9);
    if (VAR_8) {
        return VAR_8;
    }
    VAR_9.d.tail[0] = VAR_6.d.tail[0];
    VAR_9.d.tail[1] = VAR_6.d.tail[1];

    VAR_8 = FUNC_4(VAR_3, &VAR_9, ((void*)0), 0);
    if (VAR_8) {
        return VAR_8;
    }

    VAR_7.d.type = VAR_2;
    VAR_7.d.elen = sizeof(VAR_7.d) - 4;
    VAR_7.d.alen = 0;
    VAR_7.d.nlen = FUNC_7(VAR_4);
    VAR_7.d.u.dir[0] = VAR_9.pair[0];
    VAR_7.d.u.dir[1] = VAR_9.pair[1];

    VAR_6.d.tail[0] = VAR_9.pair[0];
    VAR_6.d.tail[1] = VAR_9.pair[1];

    VAR_8 = FUNC_3(VAR_3, &VAR_6, &VAR_7, VAR_4);
    if (VAR_8) {
        return VAR_8;
    }

    FUNC_0(VAR_3);
    return 0;
}
