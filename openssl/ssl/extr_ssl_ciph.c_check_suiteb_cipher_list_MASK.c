
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int cert_flags; } ;
struct TYPE_7__ {TYPE_1__* ssl3_enc; } ;
struct TYPE_6__ {int enc_flags; } ;
typedef TYPE_2__ SSL_METHOD ;
typedef TYPE_3__ CERT ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_2(const SSL_METHOD *VAR_4, CERT *VAR_5,
                                    const char **VAR_6)
{
    unsigned int VAR_7 = 0, VAR_8 = 0;
    if (FUNC_1(*VAR_6, "SUITEB128ONLY", 13) == 0) {
        VAR_7 = 129;
    } else if (FUNC_1(*VAR_6, "SUITEB128C2", 11) == 0) {
        VAR_8 = 1;
        VAR_7 = 130;
    } else if (FUNC_1(*VAR_6, "SUITEB128", 9) == 0) {
        VAR_7 = 130;
    } else if (FUNC_1(*VAR_6, "SUITEB192", 9) == 0) {
        VAR_7 = 128;
    }

    if (VAR_7) {
        VAR_5->cert_flags &= ~130;
        VAR_5->cert_flags |= VAR_7;
    } else {
        VAR_7 = VAR_5->cert_flags & 130;
    }

    if (!VAR_7)
        return 1;


    if (!(VAR_4->ssl3_enc->enc_flags & VAR_0)) {
        FUNC_0(VAR_1,
               VAR_2);
        return 0;
    }

    switch (VAR_7) {
    case 130:
        if (VAR_8)
            *VAR_6 = "ECDHE-ECDSA-AES256-GCM-SHA384";
        else
            *VAR_6 =
                "ECDHE-ECDSA-AES128-GCM-SHA256:ECDHE-ECDSA-AES256-GCM-SHA384";
        break;
    case 129:
        *VAR_6 = "ECDHE-ECDSA-AES128-GCM-SHA256";
        break;
    case 128:
        *VAR_6 = "ECDHE-ECDSA-AES256-GCM-SHA384";
        break;
    }
    return 1;




}
