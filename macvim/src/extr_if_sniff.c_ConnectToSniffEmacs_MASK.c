
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sa ;
struct TYPE_5__ {scalar_t__ in_use; } ;
struct TYPE_4__ {int nLength; int bInheritHandle; int * lpSecurityDescriptor; } ;
typedef TYPE_1__ SECURITY_ATTRIBUTES ;
typedef void* HANDLE ;


 int * FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (void**,void**,TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (int ,int ,void*,void*) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (int ,int ) ;
 TYPE_2__ VAR_6 ;
 int FUNC_13 (int) ;
 int * VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_14 (int*) ;
 void* VAR_11 ;
 int FUNC_15 (int) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static int
FUNC_16()
{
    int VAR_17[2], VAR_18[2];

    if (FUNC_14(VAR_17) != 0)
 return 1;
    if (FUNC_14(VAR_18) != 0)
 return 1;


    if ((VAR_14=FUNC_11()) == 0)
    {



 FUNC_5(VAR_17[1]);
 FUNC_5(VAR_18[0]);

 FUNC_6(VAR_17[0],FUNC_10(VAR_15));
 FUNC_6(VAR_18[1],FUNC_10(VAR_16));

 FUNC_5(VAR_17[0]);
 FUNC_5(VAR_18[1]);


 FUNC_7 (VAR_1[0], VAR_1);
 {

     FUNC_15(1);
     FUNC_12(FUNC_3(VAR_10), VAR_16);
     FUNC_9(VAR_16);
     FUNC_15(3);




     FUNC_8(1);
 }
 return 1;
    }
    else if (VAR_14 > 0)
    {

 FUNC_5(VAR_17[0]);
 VAR_5 = VAR_17[1];
 FUNC_5(VAR_18[1]);
 VAR_4 = VAR_18[0];
 VAR_12 = 1;
 return 0;
    }
    else
 return 1;

}
