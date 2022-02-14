
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_netdev_t {int used_len; int filter_idx; int * devices; scalar_t__ array_len; } ;
struct bpf_attach_info {scalar_t__ flow_dissector_id; } ;
typedef int err_buf ;


 int FUNC_0 (char*,char*,scalar_t__) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (char*,char*) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (unsigned int*) ;
 int FUNC_10 (int,unsigned int,int ,struct bpf_netdev_t*) ;
 int FUNC_11 (int,char*,int) ;
 int FUNC_12 (int*,char***) ;
 int FUNC_13 (struct bpf_attach_info*) ;
 int FUNC_14 (int,unsigned int,int *) ;
 int VAR_5 ;
 int FUNC_15 () ;

__attribute__((used)) static int FUNC_16(int VAR_6, char **VAR_7)
{
 struct bpf_attach_info VAR_8 = {};
 int VAR_9, VAR_10, VAR_11, VAR_12 = -1;
 struct bpf_netdev_t VAR_13;
 unsigned int VAR_14;
 char VAR_15[256];

 if (VAR_6 == 2) {
  VAR_12 = FUNC_12(&VAR_6, &VAR_7);
  if (VAR_12 < 1)
   return -1;
 } else if (VAR_6 != 0) {
  FUNC_15();
 }

 VAR_11 = FUNC_13(&VAR_8);
 if (VAR_11)
  return -1;

 VAR_10 = FUNC_9(&VAR_14);
 if (VAR_10 < 0) {
  FUNC_4(VAR_5, "failed to open netlink sock\n");
  return -1;
 }

 VAR_13.devices = ((void*)0);
 VAR_13.used_len = 0;
 VAR_13.array_len = 0;
 VAR_13.filter_idx = VAR_12;

 if (VAR_3)
  FUNC_8(VAR_4);
 VAR_1;
 FUNC_2("xdp", "%s:\n");
 VAR_11 = FUNC_10(VAR_10, VAR_14, VAR_2, &VAR_13);
 FUNC_1("\n");

 if (!VAR_11) {
  FUNC_2("tc", "%s:\n");
  for (VAR_9 = 0; VAR_9 < VAR_13.used_len; VAR_9++) {
   VAR_11 = FUNC_14(VAR_10, VAR_14,
           &VAR_13.devices[VAR_9]);
   if (VAR_11)
    break;
  }
  FUNC_1("\n");
 }

 FUNC_2("flow_dissector", "%s:\n");
 if (VAR_8.flow_dissector_id > 0)
  FUNC_0("id", "id %u", VAR_8.flow_dissector_id);
 FUNC_1("\n");

 VAR_0;
 if (VAR_3)
  FUNC_6(VAR_4);

 if (VAR_11) {
  if (VAR_3)
   FUNC_7(VAR_4);
  FUNC_11(VAR_11, VAR_15, sizeof(VAR_15));
  FUNC_4(VAR_5, "Error: %s\n", VAR_15);
 }
 FUNC_5(VAR_13.devices);
 FUNC_3(VAR_10);
 return VAR_11;
}
