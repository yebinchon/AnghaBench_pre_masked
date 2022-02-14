
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iphdr {int ihl; } ;
typedef int __be32 ;


 int VAR_0 ;







 int FUNC_0 (int *,unsigned char*,int) ;
 int FUNC_1 (unsigned char*,int ,int) ;

__attribute__((used)) static int FUNC_2(const struct iphdr *VAR_1, __be32 *VAR_2)
{
 unsigned char *VAR_3 = (unsigned char *)(VAR_1+1);
 int VAR_4 = VAR_1->ihl*4 - sizeof(struct iphdr);
 int VAR_5;

 while (VAR_4 > 0) {
  switch (*VAR_3) {
  case 133:
   return 0;
  case 131:
   VAR_4--;
   VAR_3++;
   continue;
  }
  VAR_5 = VAR_3[1];
  if (VAR_5<2 || VAR_5>VAR_4)
   return -VAR_0;
  switch (*VAR_3) {
  case 129:
  case 0x85:
  case 134:
  case 130:
  case 0x80|21:
   break;
  case 132:
  case 128:
   if (VAR_5 < 6)
    return -VAR_0;
   FUNC_0(VAR_2, VAR_3+VAR_5-4, 4);

  default:
   FUNC_1(VAR_3, 0, VAR_5);
  }
  VAR_4 -= VAR_5;
  VAR_3 += VAR_5;
 }
 return 0;
}
