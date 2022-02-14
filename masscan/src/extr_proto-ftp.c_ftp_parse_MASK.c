
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct FTPSTUFF {int code; int is_last; } ;
struct TYPE_3__ {struct FTPSTUFF ftp; } ;
struct ProtocolState {unsigned int state; unsigned int port; int is_sent_sslhello; int app_proto; TYPE_1__ sub; } ;
struct InteractiveData {int dummy; } ;
struct BannerOutput {int dummy; } ;
typedef void Banner1 ;
struct TYPE_4__ {char* hello; int hello_length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void const*) ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (struct BannerOutput*,int ,unsigned char const) ;
 int FUNC_2 (unsigned char const) ;
 int FUNC_3 (unsigned char const) ;
 int FUNC_4 (struct ProtocolState*,int ,int) ;
 int FUNC_5 (struct InteractiveData*) ;
 int FUNC_6 (struct InteractiveData*,char*,int,int ) ;

__attribute__((used)) static void
FUNC_7( const struct Banner1 *VAR_3,
          void *VAR_4,
          struct ProtocolState *VAR_5,
          const unsigned char *VAR_6, size_t VAR_7,
          struct BannerOutput *VAR_8,
          struct InteractiveData *VAR_9)
{
    unsigned VAR_10 = VAR_5->state;
    unsigned VAR_11;
    struct FTPSTUFF *VAR_12 = &VAR_5->sub.ftp;

    FUNC_0(VAR_4);
    FUNC_0(VAR_3);


    for (VAR_11=0; VAR_11<VAR_7; VAR_11++) {

        switch (VAR_10) {
            case 0:
            case 100:
                VAR_12->code = 0;
                VAR_10++;

            case 1:
            case 2:
            case 3:
            case 101:
            case 102:
            case 103:
                if (!FUNC_2(VAR_6[VAR_11]&0xFF)) {
                    VAR_10 = 0xffffffff;
                    FUNC_5(VAR_9);
                } else {
                    VAR_12->code *= 10;
                    VAR_12->code += (VAR_6[VAR_11] - '0');
                    VAR_10++;
                    FUNC_1(VAR_8, VAR_0, VAR_6[VAR_11]);
                }
                break;
            case 4:
            case 104:
                if (VAR_6[VAR_11] == ' ') {
                    VAR_12->is_last = 1;
                    VAR_10++;
                    FUNC_1(VAR_8, VAR_0, VAR_6[VAR_11]);
                } else if (VAR_6[VAR_11] == '-') {
                    VAR_12->is_last = 0;
                    VAR_10++;
                    FUNC_1(VAR_8, VAR_0, VAR_6[VAR_11]);
                } else {
                    VAR_10 = 0xffffffff;
                    FUNC_5(VAR_9);
                }
                break;
            case 5:
                if (VAR_6[VAR_11] == '\r')
                    continue;
                else if (VAR_6[VAR_11] == '\n') {
                    if (VAR_12->is_last) {
                        FUNC_6(VAR_9, "AUTH TLS\r\n", 10, 0);
                        VAR_10 = 100;
                        FUNC_1(VAR_8, VAR_0, VAR_6[VAR_11]);
                    } else {
                        FUNC_1(VAR_8, VAR_0, VAR_6[VAR_11]);
                        VAR_10 = 0;
                    }
                } else if (VAR_6[VAR_11] == '\0' || !FUNC_3(VAR_6[VAR_11])) {
                    VAR_10 = 0xffffffff;
                    FUNC_5(VAR_9);
                    continue;
                } else {
                    FUNC_1(VAR_8, VAR_0, VAR_6[VAR_11]);
                }
                break;
            case 105:
                if (VAR_6[VAR_11] == '\r')
                    continue;
                else if (VAR_6[VAR_11] == '\n') {

                    if (VAR_12->code == 234) {


                        unsigned VAR_13 = VAR_5->port;
                        FUNC_4(VAR_5, 0, sizeof(*VAR_5));
                        VAR_5->app_proto = VAR_1;
                        VAR_5->is_sent_sslhello = 1;
                        VAR_5->port = (unsigned short)VAR_13;
                        VAR_10 = 0;

                        FUNC_6(VAR_9, VAR_2.hello, VAR_2.hello_length, 0);

                    } else {
                        VAR_10 = 0xffffffff;
                        FUNC_5(VAR_9);
                    }
                } else if (VAR_6[VAR_11] == '\0' || !FUNC_3(VAR_6[VAR_11])) {
                    VAR_10 = 0xffffffff;
                    FUNC_5(VAR_9);
                    continue;
                } else {
                    FUNC_1(VAR_8, VAR_0, VAR_6[VAR_11]);
                }
                break;
            default:
                VAR_11 = (unsigned)VAR_7;
                break;
        }
    }
    VAR_5->state = VAR_10;
}
