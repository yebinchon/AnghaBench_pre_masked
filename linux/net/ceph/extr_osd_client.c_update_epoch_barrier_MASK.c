
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ceph_osd_client {scalar_t__ epoch_barrier; TYPE_1__* osdmap; } ;
struct TYPE_2__ {scalar_t__ epoch; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct ceph_osd_client*) ;

__attribute__((used)) static void FUNC_3(struct ceph_osd_client *VAR_0, u32 VAR_1)
{
 if (FUNC_1(VAR_1 > VAR_0->epoch_barrier)) {
  FUNC_0("updating epoch_barrier from %u to %u\n",
    VAR_0->epoch_barrier, VAR_1);
  VAR_0->epoch_barrier = VAR_1;

  if (VAR_1 > VAR_0->osdmap->epoch)
   FUNC_2(VAR_0);
 }
}
