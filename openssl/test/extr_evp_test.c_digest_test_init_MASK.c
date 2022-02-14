
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * fetched_digest; int const* digest; } ;
struct TYPE_6__ {int skip; TYPE_2__* data; } ;
typedef TYPE_1__ EVP_TEST ;
typedef int EVP_MD ;
typedef TYPE_2__ DIGEST_DATA ;


 int * FUNC_0 (int *,char const*,int *) ;
 int * FUNC_1 (char const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 TYPE_2__* FUNC_4 (int) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(EVP_TEST *VAR_1, const char *VAR_2)
{
    DIGEST_DATA *VAR_3;
    const EVP_MD *VAR_4;
    EVP_MD *VAR_5;

    if ((VAR_4 = VAR_5 = FUNC_0(((void*)0), VAR_2, ((void*)0))) == ((void*)0)
        && (VAR_4 = FUNC_1(VAR_2)) == ((void*)0)) {

        if (FUNC_3(VAR_2) != VAR_0 || FUNC_2(VAR_2) != VAR_0) {
            VAR_1->skip = 1;
            return 1;
        }
        return 0;
    }
    if (!FUNC_6(VAR_3 = FUNC_4(sizeof(*VAR_3))))
        return 0;
    VAR_1->data = VAR_3;
    VAR_3->digest = VAR_4;
    VAR_3->fetched_digest = VAR_5;
    if (VAR_5 != ((void*)0))
        FUNC_5("%s is fetched", VAR_2);
    return 1;
}
