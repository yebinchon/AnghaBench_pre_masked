
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cycling_changeover; } ;
struct sctp_transport {TYPE_1__ cacc; } ;


 scalar_t__ FUNC_0 (struct sctp_transport*,struct sctp_transport*,int) ;
 scalar_t__ FUNC_1 (struct sctp_transport*,int) ;

__attribute__((used)) static inline int FUNC_2(struct sctp_transport *VAR_0,
         struct sctp_transport *VAR_1,
         int VAR_2)
{
 if (!VAR_0->cacc.cycling_changeover) {
  if (FUNC_0(VAR_0, VAR_1, VAR_2))
   return 1;
  if (FUNC_1(VAR_1, VAR_2))
   return 1;
  return 0;
 }
 return 0;
}
