
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 void* FUNC_3 (void*,size_t) ;
 int VAR_1 ;

void *
FUNC_4(void *VAR_2, size_t VAR_3)
{
 void *VAR_4;


 if (VAR_2 == ((void*)0) && VAR_3 == 0)
  VAR_3 = 1;
 VAR_4 = FUNC_3(VAR_2, VAR_3);
 if (!VAR_4)
 {
  FUNC_2(VAR_1, "%s", FUNC_0("out of memory\n"));
  FUNC_1(VAR_0);
 }
 return VAR_4;
}
