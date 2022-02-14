
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Subject; } ;
typedef int DWORD ;
typedef int CERT_NAME_CONSTRAINTS_INFO ;
typedef TYPE_1__ CERT_INFO ;
typedef int CERT_EXTENSION ;


 int FUNC_0 (int *,int const*,int *) ;
 int FUNC_1 (int *,int const*,int *) ;
 int * FUNC_2 (TYPE_1__ const*) ;

__attribute__((used)) static void FUNC_3(
 const CERT_NAME_CONSTRAINTS_INFO *VAR_0, const CERT_INFO *VAR_1,
 DWORD *VAR_2)
{
    CERT_EXTENSION *VAR_3 = FUNC_2(VAR_1);

    if (VAR_3)
        FUNC_0(VAR_3, VAR_0,
         VAR_2);





    FUNC_1(&VAR_1->Subject, VAR_0,
     VAR_2);
}
