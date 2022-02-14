
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
typedef int u_int16_t ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct iphdr {int ihl; int saddr; int protocol; } ;
struct clusterip_config {int hash_mode; int num_total_nodes; int hash_initval; } ;


 int FUNC_0 () ;



 struct iphdr* FUNC_1 (struct sk_buff const*) ;
 unsigned long FUNC_2 (int ,int ) ;
 unsigned long FUNC_3 (int ,int ,int ) ;
 unsigned long FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (unsigned long,int ) ;
 int * FUNC_10 (struct sk_buff const*,int,int,int *) ;

__attribute__((used)) static inline u_int32_t
FUNC_11(const struct sk_buff *VAR_0,
   const struct clusterip_config *VAR_1)
{
 const struct iphdr *VAR_2 = FUNC_1(VAR_0);
 unsigned long VAR_3;
 u_int16_t VAR_4 = 0, VAR_5 = 0;
 int VAR_6;

 VAR_6 = FUNC_8(VAR_2->protocol);
 if (VAR_6 >= 0) {
  const u_int16_t *VAR_7;
  u16 VAR_8[2];

  VAR_7 = FUNC_10(VAR_0, VAR_2->ihl * 4 + VAR_6, 4, VAR_8);
  if (VAR_7) {
   VAR_4 = VAR_7[0];
   VAR_5 = VAR_7[1];
  }
 } else {
  FUNC_5("unknown protocol %u\n", VAR_2->protocol);
 }

 switch (VAR_1->hash_mode) {
 case 130:
  VAR_3 = FUNC_2(FUNC_6(VAR_2->saddr),
          VAR_1->hash_initval);
  break;
 case 129:
  VAR_3 = FUNC_3(FUNC_6(VAR_2->saddr), VAR_4,
           VAR_1->hash_initval);
  break;
 case 128:
  VAR_3 = FUNC_4(FUNC_6(VAR_2->saddr), VAR_4, VAR_5,
           VAR_1->hash_initval);
  break;
 default:

  VAR_3 = 0;


  FUNC_7("unknown mode %u\n", VAR_1->hash_mode);
  FUNC_0();
  break;
 }


 return FUNC_9(VAR_3, VAR_1->num_total_nodes) + 1;
}
