
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
typedef int ret ;
struct TYPE_11__ {int digest_size; int (* hash_final ) (unsigned char*,void*) ;int (* hash_update ) (void*,unsigned char const*,int) ;int (* hash_init ) (void*) ;int context_size; } ;
typedef TYPE_3__ php_hash_ops ;
struct TYPE_12__ {unsigned long count; int * redis; TYPE_2__* continuum; int * algorithm; int z_dist; } ;
struct TYPE_10__ {int nb_points; TYPE_1__* points; } ;
struct TYPE_9__ {unsigned long value; int index; } ;
typedef TYPE_4__ RedisArray ;


 int FUNC_0 (unsigned long,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (unsigned long*,unsigned char*,int ) ;
 TYPE_3__* FUNC_8 (int *,int) ;
 int FUNC_9 (TYPE_4__*,char const*,int) ;
 int * FUNC_10 (TYPE_4__*,char const*,int) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (void*,unsigned char const*,int) ;
 int FUNC_13 (unsigned char*,void*) ;
 int FUNC_14 (int *) ;

zval *
FUNC_15(RedisArray *VAR_1, const char *VAR_2, int VAR_3, int *VAR_4)
{
    int VAR_5;
    zend_string *VAR_6;


    if ((VAR_6 = FUNC_10(VAR_1, VAR_2, VAR_3)) == ((void*)0)) {
        return ((void*)0);
    }

    if (FUNC_4(VAR_1->z_dist) == VAR_0) {
        int VAR_7;
        unsigned long VAR_8 = 0xffffffff;
        const php_hash_ops *VAR_9;


        if (VAR_1->algorithm && (VAR_9 = FUNC_8(FUNC_3(VAR_1->algorithm), FUNC_2(VAR_1->algorithm))) != ((void*)0)) {
            void *VAR_10 = FUNC_6(VAR_9->context_size);
            unsigned char *VAR_11 = FUNC_6(VAR_9->digest_size);

            VAR_9->hash_init(VAR_10);
            VAR_9->hash_update(VAR_10, (const unsigned char *)FUNC_3(VAR_6), FUNC_2(VAR_6));
            VAR_9->hash_final(VAR_11, VAR_10);

            FUNC_7(&VAR_8, VAR_11, FUNC_1(sizeof(VAR_8), VAR_9->digest_size));
            VAR_8 %= 0xffffffff;

            FUNC_5(VAR_11);
            FUNC_5(VAR_10);
        } else {
            for (VAR_7 = 0; VAR_7 < FUNC_2(VAR_6); ++VAR_7) {
                FUNC_0(VAR_8, FUNC_3(VAR_6)[VAR_7]);
            }
        }


        if (VAR_1->continuum) {
            int VAR_12 = 0, VAR_13 = VAR_1->continuum->nb_points;
            while (VAR_12 < VAR_13) {
                VAR_7 = (int)((VAR_12 + VAR_13) / 2);
                if (VAR_1->continuum->points[VAR_7].value < VAR_8) {
                    VAR_12 = VAR_7 + 1;
                } else {
                    VAR_13 = VAR_7;
                }
            }
            if (VAR_13 == VAR_1->continuum->nb_points) {
                VAR_13 = 0;
            }
            VAR_5 = VAR_1->continuum->points[VAR_13].index;
        } else {
            VAR_5 = (int)((VAR_8 ^ 0xffffffff) * VAR_1->count / 0xffffffff);
        }
    } else {
        VAR_5 = FUNC_9(VAR_1, VAR_2, VAR_3);
        if (VAR_5 < 0 || VAR_5 >= VAR_1->count) {
            FUNC_14(VAR_6);
            return ((void*)0);
        }
    }
    FUNC_14(VAR_6);

    if(VAR_4) *VAR_4 = VAR_5;

    return &VAR_1->redis[VAR_5];
}
