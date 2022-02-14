
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ revision; int length; } ;
struct ncsi_aen_pkt_hdr {TYPE_1__ common; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (unsigned char*,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 unsigned short const FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ncsi_aen_pkt_hdr *VAR_2,
     const unsigned short VAR_3)
{
 u32 VAR_4;
 __be32 *VAR_5;

 if (VAR_2->common.revision != VAR_1)
  return -VAR_0;
 if (FUNC_3(VAR_2->common.length) != VAR_3)
  return -VAR_0;





 VAR_5 = (__be32 *)((void *)(VAR_2 + 1) + VAR_3 - 4);
 if (FUNC_2(*VAR_5) == 0)
  return 0;

 VAR_4 = FUNC_1((unsigned char *)VAR_2,
        sizeof(*VAR_2) + VAR_3 - 4);
 if (*VAR_5 != FUNC_0(VAR_4))
  return -VAR_0;

 return 0;
}
