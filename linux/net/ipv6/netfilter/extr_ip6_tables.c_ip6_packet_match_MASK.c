
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ipv6hdr {int daddr; int saddr; } ;
struct ip6t_ip6 {int flags; int proto; int invflags; int outiface_mask; int outiface; int iniface_mask; int iniface; int dst; int dmsk; int src; int smsk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct ip6t_ip6 const*,int ,int) ;
 unsigned long FUNC_1 (char const*,int ,int ) ;
 int FUNC_2 (struct sk_buff const*,unsigned int*,int,unsigned short*,int *) ;
 struct ipv6hdr* FUNC_3 (struct sk_buff const*) ;
 int FUNC_4 (int *,int *,int *) ;

__attribute__((used)) static inline bool
FUNC_5(const struct sk_buff *VAR_6,
   const char *VAR_7,
   const char *VAR_8,
   const struct ip6t_ip6 *VAR_9,
   unsigned int *VAR_10,
   int *VAR_11, bool *VAR_12)
{
 unsigned long VAR_13;
 const struct ipv6hdr *VAR_14 = FUNC_3(VAR_6);

 if (FUNC_0(VAR_9, VAR_3,
      FUNC_4(&VAR_14->saddr, &VAR_9->smsk,
      &VAR_9->src)) ||
     FUNC_0(VAR_9, VAR_1,
      FUNC_4(&VAR_14->daddr, &VAR_9->dmsk,
      &VAR_9->dst)))
  return 0;

 VAR_13 = FUNC_1(VAR_7, VAR_9->iniface, VAR_9->iniface_mask);

 if (FUNC_0(VAR_9, VAR_4, VAR_13 != 0))
  return 0;

 VAR_13 = FUNC_1(VAR_8, VAR_9->outiface, VAR_9->outiface_mask);

 if (FUNC_0(VAR_9, VAR_5, VAR_13 != 0))
  return 0;




 if (VAR_9->flags & VAR_0) {
  int VAR_15;
  unsigned short VAR_16;

  VAR_15 = FUNC_2(VAR_6, VAR_10, -1, &VAR_16, ((void*)0));
  if (VAR_15 < 0) {
   if (VAR_16 == 0)
    *VAR_12 = 1;
   return 0;
  }
  *VAR_11 = VAR_16;

  if (VAR_9->proto == VAR_15) {
   if (VAR_9->invflags & VAR_2)
    return 0;

   return 1;
  }


  if ((VAR_9->proto != 0) &&
   !(VAR_9->invflags & VAR_2))
   return 0;
 }
 return 1;
}
