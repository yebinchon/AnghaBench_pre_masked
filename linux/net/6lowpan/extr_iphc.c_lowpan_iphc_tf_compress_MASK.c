
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int tc ;
struct ipv6hdr {int* flow_lbl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ipv6hdr const*) ;
 scalar_t__ FUNC_1 (struct ipv6hdr const*) ;
 int FUNC_2 (int**,int*,int) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static u8 FUNC_5(u8 **VAR_4, const struct ipv6hdr *VAR_5)
{

 u8 VAR_6 = FUNC_0(VAR_5), VAR_7[4], VAR_8;


 FUNC_4("tc 0x%02x\n", VAR_6);

 if (FUNC_1(VAR_5)) {
  if (!VAR_6) {

   VAR_8 = VAR_3;
  } else {







   FUNC_2(VAR_4, &VAR_6, sizeof(VAR_6));
   VAR_8 = VAR_2;
  }
 } else {

  if (!(VAR_6 & 0x3f)) {
   FUNC_3(&VAR_7[0], &VAR_5->flow_lbl[0], 3);

   VAR_7[0] &= ~0xf0;

   VAR_7[0] |= (VAR_6 & 0xc0);

   FUNC_2(VAR_4, VAR_7, 3);
   VAR_8 = VAR_1;
  } else {
   FUNC_3(&VAR_7[0], &VAR_6, sizeof(VAR_6));




   FUNC_3(&VAR_7[1], &VAR_5->flow_lbl[0], 3);

   VAR_7[1] &= ~0xf0;

   FUNC_2(VAR_4, VAR_7, 4);
   VAR_8 = VAR_0;
  }
 }

 return VAR_8;
}
