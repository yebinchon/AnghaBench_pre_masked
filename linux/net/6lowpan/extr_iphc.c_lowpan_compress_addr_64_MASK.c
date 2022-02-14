
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct net_device {int dummy; } ;
struct in6_addr {int * s6_addr16; } ;
struct TYPE_2__ {int lltype; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

 TYPE_1__* FUNC_0 (struct net_device const*) ;
 int FUNC_1 (struct net_device const*,int *,struct in6_addr const*,unsigned char const*) ;
 int FUNC_2 (struct in6_addr const*,unsigned char const*) ;
 size_t* VAR_3 ;
 scalar_t__ FUNC_3 (struct in6_addr const*) ;
 int FUNC_4 (size_t**,int *,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,char*,size_t*,int) ;

__attribute__((used)) static u8 FUNC_7(u8 **VAR_4, const struct net_device *VAR_5,
      const struct in6_addr *VAR_6,
      const unsigned char *VAR_7, bool VAR_8)
{
 u8 VAR_9 = VAR_0;

 switch (FUNC_0(VAR_5)->lltype) {
 case 128:
  if (FUNC_2(VAR_6, VAR_7)) {
   VAR_9 = VAR_2;
   FUNC_5("address compression 0 bits\n");
   goto out;
  }
  break;
 default:
  if (FUNC_1(VAR_5, ((void*)0), VAR_6, VAR_7)) {
   VAR_9 = VAR_2;
   FUNC_5("address compression 0 bits\n");
   goto out;
  }

  break;
 }

 if (FUNC_3(VAR_6)) {

  FUNC_4(VAR_4, &VAR_6->s6_addr16[7], 2);
  VAR_9 = VAR_1;
  FUNC_6(((void*)0), "Compressed ipv6 addr is (16 bits)",
    *VAR_4 - 2, 2);
  goto out;
 }


 FUNC_4(VAR_4, &VAR_6->s6_addr16[4], 8);
 FUNC_6(((void*)0), "Compressed ipv6 addr is (64 bits)",
   *VAR_4 - 8, 8);

out:

 if (VAR_8)
  return VAR_3[VAR_9];
 else
  return VAR_9;
}
