
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EC_GROUP ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (char*,char*,char*,char*,char*,char*,char*) ;
 int FUNC_4 (int *,char*,char*,char*,char*,char*,char*) ;

__attribute__((used)) static int FUNC_5(void)
{
    int VAR_0 = 0;

    EC_GROUP *VAR_1 =
        FUNC_3
        ("8542D69E4C044F18E8B92435BF6FF7DE457283915C45517D722EDB8B08F1DFC3",
         "787968B4FA32C3FD2417842E73BBFEFF2F3C848B6831D7E0EC65228B3937E498",
         "63E4C6D3B23B0C849CF84241484BFE48F61D59A5B16BA06E6E12D1DA27C5249A",
         "421DEBD61B62EAB6746434EBC3CC315E32220B3BADD50BDC4C4E6C147FEDD43D",
         "0680512BCBB42C07D47349D2153B70C4E5D7FDFCBFA36EA1A85841B9E46E09A2",
         "8542D69E4C044F18E8B92435BF6FF7DD297720630485628D5AE74EE7C32E79B7",
         "1");

    if (!FUNC_1(VAR_1))
        goto done;

    if (!FUNC_2(FUNC_4(
                        VAR_1,
                        "ALICE123@YAHOO.COM",
                        "128B2FA8BD433C6C068C8D803DFF79792A519A55171B1B650C23661D15897263",
                        "message digest",
                        "006CB28D99385C175C94F94E934817663FC176D925DD72B727260DBAAE1FB2F96F"
                        "007c47811054c6f99613a578eb8453706ccb96384fe7df5c171671e760bfa8be3a",
                        "40F1EC59F793D9F49E09DCEF49130D4194F79FB1EED2CAA55BACDB49C4E755D1",
                        "6FC6DAC32C5D5CF10C77DFB20F7C2EB667A457872FB09EC56327A67EC7DEEBE7")))
        goto done;

    VAR_0 = 1;

 done:
    FUNC_0(VAR_1);

    return VAR_0;
}
