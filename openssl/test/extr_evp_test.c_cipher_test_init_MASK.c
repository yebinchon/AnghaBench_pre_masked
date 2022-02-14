
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int enc; int aead; int * fetched_cipher; int const* cipher; } ;
struct TYPE_5__ {int skip; TYPE_2__* data; } ;
typedef TYPE_1__ EVP_TEST ;
typedef int EVP_CIPHER ;
typedef TYPE_2__ CIPHER_DATA ;


 int * FUNC_0 (int *,char const*,int *) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_3 (char const*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*) ;
 TYPE_2__* FUNC_6 (int) ;
 int FUNC_7 (char*,char const*) ;

__attribute__((used)) static int FUNC_8(EVP_TEST *VAR_6, const char *VAR_7)
{
    const EVP_CIPHER *VAR_8;
    EVP_CIPHER *VAR_9;
    CIPHER_DATA *VAR_10;
    int VAR_11;

    if ((VAR_8 = VAR_9 = FUNC_0(((void*)0), VAR_7, ((void*)0))) == ((void*)0)
        && (VAR_8 = FUNC_3(VAR_7)) == ((void*)0)) {

        if (FUNC_5(VAR_7) != VAR_5 || FUNC_4(VAR_7) != VAR_5) {
            VAR_6->skip = 1;
            return 1;
        }
        return 0;
    }
    VAR_10 = FUNC_6(sizeof(*VAR_10));
    VAR_10->cipher = VAR_8;
    VAR_10->fetched_cipher = VAR_9;
    VAR_10->enc = -1;
    VAR_11 = FUNC_2(VAR_8);
    if (VAR_11 == VAR_2
            || VAR_11 == VAR_3
            || VAR_11 == VAR_4
            || VAR_11 == VAR_0)
        VAR_10->aead = VAR_11;
    else if (FUNC_1(VAR_8) & VAR_1)
        VAR_10->aead = -1;
    else
        VAR_10->aead = 0;

    VAR_6->data = VAR_10;
    if (VAR_9 != ((void*)0))
        FUNC_7("%s is fetched", VAR_7);
    return 1;
}
