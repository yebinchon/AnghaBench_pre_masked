
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_osd_request {int r_flags; int r_start_stamp; TYPE_1__* r_osdc; } ;
struct TYPE_2__ {int num_requests; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(struct ceph_osd_request *VAR_5)
{
 FUNC_0(VAR_5->r_flags & (VAR_0 | VAR_1));
 FUNC_0(!(VAR_5->r_flags & (VAR_2 | VAR_3)));

 VAR_5->r_flags |= VAR_1;
 FUNC_1(&VAR_5->r_osdc->num_requests);

 VAR_5->r_start_stamp = VAR_4;
}
