
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct mp_log {int dummy; } ;
struct bstr {int len; int* start; } ;
typedef int m_option_t ;
struct TYPE_3__ {scalar_t__ len; } ;
typedef TYPE_1__ bstr ;


 int FUNC_0 (struct bstr) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (struct bstr,TYPE_1__*,int) ;
 int FUNC_2 (struct mp_log*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct mp_log *VAR_2, const m_option_t *VAR_3,
                        struct bstr VAR_4, struct bstr VAR_5, void *VAR_6)
{
    if (VAR_5.len == 0)
        return VAR_1;

    unsigned int VAR_7;

    if (VAR_5.len == 4) {
        uint8_t *VAR_8 = VAR_5.start;
        VAR_7 = VAR_8[0] | (VAR_8[1] << 8) | (VAR_8[2] << 16) | (VAR_8[3] << 24);
    } else {
        bstr VAR_9;
        VAR_7 = FUNC_1(VAR_5, &VAR_9, 16);
        if (VAR_9.len != 0) {
            FUNC_2(VAR_2, "Option %.*s: invalid FourCC: '%.*s'\n",
                   FUNC_0(VAR_4), FUNC_0(VAR_5));
            return VAR_0;
        }
    }

    if (VAR_6)
        *((unsigned int *)VAR_6) = VAR_7;

    return 1;
}
