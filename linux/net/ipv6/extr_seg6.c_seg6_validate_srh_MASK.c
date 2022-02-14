
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sr6_tlv {int len; } ;
struct ipv6_sr_hdr {scalar_t__ type; int hdrlen; int segments_left; int first_segment; } ;


 scalar_t__ VAR_0 ;

bool FUNC_0(struct ipv6_sr_hdr *VAR_1, int VAR_2)
{
 int VAR_3;
 unsigned int VAR_4;

 if (VAR_1->type != VAR_0)
  return 0;

 if (((VAR_1->hdrlen + 1) << 3) != VAR_2)
  return 0;

 if (VAR_1->segments_left > VAR_1->first_segment)
  return 0;

 VAR_4 = sizeof(*VAR_1) + ((VAR_1->first_segment + 1) << 4);

 VAR_3 = VAR_2 - VAR_4;
 if (VAR_3 < 0)
  return 0;

 while (VAR_3) {
  struct sr6_tlv *VAR_5;
  unsigned int VAR_6;

  if (VAR_3 < sizeof(*VAR_5))
   return 0;

  VAR_5 = (struct sr6_tlv *)((unsigned char *)VAR_1 + VAR_4);
  VAR_6 = sizeof(*VAR_5) + VAR_5->len;

  VAR_3 -= VAR_6;
  if (VAR_3 < 0)
   return 0;

  VAR_4 += VAR_6;
 }

 return 1;
}
