
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct m_property {int dummy; } ;
struct TYPE_9__ {int member_0; } ;
typedef TYPE_1__ bstr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char**,int*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_3 (TYPE_1__,char*) ;
 scalar_t__ FUNC_4 (TYPE_1__,char*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_5 (struct m_property const*,TYPE_1__,int,char**,void*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(const struct m_property *VAR_3, char **VAR_4,
                           int *VAR_5, bstr VAR_6, bool VAR_7, void *VAR_8)
{
    bool VAR_9 = FUNC_2(&VAR_6, "?");
    bool VAR_10 = !VAR_9 && FUNC_2(&VAR_6, "!");
    bool VAR_11 = VAR_9 || VAR_10;
    bool VAR_12 = FUNC_2(&VAR_6, "=");
    bstr VAR_13 = {0};
    bool VAR_14 = VAR_11 && FUNC_4(VAR_6, "==", &VAR_6, &VAR_13);
    if (VAR_11 && !VAR_14)
        VAR_12 = 1;
    int VAR_15 = VAR_12 ? VAR_0 : VAR_1;

    char *VAR_16 = ((void*)0);
    int VAR_17 = FUNC_5(VAR_3, VAR_6, VAR_15, &VAR_16, VAR_8);
    bool VAR_18;
    if (VAR_14) {
        VAR_18 = ((VAR_16 && FUNC_3(VAR_13, VAR_16)) != VAR_9);
    } else if (VAR_11) {
        VAR_18 = (!!VAR_16 != VAR_9);
    } else {
        VAR_18 = !!VAR_16;
        char *VAR_19 = VAR_16;
        if (!VAR_16 && !VAR_7 && !VAR_12)
            VAR_19 = (VAR_17 == VAR_2) ? "(unavailable)" : "(error)";
        FUNC_0(VAR_4, VAR_5, FUNC_1(VAR_19));
    }
    FUNC_6(VAR_16);
    return VAR_18;
}
