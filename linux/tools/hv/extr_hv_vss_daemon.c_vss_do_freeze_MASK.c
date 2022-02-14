
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int,unsigned int,int ) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int FUNC_3(char *VAR_6, unsigned int VAR_7)
{
 int VAR_8, VAR_9 = FUNC_2(VAR_6, VAR_4);

 if (VAR_9 < 0)
  return 1;

 VAR_8 = FUNC_1(VAR_9, VAR_7, 0);
 if (VAR_8) {
  if ((VAR_7 == VAR_2 && VAR_5 == VAR_0) ||
      (VAR_7 == VAR_3 && VAR_5 == VAR_1)) {
   FUNC_0(VAR_9);
   return 0;
  }
 }

 FUNC_0(VAR_9);
 return !!VAR_8;
}
