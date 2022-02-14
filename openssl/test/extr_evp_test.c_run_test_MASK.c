
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int errors; int start; int test_file; int numskip; int numtests; } ;
struct TYPE_9__ {TYPE_2__ s; TYPE_1__* meth; int * err; scalar_t__ skip; } ;
struct TYPE_7__ {int (* run_test ) (TYPE_3__*) ;int name; } ;
typedef TYPE_3__ EVP_TEST ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(EVP_TEST *VAR_0)
{
    if (VAR_0->meth == ((void*)0))
        return 1;
    VAR_0->s.numtests++;
    if (VAR_0->skip) {
        VAR_0->s.numskip++;
    } else {

        if (VAR_0->err == ((void*)0) && VAR_0->meth->run_test(VAR_0) != 1) {
            FUNC_0("%s:%d %s error",
                      VAR_0->s.test_file, VAR_0->s.start, VAR_0->meth->name);
            return 0;
        }
        if (!FUNC_2(VAR_0)) {
            FUNC_1();
            VAR_0->s.errors++;
        }
    }


    return 1;
}
