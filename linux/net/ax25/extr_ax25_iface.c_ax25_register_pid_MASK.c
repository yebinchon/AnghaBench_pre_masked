
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ax25_protocol {struct ax25_protocol* next; } ;


 struct ax25_protocol* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct ax25_protocol *VAR_2)
{
 FUNC_0(&VAR_1);
 VAR_2->next = VAR_0;
 VAR_0 = VAR_2;
 FUNC_1(&VAR_1);
}
