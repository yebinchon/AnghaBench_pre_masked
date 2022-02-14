
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int is_verify; int is_oneshot; struct TYPE_9__* ctx; int const* md; } ;
struct TYPE_8__ {int skip; TYPE_2__* data; } ;
typedef TYPE_1__ EVP_TEST ;
typedef int EVP_MD ;
typedef TYPE_2__ DIGESTSIGN_DATA ;


 TYPE_2__* FUNC_0 () ;
 int * FUNC_1 (char const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (char const*,char*) ;

__attribute__((used)) static int FUNC_8(EVP_TEST *VAR_1, const char *VAR_2, int VAR_3,
                                  int VAR_4)
{
    const EVP_MD *VAR_5 = ((void*)0);
    DIGESTSIGN_DATA *VAR_6;

    if (FUNC_7(VAR_2, "NULL") != 0) {
        if ((VAR_5 = FUNC_1(VAR_2)) == ((void*)0)) {

            if (FUNC_3(VAR_2) != VAR_0 || FUNC_2(VAR_2) != VAR_0) {
                VAR_1->skip = 1;
                return 1;
            }
            return 0;
        }
    }
    if (!FUNC_6(VAR_6 = FUNC_5(sizeof(*VAR_6))))
        return 0;
    VAR_6->md = VAR_5;
    if (!FUNC_6(VAR_6->ctx = FUNC_0())) {
        FUNC_4(VAR_6);
        return 0;
    }
    VAR_6->is_verify = VAR_3;
    VAR_6->is_oneshot = VAR_4;
    VAR_1->data = VAR_6;
    return 1;
}
