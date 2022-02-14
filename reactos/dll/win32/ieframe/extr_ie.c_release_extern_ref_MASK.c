
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int doc_host; int extern_ref; } ;
typedef scalar_t__ LONG ;
typedef TYPE_1__ InternetExplorer ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;

DWORD FUNC_4(InternetExplorer *VAR_0, BOOL VAR_1)
{
    LONG VAR_2 = FUNC_0(&VAR_0->extern_ref);

    FUNC_1("ref = %d\n", VAR_2);

    if(VAR_2)
        return VAR_2;

    if(!VAR_1) {
        FUNC_2("Last external connection released with FALSE last_closes.\n");
        return VAR_2;
    }

    FUNC_3(&VAR_0->doc_host);
    return VAR_2;
}
