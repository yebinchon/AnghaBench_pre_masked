
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {char* filename; TYPE_1__* meth; } ;
struct TYPE_10__ {int (* dso_load ) (TYPE_2__*) ;} ;
typedef int DSO_METHOD ;
typedef TYPE_2__ DSO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ,int,int *) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,char const*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_8 ;
 int FUNC_5 (TYPE_2__*) ;

DSO *FUNC_6(DSO *VAR_9, const char *VAR_10, DSO_METHOD *VAR_11, int VAR_12)
{
    DSO *VAR_13;
    int VAR_14 = 0;

    if (VAR_9 == ((void*)0)) {
        VAR_13 = FUNC_2(VAR_11);
        if (VAR_13 == ((void*)0)) {
            FUNC_4(VAR_1, VAR_8);
            goto err;
        }
        VAR_14 = 1;

        if (FUNC_0(VAR_13, VAR_0, VAR_12, ((void*)0)) < 0) {
            FUNC_4(VAR_1, VAR_2);
            goto err;
        }
    } else
        VAR_13 = VAR_9;

    if (VAR_13->filename != ((void*)0)) {
        FUNC_4(VAR_1, VAR_3);
        goto err;
    }




    if (VAR_10 != ((void*)0))
        if (!FUNC_3(VAR_13, VAR_10)) {
            FUNC_4(VAR_1, VAR_6);
            goto err;
        }
    VAR_10 = VAR_13->filename;
    if (VAR_10 == ((void*)0)) {
        FUNC_4(VAR_1, VAR_5);
        goto err;
    }
    if (VAR_13->meth->dso_load == ((void*)0)) {
        FUNC_4(VAR_1, VAR_7);
        goto err;
    }
    if (!VAR_13->meth->dso_load(VAR_13)) {
        FUNC_4(VAR_1, VAR_4);
        goto err;
    }

    return VAR_13;
 err:
    if (VAR_14)
        FUNC_1(VAR_13);
    return ((void*)0);
}
