
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct packet_sock {scalar_t__ tp_loss; scalar_t__ has_vnet_hdr; scalar_t__ origdev; scalar_t__ auxdata; scalar_t__ running; int tp_tstamp; int copy_thresh; int tp_reserve; int tp_version; int ifindex; } ;
struct packet_diag_info {int pdi_flags; int pdi_tstamp; int pdi_copy_thresh; int pdi_reserve; int pdi_version; int pdi_index; } ;
typedef int pinfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,int ,int,struct packet_diag_info*) ;

__attribute__((used)) static int FUNC_1(const struct packet_sock *VAR_6, struct sk_buff *VAR_7)
{
 struct packet_diag_info VAR_8;

 VAR_8.pdi_index = VAR_6->ifindex;
 VAR_8.pdi_version = VAR_6->tp_version;
 VAR_8.pdi_reserve = VAR_6->tp_reserve;
 VAR_8.pdi_copy_thresh = VAR_6->copy_thresh;
 VAR_8.pdi_tstamp = VAR_6->tp_tstamp;

 VAR_8.pdi_flags = 0;
 if (VAR_6->running)
  VAR_8.pdi_flags |= VAR_4;
 if (VAR_6->auxdata)
  VAR_8.pdi_flags |= VAR_1;
 if (VAR_6->origdev)
  VAR_8.pdi_flags |= VAR_3;
 if (VAR_6->has_vnet_hdr)
  VAR_8.pdi_flags |= VAR_5;
 if (VAR_6->tp_loss)
  VAR_8.pdi_flags |= VAR_2;

 return FUNC_0(VAR_7, VAR_0, sizeof(VAR_8), &VAR_8);
}
