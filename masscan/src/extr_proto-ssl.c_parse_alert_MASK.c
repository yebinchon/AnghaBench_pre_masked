
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {unsigned int state; unsigned int remaining; } ;
struct TYPE_6__ {unsigned char level; unsigned char description; } ;
struct TYPE_7__ {TYPE_2__ server_alert; } ;
struct SSLRECORD {TYPE_4__ handshake; TYPE_3__ x; } ;
struct TYPE_5__ {struct SSLRECORD ssl; } ;
struct ProtocolState {TYPE_1__ sub; } ;
typedef void InteractiveData ;
struct BannerOutput {int dummy; } ;
struct Banner1 {int is_poodle_sslv3; } ;
typedef int foo ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,size_t,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct BannerOutput*,int ,char*,int ) ;
 int FUNC_3 (struct BannerOutput*,int ,char*) ;
 int FUNC_4 (char*,int,char*,int,unsigned char) ;

__attribute__((used)) static void
FUNC_5(
                const struct Banner1 *VAR_3,
                void *VAR_4,
                struct ProtocolState *VAR_5,
                const unsigned char *VAR_6, size_t VAR_7,
                struct BannerOutput *VAR_8,
                struct InteractiveData *VAR_9)
{
    struct SSLRECORD *VAR_10 = &VAR_5->sub.ssl;
    unsigned VAR_11 = VAR_10->handshake.state;
    unsigned VAR_12 = VAR_10->handshake.remaining;
    unsigned VAR_13;
    enum {
        START,
        DESCRIPTION,
        UNKNOWN,
    };

    FUNC_1(VAR_9);
    FUNC_1(VAR_4);





    for (VAR_13=0; VAR_13<VAR_7; VAR_13++)
        switch (VAR_11) {
            case START:
                VAR_10->x.server_alert.level = VAR_6[VAR_13];
                FUNC_0(VAR_13,VAR_7,VAR_11);

            case DESCRIPTION:
                VAR_10->x.server_alert.description = VAR_6[VAR_13];
                if (VAR_3->is_poodle_sslv3 && VAR_10->x.server_alert.level == 2) {
                    char VAR_14[64];


                    switch (VAR_10->x.server_alert.description) {
                        case 86:
                            if (!FUNC_3(VAR_8, VAR_1, "TLS_FALLBACK_SCSV"))
                                FUNC_2(VAR_8, VAR_1,
                                      "poodle[TLS_FALLBACK_SCSV] ", VAR_0);
                            break;
                        case 40:
                            if (!FUNC_3(VAR_8, VAR_1, "TLS_FALLBACK_SCSV"))
                                FUNC_2(VAR_8, VAR_1,
                                          "poodle[no-SSLv3] ", VAR_0);
                            break;
                        default:
                            FUNC_2(VAR_8, VAR_1,
                                          "poodle[no-SSLv3] ", VAR_0);
                            FUNC_4(VAR_14, sizeof(VAR_14), " ALERT(0x%02x%02x) ",
                                      VAR_10->x.server_alert.level,
                                      VAR_10->x.server_alert.description
                                      );

                            FUNC_2(VAR_8, VAR_2, VAR_14, VAR_0);
                            break;
                    }
                } else {
                    char VAR_15[64];
                    FUNC_4(VAR_15, sizeof(VAR_15), " ALERT(0x%02x%02x) ",
                              VAR_10->x.server_alert.level,
                              VAR_10->x.server_alert.description
                              );

                    FUNC_2(VAR_8, VAR_2, VAR_15, VAR_0);
                }
                FUNC_0(VAR_13,VAR_7,VAR_11);

            case UNKNOWN:
            default:
                VAR_13 = (unsigned)VAR_7;
        }


    VAR_10->handshake.state = VAR_11;
    VAR_10->handshake.remaining = VAR_12;
}
