
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
            case 0:
                FUNC_1(VAR_8, VAR_0, VAR_6[VAR_11]);
                if (VAR_6[VAR_11] == '*')
                    VAR_10++;
                else {
                    VAR_10 = 0xffffffff;
                    FUNC_3(VAR_9);
                }
                break;
            case 1:
                if (VAR_6[VAR_11] == ' ') {
                    FUNC_1(VAR_8, VAR_0, VAR_6[VAR_11]);
                    continue;
                } else {
                    VAR_10 = 0xffffffff;
                    FUNC_3(VAR_9);
                }

            case 2:
                FUNC_1(VAR_8, VAR_0, VAR_6[VAR_11]);
                if (VAR_6[VAR_11] == 'O')
                    VAR_10++;
                else {
                    VAR_10 = 0xffffffff;
                    FUNC_3(VAR_9);
                }
                break;
            case 3:
                FUNC_1(VAR_8, VAR_0, VAR_6[VAR_11]);
                if (VAR_6[VAR_11] == 'K')
                    VAR_10++;
                else {
                    VAR_10 = 0xffffffff;
                    FUNC_3(VAR_9);
                }
                break;
            case 4:
                if (VAR_6[VAR_11] == ' ') {
                    FUNC_1(VAR_8, VAR_0, VAR_6[VAR_11]);
                    VAR_10++;
                    break;
                } else if (VAR_6[VAR_11] != '\n') {
                    FUNC_1(VAR_8, VAR_0, VAR_6[VAR_11]);

                    break;
                } else {
                    VAR_10++;

                }
            case 5:
                FUNC_1(VAR_8, VAR_0, VAR_6[VAR_11]);
                if (VAR_6[VAR_11] == '\n') {
                    FUNC_4(VAR_9, "a001 CAPABILITY\r\n", 17, 0);
                    VAR_10 = 100;
                }
                break;
            case 100:
            case 300:
                FUNC_1(VAR_8, VAR_0, VAR_6[VAR_11]);
                if (VAR_6[VAR_11] == '*')
                    VAR_10 += 100;
                else if (VAR_6[VAR_11] == 'a')
                    VAR_10++;
                else {
                    VAR_10 = 0xffffffff;
                    FUNC_3(VAR_9);
                }
                break;
            case 101:
            case 301:
                FUNC_1(VAR_8, VAR_0, VAR_6[VAR_11]);
                if (VAR_6[VAR_11] == '0')
                    VAR_10++;
                else {
                    VAR_10 = 0xffffffff;
                    FUNC_3(VAR_9);
                }
                break;
            case 102:
            case 302:
                FUNC_1(VAR_8, VAR_0, VAR_6[VAR_11]);
                if (VAR_6[VAR_11] == '0')
                    VAR_10++;
                else {
                    VAR_10 = 0xffffffff;
                    FUNC_3(VAR_9);
                }
                break;
            case 103:
                FUNC_1(VAR_8, VAR_0, VAR_6[VAR_11]);
                if (VAR_6[VAR_11] == '1')
                    VAR_10++;
                else {
                    VAR_10 = 0xffffffff;
                    FUNC_3(VAR_9);
                }
                break;
            case 303:
                FUNC_1(VAR_8, VAR_0, VAR_6[VAR_11]);
                if (VAR_6[VAR_11] == '2')
                    VAR_10++;
                else {
                    VAR_10 = 0xffffffff;
                    FUNC_3(VAR_9);
                }
                break;
            case 104:
            case 304:
                FUNC_1(VAR_8, VAR_0, VAR_6[VAR_11]);
                if (VAR_6[VAR_11] == ' ')
                    VAR_10++;
                else {
                    VAR_10 = 0xffffffff;
                    FUNC_3(VAR_9);
                }
                break;
            case 105:
                FUNC_1(VAR_8, VAR_0, VAR_6[VAR_11]);
                if (VAR_6[VAR_11] == '\n') {
                    FUNC_4(VAR_9, "a002 STARTTLS\r\n", 15, 0);
                    VAR_10 = 300;
                }
                break;

            case 200:
            case 400:
                FUNC_1(VAR_8, VAR_0, VAR_6[VAR_11]);
                if (VAR_6[VAR_11] == '\n')
                    VAR_10 -= 100;
                break;

            case 305:
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

            case 0xffffffff:
            default:
                VAR_11 = (unsigned)VAR_7;
                break;
        }
    }
    VAR_5->state = VAR_10;
}
