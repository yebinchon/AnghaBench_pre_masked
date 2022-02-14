
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int version; int iv; int key; } ;
typedef TYPE_1__ SeafileCrypt ;
typedef int EVP_CIPHER_CTX ;


 int const VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,unsigned char*,int*) ;
 int FUNC_3 (int *,int ,int *,int ,int ) ;
 int FUNC_4 (int *,unsigned char*,int*,unsigned char*,int const) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int const) ;
 int FUNC_10 (char*) ;

int
FUNC_11 (char **VAR_2,
                 int *VAR_3,
                 const char *VAR_4,
                 const int VAR_5,
                 SeafileCrypt *VAR_6)
{
    *VAR_2 = ((void*)0);
    *VAR_3 = -1;



    if ( VAR_4 == ((void*)0) || VAR_5 <= 0 || VAR_5 % VAR_0 != 0 ||
         VAR_6 == ((void*)0)) {

        FUNC_10 ("Invalid param(s).\n");
        return -1;
    }

    EVP_CIPHER_CTX *VAR_7;
    int VAR_8;


    VAR_7 = FUNC_1 ();

    if (VAR_6->version == 2)
        VAR_8 = FUNC_3 (VAR_7,
                                  FUNC_7(),
                                  ((void*)0),
                                  VAR_6->key,
                                  VAR_6->iv);
    else if (VAR_6->version == 1)
        VAR_8 = FUNC_3 (VAR_7,
                                  FUNC_5(),
                                  ((void*)0),
                                  VAR_6->key,
                                  VAR_6->iv);
    else
        VAR_8 = FUNC_3 (VAR_7,
                                  FUNC_6(),
                                  ((void*)0),
                                  VAR_6->key,
                                  VAR_6->iv);

    if (VAR_8 == VAR_1) {
        FUNC_0 (VAR_7);
        return -1;
    }



    *VAR_2 = (char *)FUNC_9 (VAR_5);

    if (*VAR_2 == ((void*)0)) {
        FUNC_10 ("failed to allocate the output buffer.\n");
        goto dec_error;
    }

    int VAR_9, VAR_10;


    VAR_8 = FUNC_4 (VAR_7,
                             (unsigned char*)*VAR_2,
                             &VAR_9,
                             (unsigned char*)VAR_4,
                             VAR_5);

    if (VAR_8 == VAR_1)
        goto dec_error;



    VAR_8 = FUNC_2 (VAR_7,
                               (unsigned char*)*VAR_2 + VAR_9,
                               &VAR_10);

    *VAR_3 = VAR_9 + VAR_10;


    if (VAR_8 == VAR_1 || *VAR_3 > VAR_5)
        goto dec_error;

    FUNC_0 (VAR_7);

    return 0;

dec_error:

    FUNC_0 (VAR_7);

    *VAR_3 = -1;
    if (*VAR_2 != ((void*)0))
        FUNC_8 (*VAR_2);

    *VAR_2 = ((void*)0);

    return -1;

}
