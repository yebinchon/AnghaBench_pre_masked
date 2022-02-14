
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (unsigned long,unsigned long*,unsigned long*,char**,char*) ;
 char* FUNC_1 (unsigned long,unsigned long*,unsigned long*,char**,char*) ;
 int FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 (unsigned long,unsigned long*,unsigned long*) ;
 scalar_t__ FUNC_4 (unsigned long) ;
 int FUNC_5 (int ,char*,int) ;
 char* FUNC_6 (unsigned long,unsigned long*,unsigned long*,char**,char*) ;

const char *FUNC_7(unsigned long VAR_1,
       unsigned long *VAR_2,
       unsigned long *VAR_3,
       char **VAR_4, char *VAR_5)
{
 const char *VAR_6;

 VAR_5[VAR_0 - 1] = 0;
 VAR_5[0] = 0;

 if (FUNC_4(VAR_1)) {
  unsigned long VAR_7;

  VAR_7 = FUNC_3(VAR_1, VAR_2, VAR_3);

  FUNC_5(FUNC_2(VAR_7),
           VAR_5, VAR_0);
  if (VAR_4)
   *VAR_4 = ((void*)0);
  return VAR_5;
 }


 VAR_6 = FUNC_6(VAR_1, VAR_2, VAR_3,
        VAR_4, VAR_5);
 if (!VAR_6)
  VAR_6 = FUNC_0(VAR_1, VAR_2,
      VAR_3, VAR_4, VAR_5);

 if (!VAR_6)
  VAR_6 = FUNC_1(VAR_1, VAR_2,
      VAR_3, VAR_4, VAR_5);
 return VAR_6;
}
