
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WPACKET ;
struct TYPE_7__ {int * pkey; } ;
struct TYPE_8__ {unsigned int group_id; TYPE_1__ tmp; } ;
struct TYPE_9__ {scalar_t__ hello_retry_request; TYPE_2__ s3; } ;
typedef TYPE_3__ SSL ;
typedef int EVP_PKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 size_t FUNC_1 (int *,unsigned char**) ;
 int FUNC_2 (unsigned char*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_4 (int *,unsigned int) ;
 int FUNC_5 (int *,unsigned char*,size_t) ;
 int FUNC_6 (int) ;
 int * FUNC_7 (TYPE_3__*,unsigned int) ;

__attribute__((used)) static int FUNC_8(SSL *VAR_5, WPACKET *VAR_6, unsigned int VAR_7)
{
    unsigned char *VAR_8 = ((void*)0);
    EVP_PKEY *VAR_9 = ((void*)0);
    size_t VAR_10;

    if (VAR_5->s3.tmp.pkey != ((void*)0)) {
        if (!FUNC_6(VAR_5->hello_retry_request == VAR_4)) {
            FUNC_3(VAR_5, VAR_2, VAR_3,
                     VAR_1);
            return 0;
        }



        VAR_9 = VAR_5->s3.tmp.pkey;
    } else {
        VAR_9 = FUNC_7(VAR_5, VAR_7);
        if (VAR_9 == ((void*)0)) {

            return 0;
        }
    }


    VAR_10 = FUNC_1(VAR_9,
                                                &VAR_8);
    if (VAR_10 == 0) {
        FUNC_3(VAR_5, VAR_2, VAR_3, VAR_0);
        goto err;
    }


    if (!FUNC_4(VAR_6, VAR_7)
            || !FUNC_5(VAR_6, VAR_8, VAR_10)) {
        FUNC_3(VAR_5, VAR_2, VAR_3,
                 VAR_1);
        goto err;
    }






    VAR_5->s3.tmp.pkey = VAR_9;
    VAR_5->s3.group_id = VAR_7;
    FUNC_2(VAR_8);

    return 1;
 err:
    if (VAR_5->s3.tmp.pkey == ((void*)0))
        FUNC_0(VAR_9);
    FUNC_2(VAR_8);
    return 0;
}
