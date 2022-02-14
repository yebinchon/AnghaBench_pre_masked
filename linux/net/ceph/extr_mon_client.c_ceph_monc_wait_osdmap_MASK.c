
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ceph_mon_client {int mutex; TYPE_2__* subs; TYPE_1__* client; } ;
struct TYPE_4__ {scalar_t__ have; } ;
struct TYPE_3__ {int auth_wq; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 unsigned long VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 long FUNC_4 (int ,int,int ) ;

int FUNC_5(struct ceph_mon_client *VAR_3, u32 VAR_4,
     unsigned long VAR_5)
{
 unsigned long VAR_6 = VAR_2;
 long VAR_7;

 FUNC_1(&VAR_3->mutex);
 while (VAR_3->subs[VAR_0].have < VAR_4) {
  FUNC_2(&VAR_3->mutex);

  if (VAR_5 && FUNC_3(VAR_2, VAR_6 + VAR_5))
   return -VAR_1;

  VAR_7 = FUNC_4(VAR_3->client->auth_wq,
         VAR_3->subs[VAR_0].have >= VAR_4,
         FUNC_0(VAR_5));
  if (VAR_7 < 0)
   return VAR_7;

  FUNC_1(&VAR_3->mutex);
 }

 FUNC_2(&VAR_3->mutex);
 return 0;
}
