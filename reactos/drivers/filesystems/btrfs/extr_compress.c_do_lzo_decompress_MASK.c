
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_7__ {int error; scalar_t__ outlen; scalar_t__ outpos; } ;
typedef TYPE_1__ lzo_stream ;
typedef int NTSTATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static NTSTATUS FUNC_5(lzo_stream* VAR_2) {
    uint8_t VAR_3;
    uint32_t VAR_4, VAR_5;
    bool VAR_6 = 0;

    VAR_2->error = 0;

    VAR_3 = FUNC_3(VAR_2);
    if (VAR_2->error) return VAR_0;

    if (VAR_3 > 17) {
        FUNC_0(VAR_2, FUNC_4((uint8_t)(VAR_3 - 17), (uint32_t)(VAR_2->outlen - VAR_2->outpos)));
        if (VAR_2->error) return VAR_0;

        if (VAR_2->outlen == VAR_2->outpos)
            return VAR_1;

        VAR_3 = FUNC_3(VAR_2);
        if (VAR_2->error) return VAR_0;

        if (VAR_3 < 16) return VAR_0;
    }

    while (1) {
        if (VAR_3 >> 4) {
            VAR_6 = 1;
            if (VAR_3 >> 6) {
                VAR_4 = (VAR_3 >> 5) - 1;
                VAR_5 = (FUNC_3(VAR_2) << 3) + ((VAR_3 >> 2) & 7) + 1;
                if (VAR_2->error) return VAR_0;
            } else if (VAR_3 >> 5) {
                VAR_4 = FUNC_2(VAR_2, VAR_3, 31);
                if (VAR_2->error) return VAR_0;

                VAR_3 = FUNC_3(VAR_2);
                if (VAR_2->error) return VAR_0;

                VAR_5 = (FUNC_3(VAR_2) << 6) + (VAR_3 >> 2) + 1;
                if (VAR_2->error) return VAR_0;
            } else {
                VAR_4 = FUNC_2(VAR_2, VAR_3, 7);
                if (VAR_2->error) return VAR_0;

                VAR_5 = (1 << 14) + ((VAR_3 & 8) << 11);

                VAR_3 = FUNC_3(VAR_2);
                if (VAR_2->error) return VAR_0;

                VAR_5 += (FUNC_3(VAR_2) << 6) + (VAR_3 >> 2);
                if (VAR_2->error) return VAR_0;

                if (VAR_5 == (1 << 14)) {
                    if (VAR_4 != 1)
                        return VAR_0;
                    break;
                }
            }
        } else if (VAR_6) {
            VAR_4 = 0;
            VAR_5 = (FUNC_3(VAR_2) << 2) + (VAR_3 >> 2) + 1;
            if (VAR_2->error) return VAR_0;
        } else {
            VAR_4 = FUNC_2(VAR_2, VAR_3, 15);
            if (VAR_2->error) return VAR_0;

            FUNC_0(VAR_2, FUNC_4(VAR_4 + 3, VAR_2->outlen - VAR_2->outpos));
            if (VAR_2->error) return VAR_0;

            if (VAR_2->outlen == VAR_2->outpos)
                return VAR_1;

            VAR_3 = FUNC_3(VAR_2);
            if (VAR_2->error) return VAR_0;

            if (VAR_3 >> 4)
                continue;

            VAR_4 = 1;
            VAR_5 = (1 << 11) + (FUNC_3(VAR_2) << 2) + (VAR_3 >> 2) + 1;
            if (VAR_2->error) return VAR_0;

            break;
        }

        FUNC_1(VAR_2, VAR_5, FUNC_4(VAR_4 + 2, VAR_2->outlen - VAR_2->outpos));
        if (VAR_2->error) return VAR_0;

        if (VAR_2->outlen == VAR_2->outpos)
            return VAR_1;

        VAR_4 = VAR_3 & 3;

        if (VAR_4) {
            FUNC_0(VAR_2, FUNC_4(VAR_4, VAR_2->outlen - VAR_2->outpos));
            if (VAR_2->error) return VAR_0;

            if (VAR_2->outlen == VAR_2->outpos)
                return VAR_1;
        } else
            VAR_6 = !VAR_6;

        VAR_3 = FUNC_3(VAR_2);
        if (VAR_2->error) return VAR_0;
    }

    return VAR_1;
}
