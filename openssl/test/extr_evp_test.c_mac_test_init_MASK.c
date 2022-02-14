
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int epilogue ;
struct TYPE_6__ {int skip; TYPE_1__* data; } ;
struct TYPE_5__ {int type; int controls; int * mac; int mac_name; } ;
typedef TYPE_1__ MAC_DATA ;
typedef TYPE_2__ EVP_TEST ;
typedef int EVP_MAC ;


 int * FUNC_0 (int *,char const*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (char const*,char const*) ;
 size_t FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char const*,char*,size_t) ;

__attribute__((used)) static int FUNC_9(EVP_TEST *VAR_5, const char *VAR_6)
{
    EVP_MAC *VAR_7 = ((void*)0);
    int VAR_8 = VAR_4;
    MAC_DATA *VAR_9;

    if ((VAR_7 = FUNC_0(((void*)0), VAR_6, ((void*)0))) == ((void*)0)) {





        size_t VAR_10 = FUNC_7(VAR_6);
        static const char VAR_11[] = " by EVP_PKEY";

        if (VAR_10 >= sizeof(VAR_11)
            && FUNC_6(VAR_6 + VAR_10 - (sizeof(VAR_11) - 1), VAR_11) == 0)
            VAR_10 -= sizeof(VAR_11) - 1;

        if (FUNC_8(VAR_6, "HMAC", VAR_10) == 0) {
            VAR_8 = VAR_1;
        } else if (FUNC_8(VAR_6, "CMAC", VAR_10) == 0) {

            VAR_8 = VAR_0;




        } else if (FUNC_8(VAR_6, "Poly1305", VAR_10) == 0) {

            VAR_8 = VAR_2;




        } else if (FUNC_8(VAR_6, "SipHash", VAR_10) == 0) {

            VAR_8 = VAR_3;




        } else {




            if (FUNC_2(VAR_6) != VAR_4 || FUNC_1(VAR_6) != VAR_4) {
                VAR_5->skip = 1;
                return 1;
            }

            return 0;
        }
    }

    VAR_9 = FUNC_4(sizeof(*VAR_9));
    VAR_9->type = VAR_8;
    VAR_9->mac_name = FUNC_3(VAR_6);
    VAR_9->mac = VAR_7;
    VAR_9->controls = FUNC_5();
    VAR_5->data = VAR_9;
    return 1;
}
