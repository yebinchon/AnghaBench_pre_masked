
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct batadv_dat_entry {int vid; int ip; } ;



__attribute__((used)) static u32 FUNC_0(const void *VAR_0, u32 VAR_1)
{
 u32 VAR_2 = 0;
 const struct batadv_dat_entry *VAR_3 = VAR_0;
 const unsigned char *VAR_4;
 u32 VAR_5;

 VAR_4 = (const unsigned char *)&VAR_3->ip;
 for (VAR_5 = 0; VAR_5 < sizeof(VAR_3->ip); VAR_5++) {
  VAR_2 += VAR_4[VAR_5];
  VAR_2 += (VAR_2 << 10);
  VAR_2 ^= (VAR_2 >> 6);
 }

 VAR_4 = (const unsigned char *)&VAR_3->vid;
 for (VAR_5 = 0; VAR_5 < sizeof(VAR_3->vid); VAR_5++) {
  VAR_2 += VAR_4[VAR_5];
  VAR_2 += (VAR_2 << 10);
  VAR_2 ^= (VAR_2 >> 6);
 }

 VAR_2 += (VAR_2 << 3);
 VAR_2 ^= (VAR_2 >> 11);
 VAR_2 += (VAR_2 << 15);

 return VAR_2 % VAR_1;
}
