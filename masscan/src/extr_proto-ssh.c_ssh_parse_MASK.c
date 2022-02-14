
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ProtocolState {unsigned int state; } ;
typedef void const InteractiveData ;
struct BannerOutput {int dummy; } ;
typedef void Banner1 ;


 int VAR_0 ;
 int FUNC_0 (void const*) ;
 int FUNC_1 (struct BannerOutput*,int ,unsigned char const) ;
 int FUNC_2 (unsigned char const) ;
 int FUNC_3 (void const*) ;

__attribute__((used)) static void
FUNC_4( const struct Banner1 *VAR_1,
        void *VAR_2,
        struct ProtocolState *VAR_3,
        const unsigned char *VAR_4, size_t VAR_5,
        struct BannerOutput *VAR_6,
        struct InteractiveData *VAR_7)
{
    unsigned VAR_8 = VAR_3->state;
    unsigned VAR_9;

    FUNC_0(VAR_2);
    FUNC_0(VAR_1);
    FUNC_0(VAR_7);

    for (VAR_9=0; VAR_9<VAR_5; VAR_9++)
    switch (VAR_8) {
    case 0:
        if (VAR_4[VAR_9] == '\r')
            continue;
        if (VAR_4[VAR_9] == '\n' || VAR_4[VAR_9] == '\0' || !FUNC_2(VAR_4[VAR_9])) {
            VAR_8++;
            FUNC_3(VAR_7);
            continue;
        }
        FUNC_1(VAR_6, VAR_0, VAR_4[VAR_9]);
        break;
    default:
        VAR_9 = (unsigned)VAR_5;
        break;
    }
    VAR_3->state = VAR_8;
}
