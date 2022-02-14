
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_4__ {TYPE_1__* osdmap; } ;
struct ceph_client {int monc; TYPE_2__ osdc; } ;
struct TYPE_3__ {scalar_t__ epoch; } ;


 int FUNC_0 (int *,char*,scalar_t__*) ;
 int FUNC_1 (int *,scalar_t__,unsigned long) ;
 int FUNC_2 (TYPE_2__*) ;

int FUNC_3(struct ceph_client *VAR_0,
    unsigned long VAR_1)
{
 u64 VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_0->monc, "osdmap", &VAR_2);
 if (VAR_3)
  return VAR_3;

 if (VAR_0->osdc.osdmap->epoch >= VAR_2)
  return 0;

 FUNC_2(&VAR_0->osdc);
 return FUNC_1(&VAR_0->monc, VAR_2, VAR_1);
}
