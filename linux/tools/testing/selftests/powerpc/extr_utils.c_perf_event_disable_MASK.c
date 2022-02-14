
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (char*) ;

int FUNC_2(int VAR_2)
{
 if (FUNC_0(VAR_2, VAR_0, VAR_1) == -1) {
  FUNC_1("error disabling perf events");
  return -1;
 }

 return 0;
}
