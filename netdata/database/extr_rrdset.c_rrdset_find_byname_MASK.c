
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hostname; } ;
typedef int RRDSET ;
typedef TYPE_1__ RRDHOST ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*,int ) ;
 int * FUNC_1 (TYPE_1__*,char const*,int ) ;

inline RRDSET *FUNC_2(RRDHOST *VAR_1, const char *VAR_2) {
    FUNC_0(VAR_0, "rrdset_find_byname() for chart '%s' in host '%s'", VAR_2, VAR_1->hostname);
    RRDSET *VAR_3 = FUNC_1(VAR_1, VAR_2, 0);
    return(VAR_3);
}
