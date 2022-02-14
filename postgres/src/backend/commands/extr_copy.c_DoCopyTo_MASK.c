
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_6__ {int * filename; } ;
typedef TYPE_1__* CopyState ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static uint64
FUNC_8(CopyState VAR_2)
{
 bool VAR_3 = (VAR_2->filename == ((void*)0));
 bool VAR_4 = (VAR_3 && VAR_1 == VAR_0);
 uint64 VAR_5;

 FUNC_4();
 {
  if (VAR_4)
   FUNC_5(VAR_2);

  VAR_5 = FUNC_0(VAR_2);

  if (VAR_4)
   FUNC_6(VAR_2);
 }
 FUNC_1();
 {





  FUNC_7(1);
  FUNC_3();
 }
 FUNC_2();

 return VAR_5;
}
