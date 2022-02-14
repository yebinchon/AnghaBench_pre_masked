
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; } ;
typedef TYPE_1__ STATSD_METRIC ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,size_t,char*,int ,char const*,int ) ;
 int FUNC_2 (char*,char const*,size_t) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static inline void FUNC_4(STATSD_METRIC *VAR_1, char *VAR_2, char *VAR_3, const char *VAR_4, size_t VAR_5) {
    char *VAR_6;

    FUNC_1(VAR_2, VAR_5, "%s_%s_%s", VAR_0, VAR_4, VAR_1->name);
    for(VAR_6 = VAR_2; *VAR_6 ;VAR_6++)
        if(FUNC_3(*VAR_6 == '.')) break;

    if(*VAR_6 == '.') {
        *VAR_6++ = '\0';
        FUNC_2(VAR_3, VAR_6, VAR_5);
    }
    else {
        FUNC_2(VAR_3, VAR_4, VAR_5);
    }

    FUNC_0(VAR_2);
    FUNC_0(VAR_3);
}
