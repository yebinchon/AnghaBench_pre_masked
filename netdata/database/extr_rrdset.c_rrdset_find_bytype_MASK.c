
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hostname; } ;
typedef int RRDSET ;
typedef TYPE_1__ RRDHOST ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char const*,char const*,int ) ;
 int * FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*,char const*,size_t) ;

inline RRDSET *FUNC_5(RRDHOST *VAR_2, const char *VAR_3, const char *VAR_4) {
    FUNC_0(VAR_0, "rrdset_find_bytype() for chart '%s.%s' in host '%s'", VAR_3, VAR_4, VAR_2->hostname);

    char VAR_5[VAR_1 + 1];
    FUNC_4(VAR_5, VAR_3, VAR_1 - 1);
    FUNC_2(VAR_5, ".");
    int VAR_6 = (int) FUNC_3(VAR_5);
    FUNC_4(&VAR_5[VAR_6], VAR_4, (size_t) (VAR_1 - VAR_6));

    return(FUNC_1(VAR_2, VAR_5));
}
