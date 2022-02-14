
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; } ;
typedef TYPE_1__ RRDSET ;
typedef int RRDDIM ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,char const*) ;
 int * FUNC_1 (TYPE_1__*,char const*,int ) ;

inline RRDDIM *FUNC_2(RRDSET *VAR_1, const char *VAR_2) {
    FUNC_0(VAR_0, "rrddim_find() for chart %s, dimension %s", VAR_1->name, VAR_2);

    return FUNC_1(VAR_1, VAR_2, 0);
}
