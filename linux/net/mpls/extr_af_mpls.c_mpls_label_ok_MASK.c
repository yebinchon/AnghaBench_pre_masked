
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netlink_ext_ack {int dummy; } ;
struct TYPE_2__ {unsigned int platform_labels; } ;
struct net {TYPE_1__ mpls; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;

__attribute__((used)) static bool FUNC_2(struct net *VAR_1, unsigned int *VAR_2,
     struct netlink_ext_ack *VAR_3)
{
 bool VAR_4 = 1;


 if (*VAR_2 < VAR_0) {
  FUNC_0(VAR_3,
          "Invalid label - must be MPLS_LABEL_FIRST_UNRESERVED or higher");
  VAR_4 = 0;
 }


 if (VAR_4 && *VAR_2 >= VAR_1->mpls.platform_labels) {
  FUNC_0(VAR_3,
          "Label >= configured maximum in platform_labels");
  VAR_4 = 0;
 }

 *VAR_2 = FUNC_1(*VAR_2, VAR_1->mpls.platform_labels);
 return VAR_4;
}
