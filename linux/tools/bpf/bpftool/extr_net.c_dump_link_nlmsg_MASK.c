
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct ip_devname_ifindex {int dummy; } ;
struct ifinfomsg {scalar_t__ ifi_index; } ;
struct bpf_netdev_t {scalar_t__ filter_idx; int used_len; int array_len; TYPE_1__* devices; } ;
struct TYPE_3__ {scalar_t__ ifindex; int devname; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct ifinfomsg*,struct nlattr**) ;
 char* FUNC_1 (struct nlattr*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ,int,char*,char*) ;

__attribute__((used)) static int FUNC_4(void *VAR_2, void *VAR_3, struct nlattr **VAR_4)
{
 struct bpf_netdev_t *VAR_5 = VAR_2;
 struct ifinfomsg *VAR_6 = VAR_3;

 if (VAR_5->filter_idx > 0 && VAR_5->filter_idx != VAR_6->ifi_index)
  return 0;

 if (VAR_5->used_len == VAR_5->array_len) {
  VAR_5->devices = FUNC_2(VAR_5->devices,
   (VAR_5->array_len + 16) *
   sizeof(struct ip_devname_ifindex));
  if (!VAR_5->devices)
   return -VAR_0;

  VAR_5->array_len += 16;
 }
 VAR_5->devices[VAR_5->used_len].ifindex = VAR_6->ifi_index;
 FUNC_3(VAR_5->devices[VAR_5->used_len].devname,
   sizeof(VAR_5->devices[VAR_5->used_len].devname),
   "%s",
   VAR_4[VAR_1]
    ? FUNC_1(VAR_4[VAR_1])
    : "");
 VAR_5->used_len++;

 return FUNC_0(VAR_6, VAR_4);
}
