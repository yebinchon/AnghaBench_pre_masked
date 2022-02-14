
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


struct mp_log {int dummy; } ;
struct m_config {int dummy; } ;
struct TYPE_13__ {scalar_t__ len; scalar_t__ start; } ;
typedef TYPE_1__ bstr ;


 char const* FUNC_0 (TYPE_1__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ FUNC_1 (char const*) ;
 char* FUNC_2 (struct m_config*,int) ;
 scalar_t__ FUNC_3 (struct m_config*,TYPE_1__) ;
 int FUNC_4 (struct m_config*,TYPE_1__,TYPE_1__,int) ;
 int FUNC_5 (struct mp_log*,char*,char const*,char const*,...) ;
 int FUNC_6 (char*,size_t,char*,int) ;

__attribute__((used)) static int FUNC_7(struct mp_log *VAR_3, bstr VAR_4, bstr VAR_5,
                         struct m_config *VAR_6, bstr VAR_7, bstr VAR_8,
                         int VAR_9, bool VAR_10,
                         int *VAR_11, bstr *VAR_12, bstr *VAR_13,
                         char *VAR_14, size_t VAR_15)
{
    int VAR_16;

    if (!VAR_6) {

        if (VAR_8.start || VAR_10) {
            *VAR_12 = VAR_7;
            *VAR_13 = VAR_8;
        } else {
            VAR_8 = VAR_7;

            if (VAR_8.len == 0) {
                (*VAR_11)++;
                return 0;
            }

            FUNC_6(VAR_14, VAR_15, "@%d", *VAR_11);
            *VAR_12 = FUNC_1(VAR_14);
            *VAR_13 = VAR_8;
            (*VAR_11)++;
        }
        return 1;
    }




    if (VAR_8.start || FUNC_3(VAR_6, VAR_7) == 0 || VAR_10) {
        VAR_16 = FUNC_4(VAR_6, VAR_7, VAR_8, VAR_9);
        if (VAR_16 < 0) {
            if (VAR_16 == VAR_2) {
                FUNC_5(VAR_3, "Option %.*s: %.*s doesn't have a %.*s parameter.\n",
                       FUNC_0(VAR_4), FUNC_0(VAR_5), FUNC_0(VAR_7));
                return VAR_2;
            }
            if (VAR_16 != VAR_0)
                FUNC_5(VAR_3, "Option %.*s: "
                       "Error while parsing %.*s parameter %.*s (%.*s)\n",
                       FUNC_0(VAR_4), FUNC_0(VAR_5), FUNC_0(VAR_7),
                       FUNC_0(VAR_8));
            return VAR_16;
        }
        *VAR_12 = VAR_7;
        *VAR_13 = VAR_8;
        return 1;
    } else {
        VAR_8 = VAR_7;

        if (VAR_8.len == 0) {
            (*VAR_11)++;
            return 0;
        }
        const char *VAR_17 = FUNC_2(VAR_6, *VAR_11);
        if (!VAR_17) {
            FUNC_5(VAR_3, "Option %.*s: %.*s has only %d "
                   "params, so you can't give more than %d unnamed params.\n",
                   FUNC_0(VAR_4), FUNC_0(VAR_5), *VAR_11, *VAR_11);
            return VAR_1;
        }
        VAR_16 = FUNC_4(VAR_6, FUNC_1(VAR_17), VAR_8, VAR_9);
        if (VAR_16 < 0) {
            if (VAR_16 != VAR_0)
                FUNC_5(VAR_3, "Option %.*s: "
                       "Error while parsing %.*s parameter %s (%.*s)\n",
                       FUNC_0(VAR_4), FUNC_0(VAR_5), VAR_17, FUNC_0(VAR_8));
            return VAR_16;
        }
        *VAR_12 = FUNC_1(VAR_17);
        *VAR_13 = VAR_8;
        (*VAR_11)++;
        return 1;
    }
}
