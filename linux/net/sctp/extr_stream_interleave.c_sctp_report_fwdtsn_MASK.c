
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sctp_ulpq {TYPE_2__* asoc; } ;
typedef int __u32 ;
struct TYPE_3__ {int tsn_map; } ;
struct TYPE_4__ {TYPE_1__ peer; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct sctp_ulpq*,int ) ;
 int FUNC_2 (struct sctp_ulpq*,int ) ;

__attribute__((used)) static void FUNC_3(struct sctp_ulpq *VAR_1, __u32 VAR_2)
{

 FUNC_0(&VAR_1->asoc->peer.tsn_map, VAR_2);

 FUNC_2(VAR_1, VAR_2);

 FUNC_1(VAR_1, VAR_0);
}
