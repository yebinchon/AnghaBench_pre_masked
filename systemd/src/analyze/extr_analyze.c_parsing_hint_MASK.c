
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int *) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (char const*,int *,int ) ;
 scalar_t__ FUNC_3 (char const*,int *) ;

__attribute__((used)) static void FUNC_4(const char *VAR_1, bool VAR_2, bool VAR_3, bool VAR_4) {
        if (VAR_2 && FUNC_0(VAR_1, ((void*)0)) >= 0)
                FUNC_1("Hint: this expression is a valid calendar specification. "
                           "Use 'systemd-analyze calendar \"%s\"' instead?", VAR_1);
        if (VAR_3 && FUNC_3(VAR_1, ((void*)0)) >= 0)
                FUNC_1("Hint: this expression is a valid timestamp. "
                           "Use 'systemd-analyze timestamp \"%s\"' instead?", VAR_1);
        if (VAR_4 && FUNC_2(VAR_1, ((void*)0), VAR_0) >= 0)
                FUNC_1("Hint: this expression is a valid timespan. "
                           "Use 'systemd-analyze timespan \"%s\"' instead?", VAR_1);
}
