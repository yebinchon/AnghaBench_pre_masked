
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ip_devname_ifindex {int ifindex; int devname; } ;
struct bpf_tcinfo_t {int used_len; int is_qdisc; TYPE_1__* handle_array; scalar_t__ array_len; } ;
struct bpf_filter_t {char* kind; int ifindex; int devname; } ;
struct TYPE_2__ {char* kind; int handle; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int,unsigned int,int ,int ,struct bpf_tcinfo_t*) ;
 int FUNC_3 (int,unsigned int,int ,int,int ,struct bpf_filter_t*) ;
 int FUNC_4 (int,unsigned int,int ,int ,struct bpf_tcinfo_t*) ;

__attribute__((used)) static int FUNC_5(int VAR_6, unsigned int VAR_7,
      struct ip_devname_ifindex *VAR_8)
{
 struct bpf_filter_t VAR_9;
 struct bpf_tcinfo_t VAR_10;
 int VAR_11, VAR_12, VAR_13 = 0;

 VAR_10.handle_array = ((void*)0);
 VAR_10.used_len = 0;
 VAR_10.array_len = 0;

 VAR_10.is_qdisc = 0;
 VAR_13 = FUNC_2(VAR_6, VAR_7, VAR_8->ifindex,
      VAR_4, &VAR_10);
 if (VAR_13)
  goto out;

 VAR_10.is_qdisc = 1;
 VAR_13 = FUNC_4(VAR_6, VAR_7, VAR_8->ifindex,
      VAR_4, &VAR_10);
 if (VAR_13)
  goto out;

 VAR_9.devname = VAR_8->devname;
 VAR_9.ifindex = VAR_8->ifindex;
 for (VAR_11 = 0; VAR_11 < VAR_10.used_len; VAR_11++) {
  VAR_9.kind = VAR_10.handle_array[VAR_11].kind;
  VAR_13 = FUNC_3(VAR_6, VAR_7, VAR_8->ifindex,
        VAR_10.handle_array[VAR_11].handle,
        VAR_5, &VAR_9);
  if (VAR_13)
   goto out;
 }


 VAR_12 = VAR_3;
 VAR_9.kind = "root";
 VAR_13 = FUNC_3(VAR_6, VAR_7, VAR_8->ifindex, VAR_12,
       VAR_5, &VAR_9);
 if (VAR_13)
  goto out;

 VAR_12 = FUNC_0(VAR_0, VAR_2);
 VAR_9.kind = "clsact/ingress";
 VAR_13 = FUNC_3(VAR_6, VAR_7, VAR_8->ifindex, VAR_12,
       VAR_5, &VAR_9);
 if (VAR_13)
  goto out;

 VAR_12 = FUNC_0(VAR_0, VAR_1);
 VAR_9.kind = "clsact/egress";
 VAR_13 = FUNC_3(VAR_6, VAR_7, VAR_8->ifindex, VAR_12,
       VAR_5, &VAR_9);
 if (VAR_13)
  goto out;

out:
 FUNC_1(VAR_10.handle_array);
 return 0;
}
