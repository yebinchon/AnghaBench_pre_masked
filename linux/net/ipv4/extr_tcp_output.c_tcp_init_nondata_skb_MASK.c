
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef void* u32 ;
struct sk_buff {int ip_summed; } ;
struct TYPE_2__ {int tcp_flags; void* end_seq; void* seq; scalar_t__ sacked; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_3, u32 VAR_4, u8 VAR_5)
{
 VAR_3->ip_summed = VAR_0;

 FUNC_0(VAR_3)->tcp_flags = VAR_5;
 FUNC_0(VAR_3)->sacked = 0;

 FUNC_1(VAR_3, 1);

 FUNC_0(VAR_3)->seq = VAR_4;
 if (VAR_5 & (VAR_2 | VAR_1))
  VAR_4++;
 FUNC_0(VAR_3)->end_seq = VAR_4;
}
