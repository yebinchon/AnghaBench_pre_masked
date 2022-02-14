
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int const) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;

int FUNC_2(const int VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 == -1) {
  FUNC_1("Failed to close GPIO LINEHANDLE device file");
  VAR_2 = -VAR_0;
 }

 return VAR_2;
}
