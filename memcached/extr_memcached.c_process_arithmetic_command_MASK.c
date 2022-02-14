
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_14__ {size_t length; char* value; } ;
typedef TYPE_3__ token_t ;
struct TYPE_15__ {TYPE_2__* thread; } ;
typedef TYPE_4__ conn ;
struct TYPE_12__ {int mutex; int decr_misses; int incr_misses; } ;
struct TYPE_13__ {TYPE_1__ stats; } ;





 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;


 int FUNC_0 (TYPE_4__*,char*,size_t,int const,int ,char*,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,char*) ;
 int FUNC_3 (TYPE_4__*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int *) ;
 int FUNC_7 (TYPE_4__*,TYPE_3__*,size_t const) ;

__attribute__((used)) static void FUNC_8(conn *VAR_3, token_t *VAR_4, const size_t VAR_5, const bool VAR_6) {
    char VAR_7[VAR_0];
    uint64_t VAR_8;
    char *VAR_9;
    size_t VAR_10;

    FUNC_1(VAR_3 != ((void*)0));

    FUNC_7(VAR_3, VAR_4, VAR_5);

    if (VAR_4[VAR_2].length > VAR_1) {
        FUNC_3(VAR_3, "CLIENT_ERROR bad command line format");
        return;
    }

    VAR_9 = VAR_4[VAR_2].value;
    VAR_10 = VAR_4[VAR_2].length;

    if (!FUNC_6(VAR_4[2].value, &VAR_8)) {
        FUNC_3(VAR_3, "CLIENT_ERROR invalid numeric delta argument");
        return;
    }

    switch(FUNC_0(VAR_3, VAR_9, VAR_10, VAR_6, VAR_8, VAR_7, ((void*)0))) {
    case 128:
        FUNC_3(VAR_3, VAR_7);
        break;
    case 129:
        FUNC_3(VAR_3, "CLIENT_ERROR cannot increment or decrement non-numeric value");
        break;
    case 130:
        FUNC_2(VAR_3, "SERVER_ERROR out of memory");
        break;
    case 131:
        FUNC_4(&VAR_3->thread->stats.mutex);
        if (VAR_6) {
            VAR_3->thread->stats.incr_misses++;
        } else {
            VAR_3->thread->stats.decr_misses++;
        }
        FUNC_5(&VAR_3->thread->stats.mutex);

        FUNC_3(VAR_3, "NOT_FOUND");
        break;
    case 132:
        break;
    }
}
