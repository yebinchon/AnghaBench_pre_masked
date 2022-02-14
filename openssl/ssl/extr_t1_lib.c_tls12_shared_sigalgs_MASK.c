
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int SSL ;
typedef int SIGALG_LOOKUP ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int const*) ;
 int * FUNC_1 (scalar_t__ const) ;

__attribute__((used)) static size_t FUNC_2(SSL *VAR_1, const SIGALG_LOOKUP **VAR_2,
                                   const uint16_t *VAR_3, size_t VAR_4,
                                   const uint16_t *VAR_5, size_t VAR_6)
{
    const uint16_t *VAR_7, *VAR_8;
    size_t VAR_9, VAR_10, VAR_11 = 0;
    for (VAR_9 = 0, VAR_7 = VAR_3; VAR_9 < VAR_4; VAR_9++, VAR_7++) {
        const SIGALG_LOOKUP *VAR_12 = FUNC_1(*VAR_7);


        if (!FUNC_0(VAR_1, VAR_0, VAR_12))
            continue;
        for (VAR_10 = 0, VAR_8 = VAR_5; VAR_10 < VAR_6; VAR_10++, VAR_8++) {
            if (*VAR_7 == *VAR_8) {
                VAR_11++;
                if (VAR_2)
                    *VAR_2++ = VAR_12;
                break;
            }
        }
    }
    return VAR_11;
}
