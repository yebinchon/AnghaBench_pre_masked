
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_14__ {unsigned int context; } ;
typedef TYPE_2__ custom_ext_method ;
struct TYPE_17__ {unsigned int context; } ;
struct TYPE_16__ {int type; int present; } ;
struct TYPE_15__ {TYPE_1__* cert; } ;
struct TYPE_12__ {size_t meths_count; } ;
struct TYPE_13__ {TYPE_10__ custext; } ;
typedef TYPE_3__ SSL ;
typedef TYPE_4__ RAW_EXTENSION ;
typedef int ENDPOINT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (TYPE_8__*) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 TYPE_2__* FUNC_1 (TYPE_10__*,int ,int ,size_t*) ;
 TYPE_8__* VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,unsigned int,unsigned int) ;

int FUNC_4(SSL *VAR_6, unsigned int VAR_7, RAW_EXTENSION *VAR_8)
{
    size_t VAR_9, VAR_10, VAR_11 = FUNC_0(VAR_5), VAR_12;
    RAW_EXTENSION *VAR_13;
    unsigned int VAR_14;
    ENDPOINT VAR_15 = VAR_0;

    if ((VAR_7 & VAR_3) != 0)
        VAR_15 = VAR_2;
    else if ((VAR_7 & VAR_4) != 0)
        VAR_15 = VAR_1;


    VAR_10 = VAR_11 + VAR_6->cert->custext.meths_count;

    for (VAR_13 = VAR_8, VAR_9 = 0; VAR_9 < VAR_10; VAR_9++, VAR_13++) {
        if (!VAR_13->present)
            continue;

        if (VAR_9 < VAR_11) {
            VAR_14 = VAR_5[VAR_9].context;
        } else {
            custom_ext_method *VAR_16 = ((void*)0);

            VAR_16 = FUNC_1(&VAR_6->cert->custext, VAR_15, VAR_13->type,
                                   &VAR_12);
            if (!FUNC_2(VAR_16 != ((void*)0)))
                return 0;
            VAR_14 = VAR_16->context;
        }

        if (!FUNC_3(VAR_6, VAR_14, VAR_7))
            return 0;
    }

    return 1;
}
