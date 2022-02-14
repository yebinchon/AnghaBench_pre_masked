
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int ,unsigned int) ;
 unsigned int FUNC_2 (int) ;
 int FUNC_3 (char*,int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_4(int VAR_1, unsigned int VAR_2)
{
 int VAR_3;
 unsigned int VAR_4;

 VAR_4 = FUNC_2(VAR_1);
 VAR_3 = FUNC_1(VAR_1, VAR_0, VAR_2);
 if (VAR_3 < 0) {
  FUNC_3("ADD_SEALS(%d, %u -> %u) failed: %m\n", VAR_1, VAR_4, VAR_2);
  FUNC_0();
 }
}
