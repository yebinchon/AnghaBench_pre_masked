
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {int array; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char const*,int ,int ) ;
 int FUNC_1 () ;
 void* FUNC_2 (int ,int) ;
 int FUNC_3 (struct dstr*,char*) ;
 int FUNC_4 (struct dstr*,char*) ;
 int FUNC_5 (struct dstr*) ;
 int FUNC_6 (struct dstr*,char const*) ;

void *FUNC_7(const char *VAR_3)
{
 struct dstr VAR_4;

 if (!VAR_3)
  return ((void*)0);

 FUNC_6(&VAR_4, VAR_3);



 if (!FUNC_4(&VAR_4, ".so"))

  FUNC_3(&VAR_4, ".so");




 void *VAR_5 = FUNC_2(VAR_4.array, VAR_2);

 if (!VAR_5)
  FUNC_0(VAR_0, "os_dlopen(%s->%s): %s\n", VAR_3,
       VAR_4.array, FUNC_1());

 FUNC_5(&VAR_4);
 return VAR_5;
}
