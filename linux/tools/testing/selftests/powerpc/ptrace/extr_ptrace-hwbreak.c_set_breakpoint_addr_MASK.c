
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int ,void*) ;

__attribute__((used)) static void FUNC_3(void *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_1, 0, VAR_2);
 if (VAR_3) {
  FUNC_1("Can't set breakpoint addr\n");
  FUNC_0(-1);
 }
}
