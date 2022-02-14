
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32 ;
typedef int STREAM ;
typedef int HASH_KEY ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int,int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(void)
{
 STREAM VAR_3;
 HASH_KEY VAR_4[VAR_0];
 uint32 VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_6 = 0;
 VAR_5 = FUNC_4(2, VAR_4);

 while (VAR_6 < VAR_5)
 {
  VAR_7 = FUNC_0(VAR_5 - VAR_6, 169);

  VAR_3 = FUNC_5(24 + VAR_7 * sizeof(HASH_KEY));

  VAR_8 = 0;
  if (VAR_6 == 0)
   VAR_8 |= VAR_1;
  if (VAR_5 - VAR_6 <= 169)
   VAR_8 |= VAR_2;


  FUNC_2(VAR_3, 0);
  FUNC_1(VAR_3, VAR_7);
  FUNC_1(VAR_3, 0);
  FUNC_1(VAR_3, 0);
  FUNC_1(VAR_3, 0);
  FUNC_1(VAR_3, 0);
  FUNC_1(VAR_3, VAR_5);
  FUNC_2(VAR_3, 0);
  FUNC_2(VAR_3, VAR_8);


  FUNC_3(VAR_3, VAR_4[VAR_6], VAR_7 * sizeof(HASH_KEY));

  FUNC_7(VAR_3);
  FUNC_6(VAR_3, 0x2b);

  VAR_6 += 169;
 }
}
