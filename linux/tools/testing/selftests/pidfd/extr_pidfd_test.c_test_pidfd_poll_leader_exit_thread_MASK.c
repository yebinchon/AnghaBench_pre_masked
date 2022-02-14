
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void *FUNC_4(void *VAR_2)
{
 FUNC_1("Child Thread: starting. pid %d tid %d ; and sleeping\n",
   FUNC_0(), FUNC_3(VAR_1));
 FUNC_2(VAR_0);
 FUNC_1("Child Thread: DONE. pid %d tid %d\n", FUNC_0(), FUNC_3(VAR_1));
 return ((void*)0);
}
