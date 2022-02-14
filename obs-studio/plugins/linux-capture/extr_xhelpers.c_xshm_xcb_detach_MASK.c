
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int shmid; scalar_t__ data; int seg; int xcb; } ;
typedef TYPE_1__ xcb_shm_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,int ,int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(xcb_shm_t *VAR_1)
{
 if (!VAR_1)
  return;

 FUNC_3(VAR_1->xcb, VAR_1->seg);

 if ((char *)VAR_1->data != (char *)-1)
  FUNC_2(VAR_1->data);

 if (VAR_1->shmid != -1)
  FUNC_1(VAR_1->shmid, VAR_0, ((void*)0));

 FUNC_0(VAR_1);
}
