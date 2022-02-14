
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nid; } ;
typedef int OPENSSL_CTX ;
typedef int EC_GROUP ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__* VAR_2 ;
 size_t VAR_3 ;
 int * FUNC_2 (int *,TYPE_1__) ;

EC_GROUP *FUNC_3(OPENSSL_CTX *VAR_4, int VAR_5)
{
    size_t VAR_6;
    EC_GROUP *VAR_7 = ((void*)0);

    if (VAR_5 <= 0)
        return ((void*)0);
    for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
        if (VAR_2[VAR_6].nid == VAR_5) {
            VAR_7 = FUNC_2(VAR_4, VAR_2[VAR_6]);
            break;
        }

    if (VAR_7 == ((void*)0)) {
        FUNC_1(VAR_0, VAR_1);
        return ((void*)0);
    }

    return VAR_7;
}
