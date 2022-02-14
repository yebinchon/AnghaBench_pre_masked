
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct ipv6_opt_hdr {int hdrlen; } ;
typedef struct ipv6_opt_hdr u8 ;
typedef int u16 ;
struct xt_action_param {int hotdrop; int * match; struct ip6t_opts* matchinfo; } ;
struct sk_buff {unsigned int len; } ;
struct ip6t_opts {unsigned int hdrlen; int flags; int invflags; unsigned int optsnr; int* opts; } ;
typedef int _opttype ;
typedef int _optsh ;
typedef int _optlen ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_0 (struct sk_buff const*,unsigned int*,int ,int *,int *) ;
 unsigned int FUNC_1 (struct ipv6_opt_hdr const*) ;
 int FUNC_2 (char*,...) ;
 void* FUNC_3 (struct sk_buff const*,unsigned int,int,struct ipv6_opt_hdr*) ;

__attribute__((used)) static bool
FUNC_4(const struct sk_buff *VAR_7, struct xt_action_param *VAR_8)
{
 struct ipv6_opt_hdr VAR_9;
 const struct ipv6_opt_hdr *VAR_10;
 const struct ip6t_opts *VAR_11 = VAR_8->matchinfo;
 unsigned int VAR_12;
 unsigned int VAR_13 = 0;
 unsigned int VAR_14 = 0;
 bool VAR_15 = 0;
 u8 VAR_16;
 u8 VAR_17;
 const u_int8_t *VAR_18 = ((void*)0);
 const u_int8_t *VAR_19 = ((void*)0);
 unsigned int VAR_20;
 int VAR_21;

 VAR_21 = FUNC_0(VAR_7, &VAR_13,
       (VAR_8->match == &VAR_6[0]) ?
       VAR_5 : VAR_4, ((void*)0), ((void*)0));
 if (VAR_21 < 0) {
  if (VAR_21 != -VAR_0)
   VAR_8->hotdrop = 1;
  return 0;
 }

 VAR_10 = FUNC_3(VAR_7, VAR_13, sizeof(VAR_9), &VAR_9);
 if (VAR_10 == ((void*)0)) {
  VAR_8->hotdrop = 1;
  return 0;
 }

 VAR_14 = FUNC_1(VAR_10);
 if (VAR_7->len - VAR_13 < VAR_14) {

  return 0;
 }

 FUNC_2("IPv6 OPTS LEN %u %u ", VAR_14, VAR_10->hdrlen);

 FUNC_2("len %02X %04X %02X ",
   VAR_11->hdrlen, VAR_14,
   (!(VAR_11->flags & VAR_2) ||
    ((VAR_11->hdrlen == VAR_14) ^
     !!(VAR_11->invflags & VAR_1))));

 VAR_15 = (VAR_10 != ((void*)0)) &&
       (!(VAR_11->flags & VAR_2) ||
        ((VAR_11->hdrlen == VAR_14) ^
  !!(VAR_11->invflags & VAR_1)));

 VAR_13 += 2;
 VAR_14 -= 2;
 if (!(VAR_11->flags & VAR_3)) {
  return VAR_15;
 } else {
  FUNC_2("Strict ");
  FUNC_2("#%d ", VAR_11->optsnr);
  for (VAR_12 = 0; VAR_12 < VAR_11->optsnr; VAR_12++) {

   if (VAR_14 < 1)
    break;
   VAR_18 = FUNC_3(VAR_7, VAR_13, sizeof(VAR_16),
      &VAR_16);
   if (VAR_18 == ((void*)0))
    break;


   if (*VAR_18 != (VAR_11->opts[VAR_12] & 0xFF00) >> 8) {
    FUNC_2("Tbad %02X %02X\n", *VAR_18,
      (VAR_11->opts[VAR_12] & 0xFF00) >> 8);
    return 0;
   } else {
    FUNC_2("Tok ");
   }

   if (*VAR_18) {
    u16 VAR_22;


    if (VAR_14 < 2)
     break;
    VAR_19 = FUNC_3(VAR_7, VAR_13 + 1,
       sizeof(VAR_17),
       &VAR_17);
    if (VAR_19 == ((void*)0))
     break;
    VAR_22 = VAR_11->opts[VAR_12] & 0x00FF;

    if (VAR_22 != 0x00FF && VAR_22 != *VAR_19) {
     FUNC_2("Lbad %02X %04X\n", *VAR_19,
       VAR_22);
     return 0;
    }
    FUNC_2("Lok ");
    VAR_20 = *VAR_19 + 2;
   } else {
    FUNC_2("Pad1\n");
    VAR_20 = 1;
   }


   FUNC_2("len%04X\n", VAR_20);

   if ((VAR_13 > VAR_7->len - VAR_20 || VAR_14 < VAR_20) &&
       VAR_12 < VAR_11->optsnr - 1) {
    FUNC_2("new pointer is too large!\n");
    break;
   }
   VAR_13 += VAR_20;
   VAR_14 -= VAR_20;
  }
  if (VAR_12 == VAR_11->optsnr)
   return VAR_15;
  else
   return 0;
 }

 return 0;
}
