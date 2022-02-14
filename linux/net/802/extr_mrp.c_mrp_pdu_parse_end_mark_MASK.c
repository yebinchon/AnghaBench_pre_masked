
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
typedef int endmark ;
typedef scalar_t__ __be16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_1, int *VAR_2)
{
 __be16 VAR_3;

 if (FUNC_0(VAR_1, *VAR_2, &VAR_3, sizeof(VAR_3)) < 0)
  return -1;
 if (VAR_3 == VAR_0) {
  *VAR_2 += sizeof(VAR_3);
  return -1;
 }
 return 0;
}
