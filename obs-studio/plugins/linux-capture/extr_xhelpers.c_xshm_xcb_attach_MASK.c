
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int shmid; int data; int seg; int * xcb; } ;
typedef TYPE_1__ xcb_shm_t ;
typedef int xcb_connection_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int,int *,int ) ;
 int FUNC_2 (int ,int const,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int,int) ;
 int FUNC_5 (TYPE_1__*) ;

xcb_shm_t *FUNC_6(xcb_connection_t *VAR_2, const int VAR_3, const int VAR_4)
{
 if (!VAR_2)
  return ((void*)0);

 xcb_shm_t *VAR_5 = FUNC_0(sizeof(xcb_shm_t));
 VAR_5->xcb = VAR_2;
 VAR_5->seg = FUNC_3(VAR_5->xcb);

 VAR_5->shmid = FUNC_2(VAR_1, VAR_3 * VAR_4 * 4, VAR_0 | 0777);
 if (VAR_5->shmid == -1)
  goto fail;

 FUNC_4(VAR_5->xcb, VAR_5->seg, VAR_5->shmid, 0);

 VAR_5->data = FUNC_1(VAR_5->shmid, ((void*)0), 0);

 return VAR_5;
fail:
 FUNC_5(VAR_5);
 return ((void*)0);
}
