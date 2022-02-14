
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*,unsigned int,char*,int ) ;
 unsigned int VAR_0 ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (int ,long*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (unsigned char*,unsigned char*,long) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static unsigned int FUNC_5(SSL *VAR_6, const char *VAR_7, char *VAR_8,
                                  unsigned int VAR_9,
                                  unsigned char *VAR_10,
                                  unsigned int VAR_11)
{
    int VAR_12;
    long VAR_13;
    unsigned char *VAR_14;

    if (VAR_3)
        FUNC_0(VAR_1, "psk_client_cb\n");
    if (!VAR_7) {

        if (VAR_3)
            FUNC_0(VAR_1,
                       "NULL received PSK identity hint, continuing anyway\n");
    } else if (VAR_3) {
        FUNC_0(VAR_1, "Received PSK identity hint '%s'\n", VAR_7);
    }




    VAR_12 = FUNC_1(VAR_8, VAR_9, "%s", VAR_4);
    if (VAR_12 < 0 || (unsigned int)VAR_12 > VAR_9)
        goto out_err;
    if (VAR_3)
        FUNC_0(VAR_1, "created identity '%s' len=%d\n", VAR_8,
                   VAR_12);


    VAR_14 = FUNC_3(VAR_5, &VAR_13);
    if (VAR_14 == ((void*)0)) {
        FUNC_0(VAR_2, "Could not convert PSK key '%s' to buffer\n",
                   VAR_5);
        return 0;
    }
    if (VAR_11 > VAR_0 || VAR_13 > (long)VAR_11) {
        FUNC_0(VAR_2,
                   "psk buffer of callback is too small (%d) for key (%ld)\n",
                   VAR_11, VAR_13);
        FUNC_2(VAR_14);
        return 0;
    }

    FUNC_4(VAR_10, VAR_14, VAR_13);
    FUNC_2(VAR_14);

    if (VAR_3)
        FUNC_0(VAR_1, "created PSK len=%ld\n", VAR_13);

    return VAR_13;
 out_err:
    if (VAR_3)
        FUNC_0(VAR_2, "Error in PSK client callback\n");
    return 0;
}
