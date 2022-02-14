
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int sk; } ;
struct ncsi_pkt_hdr {int length; int type; } ;
struct TYPE_2__ {int dev; } ;
struct ncsi_dev_priv {TYPE_1__ ndev; } ;
struct ncsi_cmd_arg {unsigned char package; unsigned char channel; unsigned char* data; int payload; struct genl_info* info; int req_flags; int type; struct ncsi_dev_priv* ndp; } ;
struct genl_info {int nlhdr; int snd_portid; int snd_seq; int * attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,int) ;
 int FUNC_2 (struct ncsi_cmd_arg*) ;
 struct ncsi_dev_priv* FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_10, struct genl_info *VAR_11)
{
 struct ncsi_dev_priv *VAR_12;
 struct ncsi_pkt_hdr *VAR_13;
 struct ncsi_cmd_arg VAR_14;
 unsigned char *VAR_15;
 u32 VAR_16;
 u32 VAR_17;
 int VAR_18, VAR_19;

 if (!VAR_11 || !VAR_11->attrs) {
  VAR_19 = -VAR_0;
  goto out;
 }

 if (!VAR_11->attrs[VAR_5]) {
  VAR_19 = -VAR_0;
  goto out;
 }

 if (!VAR_11->attrs[VAR_6]) {
  VAR_19 = -VAR_0;
  goto out;
 }

 if (!VAR_11->attrs[VAR_3]) {
  VAR_19 = -VAR_0;
  goto out;
 }

 if (!VAR_11->attrs[VAR_4]) {
  VAR_19 = -VAR_0;
  goto out;
 }

 VAR_12 = FUNC_3(FUNC_0(FUNC_10(VAR_10->sk)),
          FUNC_7(VAR_11->attrs[VAR_5]));
 if (!VAR_12) {
  VAR_19 = -VAR_1;
  goto out;
 }

 VAR_16 = FUNC_7(VAR_11->attrs[VAR_6]);
 VAR_17 = FUNC_7(VAR_11->attrs[VAR_3]);

 if (VAR_16 >= VAR_8 || VAR_17 >= VAR_7) {
  VAR_19 = -VAR_2;
  goto out_netlink;
 }

 VAR_18 = FUNC_8(VAR_11->attrs[VAR_4]);
 if (VAR_18 < sizeof(struct ncsi_pkt_hdr)) {
  FUNC_5(VAR_12->ndev.dev, "NCSI: no command to send %u\n",
       VAR_16);
  VAR_19 = -VAR_0;
  goto out_netlink;
 } else {
  VAR_15 = (unsigned char *)FUNC_6(VAR_11->attrs[VAR_4]);
 }

 VAR_13 = (struct ncsi_pkt_hdr *)VAR_15;

 VAR_14.ndp = VAR_12;
 VAR_14.package = (unsigned char)VAR_16;
 VAR_14.channel = (unsigned char)VAR_17;
 VAR_14.type = VAR_13->type;
 VAR_14.req_flags = VAR_9;
 VAR_14.info = VAR_11;
 VAR_14.payload = FUNC_9(VAR_13->length);
 VAR_14.data = VAR_15 + sizeof(*VAR_13);

 VAR_19 = FUNC_2(&VAR_14);
out_netlink:
 if (VAR_19 != 0) {
  FUNC_4(VAR_12->ndev.dev,
      "NCSI: Error %d sending command\n",
      VAR_19);
  FUNC_1(VAR_12->ndev.dev,
          VAR_11->snd_seq,
          VAR_11->snd_portid,
          VAR_11->nlhdr,
          VAR_19);
 }
out:
 return VAR_19;
}
