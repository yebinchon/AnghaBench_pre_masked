
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int encapsulation; scalar_t__ data; } ;
struct TYPE_3__ {int (* gro_complete ) (struct sk_buff*,int) ;} ;
struct packet_offload {TYPE_1__ callbacks; } ;
struct gre_base_hdr {int flags; int protocol; } ;
typedef int __be16 ;
struct TYPE_4__ {int gso_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct packet_offload* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct sk_buff*,int) ;
 TYPE_2__* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_5, int VAR_6)
{
 struct gre_base_hdr *VAR_7 = (struct gre_base_hdr *)(VAR_5->data + VAR_6);
 struct packet_offload *VAR_8;
 unsigned int VAR_9 = sizeof(*VAR_7);
 int VAR_10 = -VAR_0;
 __be16 VAR_11;

 VAR_5->encapsulation = 1;
 FUNC_4(VAR_5)->gso_type = VAR_4;

 VAR_11 = VAR_7->protocol;
 if (VAR_7->flags & VAR_3)
  VAR_9 += VAR_2;

 if (VAR_7->flags & VAR_1)
  VAR_9 += VAR_2;

 FUNC_1();
 VAR_8 = FUNC_0(VAR_11);
 if (VAR_8)
  VAR_10 = VAR_8->callbacks.gro_complete(VAR_5, VAR_6 + VAR_9);

 FUNC_2();

 FUNC_3(VAR_5, VAR_6 + VAR_9);

 return VAR_10;
}
