
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int * VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static void FUNC_2(void)
{
  VAR_3 = FUNC_0(((void*)0), VAR_1, VAR_0, ((void*)0));
  FUNC_1(VAR_3 != ((void*)0), "CreateEvent failed\n");
  VAR_4 = FUNC_0(((void*)0), VAR_1, VAR_0, ((void*)0));
  FUNC_1(VAR_4 != ((void*)0), "CreateEvent failed\n");
  VAR_2 = -1;
}
