
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (int ,int ,int *,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (char*,char*,char const*,int,int,int,int) ;
 int FUNC_4 (int,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_5(char *VAR_5, int VAR_6, int VAR_7,
          int VAR_8, int VAR_9)
{
 const char *VAR_10;
 int VAR_11;

 if (VAR_6 == VAR_0)
  VAR_10 = "write";
 else
  VAR_10 = "read";

 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  FUNC_2(&VAR_4[VAR_11], VAR_11);
  FUNC_4(VAR_11, VAR_6, VAR_7, VAR_8, VAR_9, 1);
  FUNC_1(VAR_2, VAR_3, ((void*)0), 0);
  FUNC_3(VAR_5,
   "Test %s watchpoint %d with len: %d local: %d global: %d\n",
   VAR_10, VAR_11, VAR_7, VAR_8, VAR_9);
  FUNC_0(VAR_5);
  FUNC_4(VAR_11, VAR_6, VAR_7, VAR_8, VAR_9, 0);
 }
}
