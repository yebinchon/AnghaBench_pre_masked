
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wlc_param ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int FUNC_0 (int ,unsigned int,void*,int) ;

__attribute__((used)) static int FUNC_1(wlc_param VAR_5, void *VAR_6, void *VAR_7)
{
 unsigned int *VAR_8 = ((unsigned int *) VAR_6);
 unsigned int VAR_9 = *VAR_8;

 if (VAR_5 & VAR_1) {
  return FUNC_0(VAR_4, VAR_9, ((void*)0), 0);
 }
 switch(VAR_5 & VAR_2) {
  case 129:
   return FUNC_0(VAR_4, ((VAR_5 & VAR_3) ? (VAR_9) : (VAR_9 >> 16)) & 0xffff, VAR_7, 6);
  case 130:
   return FUNC_0(VAR_4, ((VAR_5 & VAR_3) ? (VAR_9) : (VAR_9 >> 16)) & 0xffff, VAR_7, sizeof(int));
  case 128:
   return FUNC_0(VAR_4, ((VAR_5 & VAR_3) ? (VAR_9) : (VAR_9 >> 16)) & 0xffff, VAR_7, VAR_0);
 }
 return 0;
}
