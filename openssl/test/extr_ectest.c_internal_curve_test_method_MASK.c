
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nid; } ;
typedef int EC_GROUP ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(int VAR_1)
{
    int VAR_2, VAR_3 = VAR_0[VAR_1].nid;
    EC_GROUP *VAR_4;

    if (!FUNC_4(VAR_4 = FUNC_1(VAR_3))) {
        FUNC_3("Curve %s failed\n", FUNC_2(VAR_3));
        return 0;
    }
    VAR_2 = FUNC_5(VAR_4);
    FUNC_0(VAR_4);
    return VAR_2;
}
