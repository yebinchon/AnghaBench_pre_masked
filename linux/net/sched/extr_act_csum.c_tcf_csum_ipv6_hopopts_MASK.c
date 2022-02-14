
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipv6_opt_hdr {int dummy; } ;
typedef int __be32 ;




 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct ipv6_opt_hdr *VAR_0, unsigned int VAR_1,
     unsigned int *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 unsigned char *VAR_6 = (void *)VAR_0;

 VAR_3 = sizeof(*VAR_0);
 VAR_4 = VAR_1 - VAR_3;

 while (VAR_4 > 1) {
  switch (VAR_6[VAR_3]) {
  case 128:
   VAR_5 = 1;
   break;
  case 129:
   VAR_5 = VAR_6[VAR_3 + 1] + 2;
   if (VAR_5 != 6 || VAR_4 < 6 || (VAR_3 & 3) != 2)

    return 0;
   *VAR_2 = FUNC_0(*(__be32 *)(VAR_6 + VAR_3 + 2));
   goto done;
  default:
   VAR_5 = VAR_6[VAR_3 + 1] + 2;
   if (VAR_5 > VAR_4)

    goto done;
   break;
  }
  VAR_3 += VAR_5;
  VAR_4 -= VAR_5;
 }

done:
 return 1;
}
