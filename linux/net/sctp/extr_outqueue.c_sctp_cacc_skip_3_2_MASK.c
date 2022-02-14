
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int next_tsn_at_change; scalar_t__ cycling_changeover; } ;
struct sctp_transport {TYPE_1__ cacc; } ;
typedef int __u32 ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static inline int FUNC_1(struct sctp_transport *VAR_0, __u32 VAR_1)
{
 if (VAR_0->cacc.cycling_changeover &&
     FUNC_0(VAR_1, VAR_0->cacc.next_tsn_at_change))
  return 1;
 return 0;
}
