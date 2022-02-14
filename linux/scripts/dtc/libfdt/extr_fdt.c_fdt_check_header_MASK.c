
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (size_t,size_t,int ,int ) ;
 int FUNC_1 (size_t,size_t,int ) ;
 size_t FUNC_2 (void const*) ;
 int FUNC_3 (void const*) ;
 scalar_t__ FUNC_4 (void const*) ;
 int FUNC_5 (void const*) ;
 int FUNC_6 (void const*) ;
 int FUNC_7 (void const*) ;
 int FUNC_8 (void const*) ;
 int FUNC_9 (void const*) ;
 size_t FUNC_10 (void const*) ;
 int FUNC_11 (void const*) ;

int FUNC_12(const void *VAR_7)
{
 size_t VAR_8;

 if (FUNC_4(VAR_7) != VAR_5)
  return -VAR_0;
 VAR_8 = FUNC_2(VAR_7);
 if ((FUNC_11(VAR_7) < VAR_3)
     || (FUNC_3(VAR_7) > VAR_4))
  return -VAR_1;
 if (FUNC_11(VAR_7) < FUNC_3(VAR_7))
  return -VAR_1;

 if ((FUNC_10(VAR_7) < VAR_8)
     || (FUNC_10(VAR_7) > VAR_6))
  return -VAR_2;


 if (!FUNC_1(VAR_8, FUNC_10(VAR_7), FUNC_7(VAR_7)))
  return -VAR_2;


 if (FUNC_11(VAR_7) < 17) {
  if (!FUNC_1(VAR_8, FUNC_10(VAR_7),
    FUNC_6(VAR_7)))
   return -VAR_2;
 } else {
  if (!FUNC_0(VAR_8, FUNC_10(VAR_7),
      FUNC_6(VAR_7),
      FUNC_9(VAR_7)))
   return -VAR_2;
 }


 if (!FUNC_0(VAR_8, FUNC_10(VAR_7),
     FUNC_5(VAR_7), FUNC_8(VAR_7)))
  return -VAR_2;

 return 0;
}
