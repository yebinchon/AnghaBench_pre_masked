
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 unsigned int FUNC_1 (unsigned int,char*,int ) ;
 unsigned long VAR_1 ;
 unsigned long FUNC_2 (unsigned long) ;
 int FUNC_3 (int (*) (void*,char const*,struct module*,unsigned long),void*) ;

int FUNC_4(int (*VAR_2)(void *, const char *, struct module *,
          unsigned long),
       void *VAR_3)
{
 char VAR_4[VAR_0];
 unsigned long VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 for (VAR_5 = 0, VAR_6 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_6 = FUNC_1(VAR_6, VAR_4, FUNC_0(VAR_4));
  VAR_7 = VAR_2(VAR_3, VAR_4, ((void*)0), FUNC_2(VAR_5));
  if (VAR_7 != 0)
   return VAR_7;
 }
 return FUNC_3(VAR_2, VAR_3);
}
