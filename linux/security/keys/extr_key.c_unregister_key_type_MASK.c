
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_type {int name; int link; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct key_type*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct key_type *VAR_1)
{
 FUNC_0(&VAR_0);
 FUNC_3(&VAR_1->link);
 FUNC_1(&VAR_0);
 FUNC_2(VAR_1);
 FUNC_4("Key type %s unregistered\n", VAR_1->name);
 FUNC_5(&VAR_0);
}
