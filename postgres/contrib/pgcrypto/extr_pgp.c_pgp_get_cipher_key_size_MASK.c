
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cipher_info {int key_len; } ;


 struct cipher_info* FUNC_0 (int) ;

int
FUNC_1(int VAR_0)
{
 const struct cipher_info *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1 != ((void*)0))
  return VAR_1->key_len;
 return 0;
}
