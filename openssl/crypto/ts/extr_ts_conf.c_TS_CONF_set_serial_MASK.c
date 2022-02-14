
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TS_serial_cb ;
typedef int TS_RESP_CTX ;
typedef int CONF ;


 int VAR_0 ;
 char* FUNC_0 (int *,char const*,int ) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (char const*,int ) ;

int FUNC_3(CONF *VAR_1, const char *VAR_2, TS_serial_cb VAR_3,
                       TS_RESP_CTX *VAR_4)
{
    int VAR_5 = 0;
    char *VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_0);
    if (!VAR_6) {
        FUNC_2(VAR_2, VAR_0);
        goto err;
    }
    FUNC_1(VAR_4, VAR_3, VAR_6);

    VAR_5 = 1;
 err:
    return VAR_5;
}
