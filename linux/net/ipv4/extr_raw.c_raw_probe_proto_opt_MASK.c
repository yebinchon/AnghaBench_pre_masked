
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int code; int type; } ;
struct TYPE_4__ {TYPE_1__ icmph; int c; } ;
struct raw_frag_vec {int hlen; TYPE_2__ hdr; int msg; } ;
struct flowi4 {scalar_t__ flowi4_proto; int fl4_icmp_code; int fl4_icmp_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct raw_frag_vec *VAR_1, struct flowi4 *VAR_2)
{
 int VAR_3;

 if (VAR_2->flowi4_proto != VAR_0)
  return 0;


 VAR_1->hlen = 2;

 VAR_3 = FUNC_0(VAR_1->hdr.c, VAR_1->msg, VAR_1->hlen);
 if (VAR_3)
  return VAR_3;

 VAR_2->fl4_icmp_type = VAR_1->hdr.icmph.type;
 VAR_2->fl4_icmp_code = VAR_1->hdr.icmph.code;

 return 0;
}
