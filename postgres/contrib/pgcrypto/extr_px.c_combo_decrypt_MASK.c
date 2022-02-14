
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint8 ;
struct TYPE_3__ {scalar_t__ padding; int * cipher; } ;
typedef TYPE_1__ PX_Combo ;
typedef int PX_Cipher ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned int const*,unsigned int,unsigned int*) ;

__attribute__((used)) static int
FUNC_2(PX_Combo *VAR_2, const uint8 *VAR_3, unsigned VAR_4,
     uint8 *VAR_5, unsigned *VAR_6)
{
 unsigned VAR_7,
    VAR_8,
    VAR_9;
 unsigned VAR_10;

 PX_Cipher *VAR_11 = VAR_2->cipher;


 if (VAR_4 == 0)
 {

  if (VAR_2->padding)
   return VAR_0;


  *VAR_6 = 0;
  return 0;
 }

 VAR_7 = FUNC_0(VAR_11);
 if (VAR_7 > 1 && (VAR_4 % VAR_7) != 0)
  goto block_error;


 *VAR_6 = VAR_4;
 FUNC_1(VAR_11, VAR_3, VAR_4, VAR_5);


 if (VAR_7 > 1 && VAR_2->padding)
 {
  VAR_9 = VAR_5[*VAR_6 - 1];
  VAR_10 = 0;
  if (VAR_9 > 0 && VAR_9 <= VAR_7 && VAR_9 <= *VAR_6)
  {
   VAR_10 = 1;
   for (VAR_8 = *VAR_6 - VAR_9; VAR_8 < *VAR_6; VAR_8++)
    if (VAR_5[VAR_8] != VAR_9)
    {
     VAR_10 = 0;
     break;
    }
  }

  if (VAR_10)
   *VAR_6 -= VAR_9;
 }

 return 0;

block_error:
 return VAR_1;
}
