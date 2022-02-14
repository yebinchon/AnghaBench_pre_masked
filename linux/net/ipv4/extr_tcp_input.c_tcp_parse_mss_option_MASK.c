
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tcphdr {int doff; } ;


 int VAR_0 ;

 int VAR_1 ;

 int FUNC_0 (unsigned char const*) ;

__attribute__((used)) static u16 FUNC_1(const struct tcphdr *VAR_2, u16 VAR_3)
{
 const unsigned char *VAR_4 = (const unsigned char *)(VAR_2 + 1);
 int VAR_5 = (VAR_2->doff * 4) - sizeof(struct tcphdr);
 u16 VAR_6 = 0;

 while (VAR_5 > 0) {
  int VAR_7 = *VAR_4++;
  int VAR_8;

  switch (VAR_7) {
  case 129:
   return VAR_6;
  case 128:
   VAR_5--;
   continue;
  default:
   if (VAR_5 < 2)
    return VAR_6;
   VAR_8 = *VAR_4++;
   if (VAR_8 < 2)
    return VAR_6;
   if (VAR_8 > VAR_5)
    return VAR_6;
   if (VAR_7 == VAR_1 && VAR_8 == VAR_0) {
    u16 VAR_9 = FUNC_0(VAR_4);

    if (VAR_9) {
     if (VAR_3 && VAR_3 < VAR_9)
      VAR_9 = VAR_3;
     VAR_6 = VAR_9;
    }
   }
   VAR_4 += VAR_8 - 2;
   VAR_5 -= VAR_8;
  }
 }
 return VAR_6;
}
