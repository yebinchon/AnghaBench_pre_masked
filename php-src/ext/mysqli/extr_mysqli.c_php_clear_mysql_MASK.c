
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int li_read; int * hash_key; } ;
typedef TYPE_1__ MY_MYSQL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(MY_MYSQL *VAR_0) {
 if (VAR_0->hash_key) {
  FUNC_2(VAR_0->hash_key, 0);
  VAR_0->hash_key = ((void*)0);
 }
 if (!FUNC_1(VAR_0->li_read)) {
  FUNC_3(&(VAR_0->li_read));
  FUNC_0(&VAR_0->li_read);
 }
}
