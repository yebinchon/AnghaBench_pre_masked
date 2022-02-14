
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int ,...) ;
 int FUNC_2 (char*,int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_3(int VAR_2, unsigned int VAR_3)
{
 int VAR_4;
 unsigned int VAR_5;

 VAR_4 = FUNC_1(VAR_2, VAR_1);
 if (VAR_4 < 0)
  VAR_5 = 0;
 else
  VAR_5 = (unsigned int)VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_0, VAR_3);
 if (VAR_4 >= 0) {
  FUNC_2("ADD_SEALS(%d, %u -> %u) didn't fail as expected\n",
    VAR_2, VAR_5, VAR_3);
  FUNC_0();
 }
}
