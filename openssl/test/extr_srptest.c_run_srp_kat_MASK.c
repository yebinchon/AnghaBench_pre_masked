
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int N; int g; } ;
typedef TYPE_1__ SRP_gN ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,char*) ;
 int * FUNC_3 (int *,int ,int ) ;
 int * FUNC_4 (int *,int ,int ,int *) ;
 int * FUNC_5 (int ,int *,int ,int *,int *,int *) ;
 int * FUNC_6 (int *,int *,int *,int *,int ) ;
 int * FUNC_7 (int *,int *,int ) ;
 int * FUNC_8 (int *,char*,char*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (char*,char*,int **,int **,int ,int ) ;
 TYPE_1__* FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (TYPE_1__ const*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char*,int *,char*) ;

__attribute__((used)) static int FUNC_18(void)
{
    int VAR_0 = 0;
    BIGNUM *VAR_1 = ((void*)0);
    BIGNUM *VAR_2 = ((void*)0);
    BIGNUM *VAR_3 = ((void*)0);
    BIGNUM *VAR_4 = ((void*)0);
    BIGNUM *VAR_5 = ((void*)0);
    BIGNUM *VAR_6 = ((void*)0);
    BIGNUM *VAR_7 = ((void*)0);
    BIGNUM *VAR_8 = ((void*)0);
    BIGNUM *VAR_9 = ((void*)0);
    BIGNUM *VAR_10 = ((void*)0);

    const SRP_gN *VAR_11;

    if (!FUNC_15(VAR_11 = FUNC_12("1024")))
        goto err;
    FUNC_2(&VAR_1, "BEB25379D1A8581EB5A727673A2441EE");

    if (!FUNC_16(FUNC_11("alice", "password123", &VAR_1, &VAR_2, VAR_11->N,
                                          VAR_11->g)))
        goto err;

    FUNC_13("checking v");
    if (!FUNC_16(FUNC_17("v", VAR_2,
                 "7E273DE8696FFC4F4E337D05B4B375BEB0DDE1569E8FA00A9886D812"
                 "9BADA1F1822223CA1A605B530E379BA4729FDC59F105B4787E5186F5"
                 "C671085A1447B52A48CF1970B4FB6F8400BBF4CEBFBB168152E08AB5"
                 "EA53D15C1AFF87B2B9DA6E04E058AD51CC72BFC9033B564E26480D78"
                 "E955A5E29E7AB245DB2BE315E2099AFB")))
        goto err;
    FUNC_14("    okay");


    FUNC_2(&VAR_4, "E487CB59D31AC550471E81F00F6928E01DDA08E974A004F49E61F5D1"
                  "05284D20");


    VAR_8 = FUNC_4(VAR_4, VAR_11->N, VAR_11->g, VAR_2);
    if (!FUNC_16(FUNC_10(VAR_8, VAR_11->N)))
        goto err;

    FUNC_13("checking B");
    if (!FUNC_16(FUNC_17("B", VAR_8,
                  "BD0C61512C692C0CB6D041FA01BB152D4916A1E77AF46AE105393011"
                  "BAF38964DC46A0670DD125B95A981652236F99D9B681CBF87837EC99"
                  "6C6DA04453728610D0C6DDB58B318885D7D82C7F8DEB75CE7BD4FBAA"
                  "37089E6F9C6059F388838E7A00030B331EB76840910440B1B27AAEAE"
                  "EB4012B7D7665238A8E3FB004B117B58")))
        goto err;
    FUNC_14("    okay");


    FUNC_2(&VAR_3, "60975527035CF2AD1989806F0407210BC81EDC04E2762A56AFD529DD"
                  "DA2D4393");


    VAR_7 = FUNC_3(VAR_3, VAR_11->N, VAR_11->g);
    if (!FUNC_16(FUNC_9(VAR_7, VAR_11->N)))
        goto err;

    FUNC_13("checking A");
    if (!FUNC_16(FUNC_17("A", VAR_7,
                  "61D5E490F6F1B79547B0704C436F523DD0E560F0C64115BB72557EC4"
                  "4352E8903211C04692272D8B2D1A5358A2CF1B6E0BFCF99F921530EC"
                  "8E39356179EAE45E42BA92AEACED825171E1E8B9AF6D9C03E1327F44"
                  "BE087EF06530E69F66615261EEF54073CA11CF5858F0EDFDFE15EFEA"
                  "B349EF5D76988A3672FAC47B0769447B")))
        goto err;
    FUNC_14("    okay");


    VAR_5 = FUNC_7(VAR_7, VAR_8, VAR_11->N);

    if (!FUNC_16(FUNC_17("u", VAR_5,
                    "CE38B9593487DA98554ED47D70A7AE5F462EF019")))
        goto err;


    VAR_6 = FUNC_8(VAR_1, "alice", "password123");
    VAR_9 = FUNC_5(VAR_11->N, VAR_8, VAR_11->g, VAR_6, VAR_3, VAR_5);
    FUNC_13("checking client's key");
    if (!FUNC_16(FUNC_17("Client's key", VAR_9,
                  "B0DC82BABCF30674AE450C0287745E7990A3381F63B387AAF271A10D"
                  "233861E359B48220F7C4693C9AE12B0A6F67809F0876E2D013800D6C"
                  "41BB59B6D5979B5C00A172B4A2A5903A0BDCAF8A709585EB2AFAFA8F"
                  "3499B200210DCC1F10EB33943CD67FC88A2F39A4BE5BEC4EC0A3212D"
                  "C346D7E474B29EDE8A469FFECA686E5A")))
        goto err;
    FUNC_14("    okay");


    VAR_10 = FUNC_6(VAR_7, VAR_2, VAR_5, VAR_4, VAR_11->N);
    FUNC_13("checking server's key");
    if (!FUNC_16(FUNC_17("Server's key", VAR_10,
                  "B0DC82BABCF30674AE450C0287745E7990A3381F63B387AAF271A10D"
                  "233861E359B48220F7C4693C9AE12B0A6F67809F0876E2D013800D6C"
                  "41BB59B6D5979B5C00A172B4A2A5903A0BDCAF8A709585EB2AFAFA8F"
                  "3499B200210DCC1F10EB33943CD67FC88A2F39A4BE5BEC4EC0A3212D"
                  "C346D7E474B29EDE8A469FFECA686E5A")))
        goto err;
    FUNC_14("    okay");

    VAR_0 = 1;

err:
    FUNC_0(VAR_9);
    FUNC_0(VAR_10);
    FUNC_0(VAR_6);
    FUNC_1(VAR_5);
    FUNC_1(VAR_7);
    FUNC_0(VAR_3);
    FUNC_1(VAR_8);
    FUNC_0(VAR_4);
    FUNC_1(VAR_1);
    FUNC_0(VAR_2);

    return VAR_0;
}
