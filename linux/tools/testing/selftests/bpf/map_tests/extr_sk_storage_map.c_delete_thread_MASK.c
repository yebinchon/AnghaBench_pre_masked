
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int*) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,int,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void *FUNC_6(void *VAR_4)
{
 int VAR_5 = FUNC_1(VAR_2);
 int VAR_6 = *(int *)VAR_4;
 int VAR_7 = 0;

 while (!FUNC_4()) {
  VAR_7 = FUNC_2(VAR_5, &VAR_6);
  if (VAR_7 && VAR_1 != VAR_0) {
   VAR_7 = -VAR_1;
   FUNC_3(VAR_3, "bpf_map_delete_elem: %d %d\n",
    VAR_7, VAR_1);
   break;
  }
 }

 if (!FUNC_4()) {
  FUNC_5();
  return FUNC_0(VAR_7);
 }

 return ((void*)0);
}
