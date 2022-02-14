
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int name; } ;
struct TYPE_7__ {int name; } ;
typedef TYPE_1__ RRDSET ;
typedef TYPE_2__ RRDDIM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;

inline void FUNC_3(RRDSET *VAR_3, RRDDIM *VAR_4) {
    FUNC_0(VAR_0, "rrddim_is_obsolete() for chart %s, dimension %s", VAR_3->name, VAR_4->name);

    FUNC_1(VAR_4, VAR_1);
    FUNC_2(VAR_3, VAR_2);
}
