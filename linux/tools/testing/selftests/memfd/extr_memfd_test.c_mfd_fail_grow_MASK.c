
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int,int ,int ,int) ;
 int FUNC_2 (int,int) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(int VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1, VAR_0 * 2);
 if (VAR_2 >= 0) {
  FUNC_3("ftruncate(GROW) didn't fail as expected\n");
  FUNC_0();
 }

 VAR_2 = FUNC_1(VAR_1,
        0,
        0,
        VAR_0 * 4);
 if (VAR_2 >= 0) {
  FUNC_3("fallocate(ALLOC) didn't fail as expected\n");
  FUNC_0();
 }
}
