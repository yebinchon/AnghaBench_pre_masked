
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int suffixsize; char** suffixlist; TYPE_1__* thread; } ;
typedef TYPE_2__ conn ;
struct TYPE_8__ {int malloc_fails; } ;
struct TYPE_6__ {int suffix_cache; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 char** FUNC_4 (char**,int) ;
 TYPE_3__ VAR_0 ;

__attribute__((used)) static inline char *FUNC_5(conn *VAR_1, int VAR_2) {
    char *VAR_3;

    if (VAR_2 >= VAR_1->suffixsize) {
    char **VAR_4 = FUNC_4(VAR_1->suffixlist,
                           sizeof(char *) * VAR_1->suffixsize * 2);
    if (VAR_4) {
        VAR_1->suffixsize *= 2;
        VAR_1->suffixlist = VAR_4;
    } else {
        FUNC_0();
        VAR_0.malloc_fails++;
        FUNC_1();
        return ((void*)0);
    }
    }

    VAR_3 = FUNC_2(VAR_1->thread->suffix_cache);
    if (VAR_3 == ((void*)0)) {
      FUNC_0();
      VAR_0.malloc_fails++;
      FUNC_1();
      FUNC_3(VAR_1, "SERVER_ERROR out of memory making CAS suffix");
      return ((void*)0);
    }
    *(VAR_1->suffixlist + VAR_2) = VAR_3;
    return VAR_3;
}
