
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int addr_len; } ;
struct net {int dummy; } ;
typedef scalar_t__ __be32 ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct net*,struct net_device*,scalar_t__) ;
 int FUNC_2 (unsigned char*,unsigned char*,int ) ;

__attribute__((used)) static bool FUNC_3(struct net *VAR_2, struct net_device *VAR_3,
   int *VAR_4, __be16 VAR_5,
   __be32 VAR_6, __be32 VAR_7,
   unsigned char *VAR_8, unsigned char *VAR_9)
{
 bool VAR_10 = VAR_7 == VAR_6;




 if (VAR_10 && VAR_5 == FUNC_0(VAR_0))
  VAR_10 =



   VAR_9 &&
   !FUNC_2(VAR_9, VAR_8, VAR_3->addr_len);

 if (VAR_10) {
  *VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_6);
  if (*VAR_4 != VAR_1)
   VAR_10 = 0;
 }
 return VAR_10;
}
