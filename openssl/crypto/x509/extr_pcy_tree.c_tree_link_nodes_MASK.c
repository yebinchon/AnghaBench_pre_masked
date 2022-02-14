
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509_POLICY_LEVEL ;
typedef int X509_POLICY_DATA ;
struct TYPE_3__ {int data; } ;
typedef TYPE_1__ X509_POLICY_CACHE ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(X509_POLICY_LEVEL *VAR_0,
                           const X509_POLICY_CACHE *VAR_1)
{
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->data); VAR_2++) {
        X509_POLICY_DATA *VAR_3 = FUNC_1(VAR_1->data, VAR_2);


        if (!FUNC_2(VAR_0, VAR_3))
            return 0;
    }
    return 1;
}
