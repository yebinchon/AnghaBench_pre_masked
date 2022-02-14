
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dis386 {size_t bytemode1; int bytemode2; int (* op2 ) (int ,int) ;int (* op1 ) (size_t,int) ;int * name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int* VAR_1 ;
 int *** VAR_2 ;
 int ** VAR_3 ;
 int * VAR_4 ;
 struct dis386** VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *,int) ;
 unsigned char VAR_11 ;
 size_t VAR_12 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (size_t,int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void
FUNC_5 (int VAR_13)
{
  const struct dis386 *VAR_14;
  unsigned char VAR_15;

  VAR_15 = VAR_1[-1];

  if (VAR_6 != 3)
    {
      int VAR_16 = (VAR_15 - 0xd8) * 8 + VAR_11;

      FUNC_1 (VAR_3[VAR_16], VAR_13);
      VAR_8 = VAR_9;
      FUNC_0 (VAR_4[VAR_16], VAR_13);
      return;
    }

  VAR_0;
  VAR_1++;

  VAR_14 = &VAR_5[VAR_15 - 0xd8][VAR_11];
  if (VAR_14->name == ((void*)0))
    {
      FUNC_1 (VAR_2[VAR_14->bytemode1][VAR_12], VAR_13);


      if (VAR_15 == 0xdf && VAR_1[-1] == 0xe0)
 FUNC_2 (VAR_9, VAR_7[0]);
    }
  else
    {
      FUNC_1 (VAR_14->name, VAR_13);

      VAR_8 = VAR_9;
      if (VAR_14->op1)
 (*VAR_14->op1) (VAR_14->bytemode1, VAR_13);
      VAR_8 = VAR_10;
      if (VAR_14->op2)
 (*VAR_14->op2) (VAR_14->bytemode2, VAR_13);
    }
}
