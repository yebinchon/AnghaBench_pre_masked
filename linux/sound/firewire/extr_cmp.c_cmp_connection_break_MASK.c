
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmp_connection {int connected; int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct cmp_connection*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (struct cmp_connection*,int ,int *,int ) ;

void FUNC_4(struct cmp_connection *VAR_2)
{
 int VAR_3;

 FUNC_1(&VAR_2->mutex);

 if (!VAR_2->connected) {
  FUNC_2(&VAR_2->mutex);
  return;
 }

 VAR_3 = FUNC_3(VAR_2, VAR_1, ((void*)0), VAR_0);
 if (VAR_3 < 0)
  FUNC_0(VAR_2, "plug is still connected\n");

 VAR_2->connected = 0;

 FUNC_2(&VAR_2->mutex);
}
