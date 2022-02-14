
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*) ;
 size_t FUNC_2 (void*) ;
 int FUNC_3 (void*,int) ;
 int FUNC_4 (void*,int) ;
 size_t FUNC_5 (void*) ;
 size_t FUNC_6 (void*) ;
 size_t FUNC_7 (void*) ;
 int FUNC_8 (void*,void*,size_t) ;

int FUNC_9(void *VAR_2, void *VAR_3, int VAR_4)
{
 size_t VAR_5, VAR_6;
 char *VAR_7, *VAR_8;

 FUNC_0(VAR_2);

 VAR_5 = FUNC_2(VAR_2) + FUNC_6(VAR_2);
 VAR_6 = FUNC_5(VAR_2);

 if ((VAR_5 + VAR_6) > FUNC_7(VAR_2))
  return -VAR_0;

 if ((VAR_5 + VAR_6) > VAR_4)
  return -VAR_1;

 VAR_7 = (char *)VAR_2 + FUNC_7(VAR_2) - VAR_6;
 VAR_8 = (char *)VAR_3 + VAR_4 - VAR_6;



 if (VAR_3 <= VAR_2) {
  FUNC_8(VAR_3, VAR_2, VAR_5);
  FUNC_8(VAR_8, VAR_7, VAR_6);
 } else {
  FUNC_8(VAR_8, VAR_7, VAR_6);
  FUNC_8(VAR_3, VAR_2, VAR_5);
 }

 FUNC_4(VAR_3, VAR_4);
 if (FUNC_1(VAR_3))
  FUNC_3(VAR_3, VAR_4);

 return 0;
}
