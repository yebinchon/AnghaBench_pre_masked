
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32 ;
typedef int bits8 ;
struct TYPE_3__ {int flinfo; } ;
typedef TYPE_1__* FunctionCallInfo ;
typedef int ArrayType ;


 int* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int* FUNC_2 (int *) ;
 int FUNC_3 (int,int*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static bool
FUNC_12(FunctionCallInfo VAR_0,
   int32 *VAR_1, int32 *VAR_2)
{
 int32 VAR_3 = 0;
 int VAR_4;


 if (FUNC_11(VAR_0->flinfo))
 {
  ArrayType *VAR_5;
  int VAR_6,
     VAR_7,
       *VAR_8;
  bits8 *VAR_9;

  FUNC_4(FUNC_8() == 1);






  if (FUNC_6(0))
   return 0;
  FUNC_4(FUNC_5(FUNC_9(FUNC_10(VAR_0->flinfo, 0))));


  VAR_5 = FUNC_7(0);


  VAR_6 = FUNC_1(VAR_5);
  VAR_8 = FUNC_0(VAR_5);
  VAR_7 = FUNC_3(VAR_6, VAR_8);


  VAR_9 = FUNC_2(VAR_5);
  if (VAR_9)
  {
   int VAR_10 = 1;

   for (VAR_4 = 0; VAR_4 < VAR_7; VAR_4++)
   {
    if ((*VAR_9 & VAR_10) == 0)
     VAR_3++;

    VAR_10 <<= 1;
    if (VAR_10 == 0x100)
    {
     VAR_9++;
     VAR_10 = 1;
    }
   }
  }

  *VAR_1 = VAR_7;
  *VAR_2 = VAR_3;
 }
 else
 {

  for (VAR_4 = 0; VAR_4 < FUNC_8(); VAR_4++)
  {
   if (FUNC_6(VAR_4))
    VAR_3++;
  }

  *VAR_1 = FUNC_8();
  *VAR_2 = VAR_3;
 }

 return 1;
}
