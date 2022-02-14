
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nid; } ;
typedef int EC_GROUP ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_7(int VAR_1)
{
    EC_GROUP *VAR_2 = ((void*)0);
    int VAR_3 = VAR_0[VAR_1].nid;

    if (!FUNC_5(VAR_2 = FUNC_2(VAR_3))) {
        FUNC_4("EC_GROUP_new_curve_name() failed with curve %s\n",
                  FUNC_3(VAR_3));
        return 0;
    }
    if (!FUNC_6(FUNC_0(VAR_2, ((void*)0)))) {
        FUNC_4("EC_GROUP_check() failed with curve %s\n", FUNC_3(VAR_3));
        FUNC_1(VAR_2);
        return 0;
    }
    FUNC_1(VAR_2);
    return 1;
}
