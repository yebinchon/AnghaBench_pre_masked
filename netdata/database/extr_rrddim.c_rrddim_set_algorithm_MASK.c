
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ algorithm; scalar_t__ exposed; int name; } ;
struct TYPE_7__ {int id; } ;
typedef scalar_t__ RRD_ALGORITHM ;
typedef TYPE_1__ RRDSET ;
typedef TYPE_2__ RRDDIM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_4 (int) ;

inline int FUNC_5(RRDSET *VAR_3, RRDDIM *VAR_4, RRD_ALGORITHM VAR_5) {
    if(FUNC_4(VAR_4->algorithm == VAR_5))
        return 0;

    FUNC_0(VAR_0, "Updating algorithm of dimension '%s/%s' from %s to %s", VAR_3->id, VAR_4->name, FUNC_1(VAR_4->algorithm), FUNC_1(VAR_5));
    VAR_4->algorithm = VAR_5;
    VAR_4->exposed = 0;
    FUNC_3(VAR_3, VAR_1);
    FUNC_2(VAR_3, VAR_2);
    return 1;
}
