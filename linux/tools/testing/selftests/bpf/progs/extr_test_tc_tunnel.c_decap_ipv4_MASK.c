
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iphdr {int ihl; int protocol; } ;
struct __sk_buff {int dummy; } ;
typedef int iph_outer ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct __sk_buff*,int ,struct iphdr*,int) ;
 int FUNC_1 (struct __sk_buff*,int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct __sk_buff *VAR_2)
{
 struct iphdr VAR_3;

 if (FUNC_0(VAR_2, VAR_0, &VAR_3,
          sizeof(VAR_3)) < 0)
  return VAR_1;

 if (VAR_3.ihl != 5)
  return VAR_1;

 return FUNC_1(VAR_2, VAR_0, sizeof(VAR_3),
         VAR_3.protocol);
}
