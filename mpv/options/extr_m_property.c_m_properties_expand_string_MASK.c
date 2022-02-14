
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


struct m_property {int dummy; } ;
struct TYPE_13__ {int len; char* start; } ;
typedef TYPE_1__ bstr ;


 int FUNC_0 (int *,char*,int,char) ;
 int FUNC_1 (char**,int*,TYPE_1__) ;
 TYPE_1__ FUNC_2 (char const*) ;
 TYPE_1__ FUNC_3 (TYPE_1__,int) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_5 (TYPE_1__,char*) ;
 TYPE_1__ FUNC_6 (TYPE_1__,int ,int) ;
 scalar_t__ FUNC_7 (TYPE_1__,char*) ;
 int FUNC_8 (TYPE_1__,char*) ;
 int FUNC_9 (struct m_property const*,char**,int*,TYPE_1__,int,void*) ;

char *FUNC_10(const struct m_property *VAR_0,
                                 const char *VAR_1, void *VAR_2)
{
    char *VAR_3 = ((void*)0);
    int VAR_4 = 0;
    bool VAR_5 = 0;
    int VAR_6 = 0, VAR_7 = 0;
    bstr VAR_8 = FUNC_2(VAR_1);

    while (VAR_8.len) {
        if (VAR_6 > 0 && FUNC_4(&VAR_8, "}")) {
            if (VAR_5 && VAR_6 <= VAR_7)
                VAR_5 = 0;
            VAR_6--;
        } else if (FUNC_7(VAR_8, "${") && FUNC_5(VAR_8, "}") >= 0) {
            VAR_8 = FUNC_3(VAR_8, 2);
            VAR_6++;



            int VAR_9 = FUNC_8(VAR_8, ":}");
            bstr VAR_10 = FUNC_6(VAR_8, 0, VAR_9 < 0 ? VAR_8.len : VAR_9);
            VAR_8 = FUNC_3(VAR_8, VAR_9);
            bool VAR_11 = FUNC_4(&VAR_8, ":");

            if (!VAR_5) {
                VAR_5 = FUNC_9(VAR_0, &VAR_3, &VAR_4, VAR_10,
                                       VAR_11, VAR_2);
                if (VAR_5)
                    VAR_7 = VAR_6;
            }
        } else if (VAR_6 == 0 && FUNC_4(&VAR_8, "$>")) {
            FUNC_1(&VAR_3, &VAR_4, VAR_8);
            break;
        } else {
            char VAR_12;


            if (FUNC_4(&VAR_8, "$$")) {
                VAR_12 = '$';
            } else if (FUNC_4(&VAR_8, "$}")) {
                VAR_12 = '}';
            } else {
                VAR_12 = VAR_8.start[0];
                VAR_8 = FUNC_3(VAR_8, 1);
            }

            if (!VAR_5)
                FUNC_0(((void*)0), VAR_3, VAR_4, VAR_12);
        }
    }

    FUNC_0(((void*)0), VAR_3, VAR_4, '\0');
    return VAR_3;
}
