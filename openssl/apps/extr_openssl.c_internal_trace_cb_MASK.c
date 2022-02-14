
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ingroup; int bio; } ;
typedef TYPE_1__ tracedata ;
typedef int tid ;
typedef int buffer ;
typedef int CRYPTO_THREAD_ID ;


 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (char*,int,char*,char*,int ) ;
 int FUNC_2 (int ,char const*,size_t) ;
 int FUNC_3 () ;
 char* FUNC_4 (unsigned char const*,int) ;
 int FUNC_5 (char*) ;



 int FUNC_6 (int) ;
 int VAR_0 ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static size_t FUNC_9(const char *VAR_1, size_t VAR_2,
                                int VAR_3, int VAR_4, void *VAR_5)
{
    int VAR_6 = 0;
    tracedata *VAR_7 = VAR_5;
    char VAR_8[256], *VAR_9;
    CRYPTO_THREAD_ID VAR_10;

    switch (VAR_4) {
    case 130:
        if (!FUNC_7(!VAR_7->ingroup))
            return 0;
        VAR_7->ingroup = 1;

        VAR_10 = FUNC_3();
        VAR_9 = FUNC_4((const unsigned char *)&VAR_10, sizeof(VAR_10));
        FUNC_1(VAR_8, sizeof(VAR_8), "TRACE[%s]:%s: ",
                     VAR_9, FUNC_6(VAR_3));
        FUNC_5(VAR_9);
        FUNC_0(VAR_7->bio, VAR_0,
                 FUNC_8(VAR_8), VAR_8);
        break;
    case 128:
        if (!FUNC_7(VAR_7->ingroup))
            return 0;

        VAR_6 = FUNC_2(VAR_7->bio, VAR_1, VAR_2);
        break;
    case 129:
        if (!FUNC_7(VAR_7->ingroup))
            return 0;
        VAR_7->ingroup = 0;

        FUNC_0(VAR_7->bio, VAR_0, 0, ((void*)0));

        break;
    }

    return VAR_6 < 0 ? 0 : VAR_6;
}
