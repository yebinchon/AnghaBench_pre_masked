
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_3__ {int * cipher; } ;
typedef TYPE_1__ PX_Combo ;
typedef int PX_Cipher ;


 int FUNC_0 (int *,int const*,unsigned int) ;
 int FUNC_1 (int *,int ,unsigned int) ;
 int * FUNC_2 (unsigned int) ;
 int FUNC_3 (int *,int *,unsigned int,int *) ;
 unsigned int FUNC_4 (int *) ;
 unsigned int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(PX_Combo *VAR_0, const uint8 *VAR_1, unsigned VAR_2,
     const uint8 *VAR_3, unsigned VAR_4)
{
 int VAR_5;
 unsigned VAR_6,
    VAR_7;
 PX_Cipher *VAR_8 = VAR_0->cipher;
 uint8 *VAR_9 = ((void*)0);
 uint8 *VAR_10;

 VAR_6 = FUNC_5(VAR_8);

 VAR_7 = FUNC_4(VAR_8);
 if (VAR_7 > 0)
 {
  VAR_9 = FUNC_2(VAR_7);
  FUNC_1(VAR_9, 0, VAR_7);
  if (VAR_4 > VAR_7)
   FUNC_0(VAR_9, VAR_3, VAR_7);
  else
   FUNC_0(VAR_9, VAR_3, VAR_4);
 }

 if (VAR_2 > VAR_6)
  VAR_2 = VAR_6;
 VAR_10 = FUNC_2(VAR_6);
 FUNC_1(VAR_10, 0, VAR_6);
 FUNC_0(VAR_10, VAR_1, VAR_2);

 VAR_5 = FUNC_3(VAR_8, VAR_10, VAR_2, VAR_9);

 if (VAR_9)
  FUNC_6(VAR_9);
 FUNC_6(VAR_10);

 return VAR_5;
}
