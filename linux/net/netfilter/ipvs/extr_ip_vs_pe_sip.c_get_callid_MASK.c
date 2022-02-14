
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char*,int ,unsigned int) ;
 int FUNC_1 (char const*,unsigned int) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,char const*,unsigned int,unsigned int,int ,unsigned int*,unsigned int*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_3, unsigned int VAR_4,
        unsigned int VAR_5,
        unsigned int *VAR_6, unsigned int *VAR_7)
{

 while (1) {
  int VAR_8 = FUNC_2(((void*)0), VAR_3, VAR_4, VAR_5,
         VAR_2, VAR_6,
         VAR_7);
  if (VAR_8 > 0)
   break;
  if (!VAR_8)
   return -VAR_0;
  VAR_4 += *VAR_6;
 }


 if (*VAR_7 > VAR_1)
  return -VAR_0;


 if (*VAR_6 + *VAR_7 == VAR_5)
  return -VAR_0;



 if (*(VAR_3 + *VAR_6 + *VAR_7) != '\r' &&
     *(VAR_3 + *VAR_6 + *VAR_7) != '\n')
  return -VAR_0;

 FUNC_0(9, "SIP callid %s (%d bytes)\n",
        FUNC_1(VAR_3 + *VAR_6, *VAR_7),
        *VAR_7);
 return 0;
}
