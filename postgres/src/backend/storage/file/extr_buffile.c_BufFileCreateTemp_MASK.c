
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int isInterXact; } ;
typedef scalar_t__ File ;
typedef TYPE_1__ BufFile ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 (scalar_t__) ;

BufFile *
FUNC_4(bool VAR_0)
{
 BufFile *VAR_1;
 File VAR_2;
 FUNC_2();

 VAR_2 = FUNC_1(VAR_0);
 FUNC_0(VAR_2 >= 0);

 VAR_1 = FUNC_3(VAR_2);
 VAR_1->isInterXact = VAR_0;

 return VAR_1;
}
