
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sock {int dummy; } ;
struct mgmt_rp_read_commands {int * opcodes; void* num_events; void* num_commands; } ;
struct hci_dev {int dummy; } ;
typedef int __le16 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,struct sock*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct sock*,int ) ;
 int FUNC_4 (struct mgmt_rp_read_commands*) ;
 struct mgmt_rp_read_commands* FUNC_5 (size_t,int ) ;
 int FUNC_6 (struct sock*,int ,int ,int ,struct mgmt_rp_read_commands*,size_t) ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct sock *VAR_9, struct hci_dev *VAR_10, void *VAR_11,
    u16 VAR_12)
{
 struct mgmt_rp_read_commands *VAR_13;
 u16 VAR_14, VAR_15;
 size_t VAR_16;
 int VAR_17, VAR_18;

 FUNC_1("sock %p", VAR_9);

 if (FUNC_3(VAR_9, VAR_2)) {
  VAR_14 = FUNC_0(VAR_5);
  VAR_15 = FUNC_0(VAR_6);
 } else {
  VAR_14 = FUNC_0(VAR_7);
  VAR_15 = FUNC_0(VAR_8);
 }

 VAR_16 = sizeof(*VAR_13) + ((VAR_14 + VAR_15) * sizeof(u16));

 VAR_13 = FUNC_5(VAR_16, VAR_1);
 if (!VAR_13)
  return -VAR_0;

 VAR_13->num_commands = FUNC_2(VAR_14);
 VAR_13->num_events = FUNC_2(VAR_15);

 if (FUNC_3(VAR_9, VAR_2)) {
  __le16 *VAR_19 = VAR_13->opcodes;

  for (VAR_17 = 0; VAR_17 < VAR_14; VAR_17++, VAR_19++)
   FUNC_7(VAR_5[VAR_17], VAR_19);

  for (VAR_17 = 0; VAR_17 < VAR_15; VAR_17++, VAR_19++)
   FUNC_7(VAR_6[VAR_17], VAR_19);
 } else {
  __le16 *VAR_20 = VAR_13->opcodes;

  for (VAR_17 = 0; VAR_17 < VAR_14; VAR_17++, VAR_20++)
   FUNC_7(VAR_7[VAR_17], VAR_20);

  for (VAR_17 = 0; VAR_17 < VAR_15; VAR_17++, VAR_20++)
   FUNC_7(VAR_8[VAR_17], VAR_20);
 }

 VAR_18 = FUNC_6(VAR_9, VAR_3, VAR_4, 0,
    VAR_13, VAR_16);
 FUNC_4(VAR_13);

 return VAR_18;
}
