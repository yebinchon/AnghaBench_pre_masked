
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32 ;
typedef int WindowObject ;
struct TYPE_3__ {int flinfo; } ;
typedef TYPE_1__* FunctionCallInfo ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_0 ;
 int FUNC_4 (int ,int,int*) ;
 int FUNC_5 (int ,int ,int,int ,int,int*,int*) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static Datum
FUNC_7(FunctionCallInfo VAR_1,
      bool VAR_2, bool VAR_3, bool VAR_4)
{
 WindowObject VAR_5 = FUNC_3();
 int32 VAR_6;
 bool VAR_7;
 Datum VAR_8;
 bool VAR_9;
 bool VAR_10;

 if (VAR_3)
 {
  VAR_6 = FUNC_0(FUNC_4(VAR_5, 1, &VAR_9));
  if (VAR_9)
   FUNC_2();
  VAR_7 = FUNC_6(VAR_1->flinfo, 1);
 }
 else
 {
  VAR_6 = 1;
  VAR_7 = 1;
 }

 VAR_8 = FUNC_5(VAR_5, 0,
           (VAR_2 ? VAR_6 : -VAR_6),
           VAR_0,
           VAR_7,
           &VAR_9, &VAR_10);

 if (VAR_10)
 {




  if (VAR_4)
   VAR_8 = FUNC_4(VAR_5, 2, &VAR_9);
 }

 if (VAR_9)
  FUNC_2();

 FUNC_1(VAR_8);
}
