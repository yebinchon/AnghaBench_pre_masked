
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct dict {int dummy; } ;
typedef int sds ;
struct TYPE_12__ {int flags; } ;
typedef TYPE_2__ redisContext ;
typedef int redisCallbackFn ;
struct TYPE_13__ {int pending_subs; void* privdata; int * fn; } ;
typedef TYPE_3__ redisCallback ;
struct TYPE_11__ {int invalid; struct dict* channels; struct dict* patterns; } ;
struct TYPE_14__ {int replies; TYPE_1__ sub; TYPE_2__ c; } ;
typedef TYPE_4__ redisAsyncContext ;
typedef int dictEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_2__*,char const*,size_t) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (struct dict*,int ) ;
 TYPE_3__* FUNC_5 (int *) ;
 int FUNC_6 (struct dict*,int ,TYPE_3__*) ;
 char* FUNC_7 (char const*,char const**,size_t*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char const*,size_t) ;
 scalar_t__ FUNC_10 (char const*,char*,int) ;
 char FUNC_11 (char const) ;

__attribute__((used)) static int FUNC_12(redisAsyncContext *VAR_6, redisCallbackFn *VAR_7, void *VAR_8, const char *VAR_9, size_t VAR_10) {
    redisContext *VAR_11 = &(VAR_6->c);
    redisCallback VAR_12;
    struct dict *VAR_13;
    dictEntry *VAR_14;
    redisCallback *VAR_15;
    int VAR_16, VAR_17;
    const char *VAR_18, *VAR_19;
    size_t VAR_20, VAR_21;
    const char *VAR_22;
    sds VAR_23;
    int VAR_24;


    if (VAR_11->flags & (VAR_0 | VAR_2)) return VAR_1;


    VAR_12.fn = VAR_7;
    VAR_12.privdata = VAR_8;
    VAR_12.pending_subs = 1;


    VAR_22 = FUNC_7(VAR_9,&VAR_18,&VAR_20);
    FUNC_3(VAR_22 != ((void*)0));
    VAR_17 = (VAR_22[0] == '$');
    VAR_16 = (FUNC_11(VAR_18[0]) == 'p') ? 1 : 0;
    VAR_18 += VAR_16;
    VAR_20 -= VAR_16;

    if (VAR_17 && FUNC_10(VAR_18,"subscribe\r\n",11) == 0) {
        VAR_11->flags |= VAR_5;


        while ((VAR_22 = FUNC_7(VAR_22,&VAR_19,&VAR_21)) != ((void*)0)) {
            VAR_23 = FUNC_9(VAR_19,VAR_21);
            if (VAR_16)
                VAR_13 = VAR_6->sub.patterns;
            else
                VAR_13 = VAR_6->sub.channels;

            VAR_14 = FUNC_4(VAR_13,VAR_23);

            if (VAR_14 != ((void*)0)) {
                VAR_15 = FUNC_5(VAR_14);
                VAR_12.pending_subs = VAR_15->pending_subs + 1;
            }

            VAR_24 = FUNC_6(VAR_13,VAR_23,&VAR_12);

            if (VAR_24 == 0) FUNC_8(VAR_23);
        }
    } else if (FUNC_10(VAR_18,"unsubscribe\r\n",13) == 0) {


        if (!(VAR_11->flags & VAR_5)) return VAR_1;




     } else if(FUNC_10(VAR_18,"monitor\r\n",9) == 0) {

         VAR_11->flags |= VAR_3;
         FUNC_2(&VAR_6->replies,&VAR_12);
    } else {
        if (VAR_11->flags & VAR_5)


            FUNC_2(&VAR_6->sub.invalid,&VAR_12);
        else
            FUNC_2(&VAR_6->replies,&VAR_12);
    }

    FUNC_1(VAR_11,VAR_9,VAR_10);


    FUNC_0(VAR_6);

    return VAR_4;
}
