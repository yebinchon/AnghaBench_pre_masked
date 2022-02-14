
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*,char const*) ;
 void* FUNC_2 (char const*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char const*,char const*) ;

int FUNC_5(int VAR_0, char *VAR_1[])
{
 const char *VAR_2, *VAR_3, *VAR_4;
 void *VAR_5;

 if (VAR_0 != 4)
  FUNC_3();

 VAR_2 = VAR_1[1];
 VAR_3 = VAR_1[2];
 VAR_4 = VAR_1[3];

 FUNC_4("cmd_%s := %s\n\n", VAR_3, VAR_4);

 VAR_5 = FUNC_2(VAR_2);
 FUNC_1(VAR_5, VAR_3);
 FUNC_0(VAR_5);

 return 0;
}
