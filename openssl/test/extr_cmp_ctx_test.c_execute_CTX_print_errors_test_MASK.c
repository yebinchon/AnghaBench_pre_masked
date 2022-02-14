
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * log_cb; } ;
struct TYPE_6__ {TYPE_2__* ctx; } ;
typedef TYPE_1__ OSSL_CMP_CTX_TEST_FIXTURE ;
typedef TYPE_2__ OSSL_CMP_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 char* VAR_3 ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int) ;
 char* VAR_4 ;
 scalar_t__ VAR_5 ;
 int * VAR_6 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(OSSL_CMP_CTX_TEST_FIXTURE *VAR_7)
{
    OSSL_CMP_CTX *VAR_8 = VAR_7->ctx;
    int VAR_9, VAR_10;
    int VAR_11 = 1;

    if (!FUNC_4(FUNC_2(VAR_8, ((void*)0))))
        VAR_11 = 0;
    if (!FUNC_4(VAR_8->log_cb == ((void*)0)))
        VAR_11 = 0;


    FUNC_0(0, VAR_1);
    FUNC_1(VAR_8);



    if (!FUNC_4(FUNC_2(VAR_8, VAR_6)))
        VAR_11 = 0;
    if (!FUNC_4(VAR_8->log_cb == VAR_6)) {
        VAR_11 = 0;
    } else {
        FUNC_0(0, VAR_0);
        VAR_9 = FUNC_8("INVALID_ARGS");
        FUNC_0(0, VAR_2);
        VAR_9 += FUNC_8("NULL_ARGUMENT");
        VAR_10 = VAR_9;
        FUNC_5("data1");
        VAR_10 += FUNC_8(" : " "data1");
        FUNC_5("data2");
        VAR_10 += FUNC_8(" : " "data2");
        FUNC_6("new line");
        VAR_10 += FUNC_8("\n" "new line");
        FUNC_1(VAR_8);
        if (!FUNC_3(VAR_5, VAR_10))
            VAR_11 = 0;

        FUNC_0(0, VAR_0);
        VAR_9 = FUNC_8("INVALID_ARGS") + FUNC_8(" : ");
        VAR_10 = VAR_9;
        while (VAR_10 < 4096) {
            FUNC_7(VAR_3, VAR_4);
            VAR_10 += FUNC_8(VAR_3) + FUNC_8(VAR_4);
        }
        VAR_10 += VAR_9 - 2 * FUNC_8(VAR_3);
        VAR_5 = 0;
        FUNC_1(VAR_8);
        if (!FUNC_3(VAR_5, VAR_10))
            VAR_11 = 0;
    }

    return VAR_11;
}
