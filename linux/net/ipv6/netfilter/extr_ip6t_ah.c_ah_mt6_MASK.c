
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_action_param {int hotdrop; struct ip6t_ah* matchinfo; } ;
struct sk_buff {int dummy; } ;
struct ip_auth_hdr {unsigned int reserved; int spi; int hdrlen; } ;
struct ip6t_ah {int invflags; unsigned int hdrlen; unsigned int hdrres; int * spis; } ;
typedef int _ah ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct ip_auth_hdr const*) ;
 int FUNC_1 (struct sk_buff const*,unsigned int*,int ,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,unsigned int,...) ;
 struct ip_auth_hdr* FUNC_4 (struct sk_buff const*,unsigned int,int,struct ip_auth_hdr*) ;
 int FUNC_5 (int ,int ,int ,int) ;

__attribute__((used)) static bool FUNC_6(const struct sk_buff *VAR_4, struct xt_action_param *VAR_5)
{
 struct ip_auth_hdr VAR_6;
 const struct ip_auth_hdr *VAR_7;
 const struct ip6t_ah *VAR_8 = VAR_5->matchinfo;
 unsigned int VAR_9 = 0;
 unsigned int VAR_10 = 0;
 int VAR_11;

 VAR_11 = FUNC_1(VAR_4, &VAR_9, VAR_3, ((void*)0), ((void*)0));
 if (VAR_11 < 0) {
  if (VAR_11 != -VAR_0)
   VAR_5->hotdrop = 1;
  return 0;
 }

 VAR_7 = FUNC_4(VAR_4, VAR_9, sizeof(VAR_6), &VAR_6);
 if (VAR_7 == ((void*)0)) {
  VAR_5->hotdrop = 1;
  return 0;
 }

 VAR_10 = FUNC_0(VAR_7);

 FUNC_3("IPv6 AH LEN %u %u ", VAR_10, VAR_7->hdrlen);
 FUNC_3("RES %04X ", VAR_7->reserved);
 FUNC_3("SPI %u %08X\n", FUNC_2(VAR_7->spi), FUNC_2(VAR_7->spi));

 FUNC_3("IPv6 AH spi %02X ",
   FUNC_5(VAR_8->spis[0], VAR_8->spis[1],
      FUNC_2(VAR_7->spi),
      !!(VAR_8->invflags & VAR_2)));
 FUNC_3("len %02X %04X %02X ",
   VAR_8->hdrlen, VAR_10,
   (!VAR_8->hdrlen ||
    (VAR_8->hdrlen == VAR_10) ^
    !!(VAR_8->invflags & VAR_1)));
 FUNC_3("res %02X %04X %02X\n",
   VAR_8->hdrres, VAR_7->reserved,
   !(VAR_8->hdrres && VAR_7->reserved));

 return (VAR_7 != ((void*)0)) &&
  FUNC_5(VAR_8->spis[0], VAR_8->spis[1],
     FUNC_2(VAR_7->spi),
     !!(VAR_8->invflags & VAR_2)) &&
  (!VAR_8->hdrlen ||
   (VAR_8->hdrlen == VAR_10) ^
   !!(VAR_8->invflags & VAR_1)) &&
  !(VAR_8->hdrres && VAR_7->reserved);
}
