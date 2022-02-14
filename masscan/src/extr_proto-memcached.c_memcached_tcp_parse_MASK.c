
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct MEMCACHEDSTUFF {int match; } ;
struct TYPE_3__ {struct MEMCACHEDSTUFF memcached; } ;
struct ProtocolState {unsigned int state; TYPE_1__ sub; } ;
typedef void const InteractiveData ;
struct BannerOutput {int dummy; } ;
typedef void Banner1 ;
struct TYPE_4__ {int pattern; } ;


 int VAR_0 ;





 int VAR_1 ;

 int FUNC_0 (void const*) ;
 int FUNC_1 (struct BannerOutput*,int ,int ,int ) ;
 int FUNC_2 (struct BannerOutput*,int ,unsigned char const) ;
 int FUNC_3 (unsigned char const) ;
 TYPE_2__* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t FUNC_4 (scalar_t__,int *,unsigned char const*,unsigned int*,unsigned int) ;

__attribute__((used)) static void
FUNC_5(
          const struct Banner1 *VAR_5,
          void *VAR_6,
          struct ProtocolState *VAR_7,
          const unsigned char *VAR_8, size_t VAR_9,
          struct BannerOutput *VAR_10,
          struct InteractiveData *VAR_11)
{
    unsigned VAR_12 = VAR_7->state;
    unsigned VAR_13;
    struct MEMCACHEDSTUFF *VAR_14 = &VAR_7->sub.memcached;
    size_t VAR_15;

    FUNC_0(VAR_6);
    FUNC_0(VAR_5);
    FUNC_0(VAR_11);

    if (VAR_3 == 0)
        return;

    for (VAR_13=0; VAR_13<VAR_9; VAR_13++) {
        switch (VAR_12) {
            case 0:
                VAR_14->match = 0;

            case 1:
                VAR_15 = FUNC_4(
                        VAR_3,
                        &VAR_14->match,
                        VAR_8, &VAR_13, (unsigned)VAR_9);
                VAR_13--;
                switch (VAR_15) {
                case 128:

                    break;
                case 132:
                    if (VAR_8[VAR_13] == '\n')
                        VAR_12 = 2;
                    else
                        VAR_12 = 100;
                    break;
                case 133:
                    VAR_12 = 3;
                    break;
                default:
                    VAR_12 = 2;
                }
                break;


            case 3:
                VAR_13 = (unsigned)VAR_9;
                break;


            case 2:
                while (VAR_13 < VAR_9 && VAR_8[VAR_13] != '\n')
                    VAR_13++;
                if (VAR_8[VAR_13] == '\n')
                    VAR_12 = 0;
                break;


            case 100:
            case 200:
                if (VAR_8[VAR_13] == '\n')
                    VAR_12 = 0;
                else if (FUNC_3(VAR_8[VAR_13]))
                    continue;
                else {
                    VAR_12++;
                    VAR_14->match = 0;
                    VAR_13--;
                }
                break;
            case 101:
                VAR_15 = FUNC_4(
                        VAR_4,
                        &VAR_14->match,
                        VAR_8, &VAR_13, (unsigned)VAR_9);
                VAR_13--;
                switch (VAR_15) {
                case 128:

                    break;
                case 130:
                case 131:
                case 129:
                    FUNC_1(VAR_10, VAR_1, VAR_2[VAR_15].pattern, VAR_0);
                    if (VAR_8[VAR_13] == '\n')
                        VAR_12 = 0;
                    else
                        VAR_12 = 200;
                    FUNC_2(VAR_10, VAR_1, '=');
                    break;
                default:
                    if (VAR_8[VAR_13] == '\n')
                        VAR_12 = 0;
                    else
                        VAR_12 = 2;
                }
                break;

            case 201:
                if (VAR_8[VAR_13] == '\r')
                    continue;
                else if (VAR_8[VAR_13] == '\n') {
                    FUNC_2(VAR_10, VAR_1, ' ');
                    VAR_12 = 0;
                    break;
                } else
                    FUNC_2(VAR_10, VAR_1, VAR_8[VAR_13]);
                break;
        }
    }
    VAR_7->state = VAR_12;
}
