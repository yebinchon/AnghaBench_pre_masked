
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int,int ,int ,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int VAR_0 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(int VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1, VAR_0 * 2);
 if (VAR_2 < 0) {
  FUNC_4("ftruncate(GROW) failed: %m\n");
  FUNC_0();
 }

 FUNC_3(VAR_1, VAR_0 * 2);

 VAR_2 = FUNC_1(VAR_1,
        0,
        0,
        VAR_0 * 4);
 if (VAR_2 < 0) {
  FUNC_4("fallocate(ALLOC) failed: %m\n");
  FUNC_0();
 }

 FUNC_3(VAR_1, VAR_0 * 4);
}
