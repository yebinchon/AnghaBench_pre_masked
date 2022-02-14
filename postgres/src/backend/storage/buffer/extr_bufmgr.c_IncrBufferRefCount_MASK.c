
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int refcount; } ;
typedef TYPE_1__ PrivateRefCountEntry ;
typedef int Buffer ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_3 (int,int) ;
 int * VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

void
FUNC_6(Buffer VAR_2)
{
 FUNC_0(FUNC_2(VAR_2));
 FUNC_4(VAR_0);
 if (FUNC_1(VAR_2))
  VAR_1[-VAR_2 - 1]++;
 else
 {
  PrivateRefCountEntry *VAR_3;

  VAR_3 = FUNC_3(VAR_2, 1);
  FUNC_0(VAR_3 != ((void*)0));
  VAR_3->refcount++;
 }
 FUNC_5(VAR_0, VAR_2);
}
