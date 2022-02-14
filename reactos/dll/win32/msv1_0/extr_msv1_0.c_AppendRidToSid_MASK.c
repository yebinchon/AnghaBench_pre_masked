
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ULONG ;
typedef int UCHAR ;
struct TYPE_2__ {int * (* AllocateLsaHeap ) (int ) ;} ;
typedef int * PSID ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int) ;
 int* FUNC_2 (int *) ;
 int * FUNC_3 (int *,int) ;
 int * FUNC_4 (int ) ;

__attribute__((used)) static
PSID
FUNC_5(PSID VAR_1,
               ULONG VAR_2)
{
    PSID VAR_3 = ((void*)0);
    UCHAR VAR_4;

    VAR_4 = *FUNC_2(VAR_1);
    if (VAR_4 >= 8)
        return ((void*)0);

    VAR_3 = VAR_0.AllocateLsaHeap(FUNC_1(VAR_4 + 1));
    if (VAR_3 == ((void*)0))
        return ((void*)0);

    FUNC_0(VAR_3,
                  VAR_1,
                  FUNC_1(VAR_4));

    *FUNC_2(VAR_3) = VAR_4 + 1;
    *FUNC_3(VAR_3, VAR_4) = VAR_2;

    return VAR_3;
}
