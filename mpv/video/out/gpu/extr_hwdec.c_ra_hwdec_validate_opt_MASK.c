
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_hwdec_driver {char* name; } ;
struct mp_log {int dummy; } ;
struct bstr {int len; } ;
typedef int m_option_t ;


 int FUNC_0 (struct bstr) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bstr,char*) ;
 int FUNC_2 (struct mp_log*,char*,int ) ;
 int FUNC_3 (struct mp_log*,char*,...) ;
 struct ra_hwdec_driver** VAR_2 ;

int FUNC_4(struct mp_log *VAR_3, const m_option_t *VAR_4,
                          struct bstr VAR_5, struct bstr VAR_6)
{
    bool VAR_7 = FUNC_1(VAR_6, "help");
    if (VAR_7)
        FUNC_3(VAR_3, "Available hwdecs:\n");
    for (int VAR_8 = 0; VAR_2[VAR_8]; VAR_8++) {
        const struct ra_hwdec_driver *VAR_9 = VAR_2[VAR_8];
        if (VAR_7) {
            FUNC_3(VAR_3, "    %s\n", VAR_9->name);
        } else if (FUNC_1(VAR_6, VAR_9->name)) {
            return 1;
        }
    }
    if (VAR_7) {
        FUNC_3(VAR_3, "    auto (behavior depends on context)\n"
                     "    all (load all hwdecs)\n"
                     "    no (do not load any and block loading on demand)\n");
        return VAR_0;
    }
    if (!VAR_6.len)
        return 1;
    if (FUNC_1(VAR_6, "all") || FUNC_1(VAR_6, "auto") ||
        FUNC_1(VAR_6, "no"))
        return 1;
    FUNC_2(VAR_3, "No hwdec backend named '%.*s' found!\n", FUNC_0(VAR_6));
    return VAR_1;
}
