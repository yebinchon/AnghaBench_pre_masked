
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_type {int cipher_length; scalar_t__ hmac_length; int digest; int cipher; } ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (struct key_type) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,...) ;
 scalar_t__ FUNC_11 (char const*,char*) ;
 int FUNC_12 (char const*) ;

void
FUNC_13(struct key_type *VAR_5, const char *VAR_6,
              const char *VAR_7, int VAR_8, bool VAR_9, bool VAR_10)
{
    bool VAR_11 = 0;

    FUNC_0(VAR_6);
    FUNC_0(VAR_7);

    FUNC_1(*VAR_5);
    if (FUNC_11(VAR_6, "none") != 0)
    {
        VAR_5->cipher = FUNC_3(FUNC_12(VAR_6));
        if (!VAR_5->cipher)
        {
            FUNC_10(VAR_1, "Cipher %s not supported", VAR_6);
        }

        VAR_5->cipher_length = FUNC_4(VAR_5->cipher);
        if (VAR_8 > 0 && VAR_8 <= VAR_0)
        {
            VAR_5->cipher_length = VAR_8;
        }


        VAR_11 = FUNC_5(VAR_5->cipher);
        if (!(FUNC_6(VAR_5->cipher)
              || (VAR_9 && VAR_11)



              ))
        {
            FUNC_10(VAR_1, "Cipher '%s' mode not supported", VAR_6);
        }

        if (VAR_3 < FUNC_2(VAR_5->cipher))
        {
            FUNC_10(VAR_1, "Cipher '%s' not allowed: block size too big.", VAR_6);
        }
    }
    else
    {
        if (VAR_10)
        {
            FUNC_10(VAR_2, "******* WARNING *******: '--cipher none' was specified. "
                "This means NO encryption will be performed and tunnelled "
                "data WILL be transmitted in clear text over the network! "
                "PLEASE DO RECONSIDER THIS SETTING!");
        }
    }
    if (FUNC_11(VAR_7, "none") != 0)
    {
        if (!VAR_11)
        {
            VAR_5->digest = FUNC_8(VAR_7);
            VAR_5->hmac_length = FUNC_9(VAR_5->digest);

            if (VAR_4 < VAR_5->hmac_length)
            {
                FUNC_10(VAR_1, "HMAC '%s' not allowed: digest size too big.", VAR_7);
            }
        }
    }
    else if (!VAR_11)
    {
        if (VAR_10)
        {
            FUNC_10(VAR_2, "******* WARNING *******: '--auth none' was specified. "
                "This means no authentication will be performed on received "
                "packets, meaning you CANNOT trust that the data received by "
                "the remote side have NOT been manipulated. "
                "PLEASE DO RECONSIDER THIS SETTING!");
        }
    }
}
