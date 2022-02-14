
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tcphdr {int ack_seq; } ;
struct tcp_sack_block_wire {int end_seq; int start_seq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 struct tcp_sack_block_wire* FUNC_2 (struct tcphdr const*,int ,int*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(const struct tcphdr *VAR_2,
      const struct tcphdr *VAR_3)
{
 const struct tcp_sack_block_wire *VAR_4, *VAR_5;
 u32 VAR_6 = FUNC_4(VAR_2->ack_seq);
 u32 VAR_7 = 0, VAR_8 = 0;
 int VAR_9, VAR_10;
 bool VAR_11 = 1;

 VAR_4 = FUNC_2(VAR_2, VAR_1, &VAR_9);
 VAR_5 = FUNC_2(VAR_3, VAR_1, &VAR_10);


 VAR_9 -= VAR_0;
 VAR_10 -= VAR_0;

 if (VAR_4 && VAR_9 >= sizeof(*VAR_4) &&
     (!VAR_5 || VAR_10 < sizeof(*VAR_5)))
  return -1;
 else if (VAR_5 && VAR_10 >= sizeof(*VAR_5) &&
   (!VAR_4 || VAR_9 < sizeof(*VAR_4)))
  return 1;
 else if ((!VAR_4 || VAR_9 < sizeof(*VAR_4)) &&
   (!VAR_5 || VAR_10 < sizeof(*VAR_5)))
  return 0;

 while (VAR_9 >= sizeof(*VAR_4)) {
  const struct tcp_sack_block_wire *VAR_12 = VAR_5;
  u32 VAR_13 = FUNC_3(&VAR_4->start_seq);
  u32 VAR_14 = FUNC_3(&VAR_4->end_seq);
  int VAR_15 = VAR_10;
  bool VAR_16 = 0;


  if (FUNC_1(VAR_13, VAR_6))
   return -1;

  VAR_7 += VAR_14 - VAR_13;

  while (VAR_15 >= sizeof(*VAR_12)) {
   u32 VAR_17 = FUNC_3(&VAR_12->start_seq);
   u32 VAR_18 = FUNC_3(&VAR_12->end_seq);


   if (VAR_11)
    VAR_8 += VAR_18 - VAR_17;

   if (!FUNC_0(VAR_17, VAR_13) && !FUNC_1(VAR_18, VAR_14)) {
    VAR_16 = 1;
    if (!VAR_11)
     break;
   }
   VAR_15 -= sizeof(*VAR_12);
   VAR_12++;
  }

  if (!VAR_16)
   return -1;

  VAR_9 -= sizeof(*VAR_4);
  VAR_4++;
  VAR_11 = 0;
 }




 return VAR_8 > VAR_7 ? 1 : 0;
}
