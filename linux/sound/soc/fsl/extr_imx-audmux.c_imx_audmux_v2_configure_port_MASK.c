
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

int FUNC_5(unsigned int VAR_6, unsigned int VAR_7,
  unsigned int VAR_8)
{
 int VAR_9;

 if (VAR_5 != VAR_2)
  return -VAR_0;

 if (!VAR_3)
  return -VAR_1;

 if (VAR_4) {
  VAR_9 = FUNC_3(VAR_4);
  if (VAR_9)
   return VAR_9;
 }

 FUNC_4(VAR_7, VAR_3 + FUNC_1(VAR_6));
 FUNC_4(VAR_8, VAR_3 + FUNC_0(VAR_6));

 if (VAR_4)
  FUNC_2(VAR_4);

 return 0;
}
