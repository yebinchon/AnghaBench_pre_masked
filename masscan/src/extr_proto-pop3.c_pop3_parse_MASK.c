
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ProtocolState {unsigned int state; unsigned int port; int is_sent_sslhello; int app_proto; } ;
struct InteractiveData {int dummy; } ;
struct BannerOutput {int dummy; } ;
typedef void Banner1 ;
struct TYPE_2__ {char* hello; int hello_length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void const*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (struct BannerOutput*,int ,unsigned char const) ;
 int FUNC_2 (struct ProtocolState*,int ,int) ;
 int FUNC_3 (struct InteractiveData*) ;
 int FUNC_4 (struct InteractiveData*,char*,int,int ) ;

__attribute__((used)) static void
FUNC_5( const struct Banner1 *VAR_3,
           void *VAR_4,
           struct ProtocolState *VAR_5,
           const unsigned char *VAR_6, size_t VAR_7,
           struct BannerOutput *VAR_8,
           struct InteractiveData *VAR_9)
{
    unsigned VAR_10 = VAR_5->state;
    unsigned VAR_11;

    FUNC_0(VAR_4);
    FUNC_0(VAR_3);


    for (VAR_11=0; VAR_11<VAR_7; VAR_11++) {
        if (VAR_6[VAR_11] == '\r')
            continue;


        switch (VAR_10) {
            case 0: case 1: case 2:
                FUNC_1(VAR_8, VAR_0, VAR_6[VAR_11]);
                if ("+OK"[VAR_10] != VAR_6[VAR_11]) {
                    VAR_10 = 0xffffffff;
                    FUNC_3(VAR_9);
                } else
                    VAR_10++;
                break;
            case 3:
                FUNC_1(VAR_8, VAR_0, VAR_6[VAR_11]);
                if (VAR_6[VAR_11] == '\n') {
                    FUNC_4(VAR_9, "CAPA\r\n", 6, 0);
                    VAR_10++;
                }
                break;
            case 4:
            case 204:
                FUNC_1(VAR_8, VAR_0, VAR_6[VAR_11]);
                if (VAR_6[VAR_11] == '-')
                    VAR_10 = 100;
                else if (VAR_6[VAR_11] == '+')
                    VAR_10++;
                else {
                    VAR_10 = 0xffffffff;
                    FUNC_3(VAR_9);
                }
                break;
            case 5:
            case 205:
                FUNC_1(VAR_8, VAR_0, VAR_6[VAR_11]);
                if (VAR_6[VAR_11] == 'O')
                    VAR_10++;
                else {
                    VAR_10 = 0xffffffff;
                    FUNC_3(VAR_9);
                }
                break;
            case 6:
            case 206:
                FUNC_1(VAR_8, VAR_0, VAR_6[VAR_11]);
                if (VAR_6[VAR_11] == 'K')
                    VAR_10 += 2;
                else {
                    VAR_10 = 0xffffffff;
                    FUNC_3(VAR_9);
                }
                break;
            case 8:
                if (VAR_6[VAR_11] == '\r')
                    continue;
                FUNC_1(VAR_8, VAR_0, VAR_6[VAR_11]);
                if (VAR_6[VAR_11] == '\n')
                    VAR_10++;
                break;
            case 9:
                if (VAR_6[VAR_11] == '\r')
                    continue;
                FUNC_1(VAR_8, VAR_0, VAR_6[VAR_11]);
                if (VAR_6[VAR_11] == '.')
                    VAR_10++;
                else if (VAR_6[VAR_11] == '\n')
                    continue;
                else
                    VAR_10--;
                break;
            case 10:
                if (VAR_6[VAR_11] == '\r')
                    continue;
                FUNC_1(VAR_8, VAR_0, VAR_6[VAR_11]);
                if (VAR_6[VAR_11] == '\n') {
                    FUNC_4(VAR_9, "STLS\r\n", 6, 0);
                    VAR_10 = 204;
                } else {
                    VAR_10 = 8;
                }
                break;

            case 208:
                if (VAR_6[VAR_11] == '\r')
                    continue;
                FUNC_1(VAR_8, VAR_0, VAR_6[VAR_11]);
                if (VAR_6[VAR_11] == '\n') {

                    unsigned VAR_12 = VAR_5->port;
                    FUNC_2(VAR_5, 0, sizeof(*VAR_5));
                    VAR_5->app_proto = VAR_1;
                    VAR_5->is_sent_sslhello = 1;
                    VAR_5->port = (unsigned short)VAR_12;
                    VAR_10 = 0;

                    FUNC_4(VAR_9, VAR_2.hello, VAR_2.hello_length, 0);

                    break;
                }
                break;

            case 100:
                if (VAR_6[VAR_11] == '\r')
                    continue;
                FUNC_1(VAR_8, VAR_0, VAR_6[VAR_11]);
                if (VAR_6[VAR_11] == '\n') {
                    VAR_10 = 0xffffffff;
                    FUNC_3(VAR_9);
                }
                break;
            default:
                VAR_11 = (unsigned)VAR_7;
                break;
        }
    }
    VAR_5->state = VAR_10;
}
