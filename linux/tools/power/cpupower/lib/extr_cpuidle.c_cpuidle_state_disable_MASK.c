
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int disable ;


 size_t VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int,unsigned int,int ) ;
 int FUNC_2 (unsigned int,unsigned int,char*,char*,int) ;
 int * VAR_2 ;
 int FUNC_3 (char*,int,char*,unsigned int) ;

int FUNC_4(unsigned int VAR_3,
       unsigned int VAR_4,
       unsigned int VAR_5)
{
 char VAR_6[VAR_1];
 int VAR_7;

 if (FUNC_0(VAR_3) <= VAR_4)
  return -1;

 if (!FUNC_1(VAR_3, VAR_4,
     VAR_2[VAR_0]))
  return -2;

 FUNC_3(VAR_6, VAR_1, "%u", VAR_5);

 VAR_7 = FUNC_2(VAR_3, VAR_4, "disable",
         VAR_6, sizeof(VAR_5));
 if (VAR_7)
  return 0;
 return -3;
}
