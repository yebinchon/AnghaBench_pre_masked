
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ceph_options {int num_mon; struct ceph_entity_addr* mon_addr; } ;
struct ceph_mon_client {TYPE_4__* monmap; TYPE_1__* client; } ;
struct ceph_entity_addr {scalar_t__ nonce; } ;
struct TYPE_9__ {int num_mon; TYPE_3__* mon_inst; } ;
struct TYPE_7__ {int num; int type; } ;
struct TYPE_8__ {TYPE_2__ name; struct ceph_entity_addr addr; } ;
struct TYPE_6__ {struct ceph_options* options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_4__* FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_4__*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ceph_mon_client *VAR_4)
{
 struct ceph_options *VAR_5 = VAR_4->client->options;
 struct ceph_entity_addr *VAR_6 = VAR_5->mon_addr;
 int VAR_7 = VAR_5->num_mon;
 int VAR_8;


 VAR_4->monmap = FUNC_1(FUNC_2(VAR_4->monmap, VAR_3, VAR_7),
          VAR_2);
 if (!VAR_4->monmap)
  return -VAR_1;
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  VAR_4->monmap->mon_inst[VAR_8].addr = VAR_6[VAR_8];
  VAR_4->monmap->mon_inst[VAR_8].addr.nonce = 0;
  VAR_4->monmap->mon_inst[VAR_8].name.type =
   VAR_0;
  VAR_4->monmap->mon_inst[VAR_8].name.num = FUNC_0(VAR_8);
 }
 VAR_4->monmap->num_mon = VAR_7;
 return 0;
}
