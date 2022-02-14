
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log {int dummy; } ;
struct m_geometry {scalar_t__ xy_valid; } ;
struct bstr {int dummy; } ;
typedef int m_option_t ;


 int FUNC_0 (struct bstr) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bstr,char*) ;
 int FUNC_2 (struct mp_log*,char*,int ,int ) ;
 int FUNC_3 (struct mp_log*,char*) ;
 int FUNC_4 (struct m_geometry*,struct bstr) ;

__attribute__((used)) static int FUNC_5(struct mp_log *VAR_2, const m_option_t *VAR_3,
                          struct bstr VAR_4, struct bstr VAR_5, void *VAR_6)
{
    bool VAR_7 = FUNC_1(VAR_5, "help");
    if (VAR_7)
        goto exit;

    struct m_geometry VAR_8;
    if (!FUNC_4(&VAR_8, VAR_5))
        goto exit;

    if (VAR_8.xy_valid)
        goto exit;

    if (VAR_6)
        *((struct m_geometry *)VAR_6) = VAR_8;

    return 1;

exit:
    if (!VAR_7) {
        FUNC_2(VAR_2, "Option %.*s: invalid size: '%.*s'\n",
               FUNC_0(VAR_4), FUNC_0(VAR_5));
    }
    FUNC_3(VAR_2, "Valid format: W[%%][xH[%%]] or empty string\n");
    return VAR_7 ? VAR_0 : VAR_1;
}
