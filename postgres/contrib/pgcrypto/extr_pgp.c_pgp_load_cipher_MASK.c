
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cipher_info {int int_name; } ;
typedef int PX_Cipher ;


 int VAR_0 ;
 int VAR_1 ;
 struct cipher_info* FUNC_0 (int) ;
 int FUNC_1 (int ,int **) ;

int
FUNC_2(int VAR_2, PX_Cipher **VAR_3)
{
 int VAR_4;
 const struct cipher_info *VAR_5 = FUNC_0(VAR_2);

 if (VAR_5 == ((void*)0))
  return VAR_0;

 VAR_4 = FUNC_1(VAR_5->int_name, VAR_3);
 if (VAR_4 == 0)
  return 0;

 return VAR_1;
}
