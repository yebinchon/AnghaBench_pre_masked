
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int handshake_buffer; } ;
struct TYPE_8__ {scalar_t__ hand_state; } ;
struct TYPE_10__ {size_t cert_verify_hash_len; TYPE_2__ s3; int cert_verify_hash; TYPE_1__ statem; } ;
typedef TYPE_3__ SSL ;


 long FUNC_0 (int ,void**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ,int ,int ) ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (unsigned char*,int ,size_t) ;
 int FUNC_4 (unsigned char*,int,int) ;
 int FUNC_5 (TYPE_3__*,unsigned char*,int ,size_t*) ;
 int FUNC_6 (char*,char const*) ;

__attribute__((used)) static int FUNC_7(SSL *VAR_9, unsigned char *VAR_10,
                                    void **VAR_11, size_t *VAR_12)
{
    static const char VAR_13[] = "TLS 1.3, server CertificateVerify";
    static const char VAR_14[] = "TLS 1.3, client CertificateVerify";

    if (FUNC_1(VAR_9)) {
        size_t VAR_15;


        FUNC_4(VAR_10, 32, VAR_5);

        if (VAR_9->statem.hand_state == VAR_6
                 || VAR_9->statem.hand_state == VAR_8)
            FUNC_6((char *)VAR_10 + VAR_5, VAR_13);
        else
            FUNC_6((char *)VAR_10 + VAR_5, VAR_14);






        if (VAR_9->statem.hand_state == VAR_6
                || VAR_9->statem.hand_state == VAR_7) {
            FUNC_3(VAR_10 + VAR_4, VAR_9->cert_verify_hash,
                   VAR_9->cert_verify_hash_len);
            VAR_15 = VAR_9->cert_verify_hash_len;
        } else if (!FUNC_5(VAR_9, VAR_10 + VAR_4,
                                       VAR_1, &VAR_15)) {

            return 0;
        }

        *VAR_11 = VAR_10;
        *VAR_12 = VAR_4 + VAR_15;
    } else {
        size_t VAR_16;
        long VAR_17;

        VAR_16 = VAR_17 = FUNC_0(VAR_9->s3.handshake_buffer, VAR_11);
        if (VAR_17 <= 0) {
            FUNC_2(VAR_9, VAR_2, VAR_3,
                     VAR_0);
            return 0;
        }
        *VAR_12 = VAR_16;
    }

    return 1;
}
