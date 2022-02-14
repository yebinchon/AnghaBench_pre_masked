
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {TYPE_1__* auth; } ;
struct ceph_client {TYPE_2__ monc; } ;
struct TYPE_3__ {int global_id; } ;



u64 FUNC_0(struct ceph_client *VAR_0)
{
 return VAR_0->monc.auth->global_id;
}
