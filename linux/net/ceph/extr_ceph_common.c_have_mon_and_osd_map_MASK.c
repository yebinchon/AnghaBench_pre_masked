
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* osdmap; } ;
struct TYPE_6__ {TYPE_1__* monmap; } ;
struct ceph_client {TYPE_4__ osdc; TYPE_2__ monc; } ;
struct TYPE_7__ {scalar_t__ epoch; } ;
struct TYPE_5__ {scalar_t__ epoch; } ;



__attribute__((used)) static bool FUNC_0(struct ceph_client *VAR_0)
{
 return VAR_0->monc.monmap && VAR_0->monc.monmap->epoch &&
        VAR_0->osdc.osdmap && VAR_0->osdc.osdmap->epoch;
}
