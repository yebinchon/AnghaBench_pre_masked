
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ protocol; scalar_t__ data; } ;
struct nshhdr {int np; } ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t FUNC_0 (struct nshhdr*) ;
 int FUNC_1 (struct sk_buff*,size_t) ;
 int FUNC_2 (struct sk_buff*,size_t) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (int ) ;

int FUNC_7(struct sk_buff *VAR_4)
{
 struct nshhdr *VAR_5;
 size_t VAR_6;
 __be16 VAR_7;

 if (!FUNC_1(VAR_4, VAR_3))
  return -VAR_2;
 VAR_5 = (struct nshhdr *)(VAR_4->data);
 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6 < VAR_3)
  return -VAR_1;
 VAR_7 = FUNC_6(VAR_5->np);
 if (!FUNC_1(VAR_4, VAR_6))
  return -VAR_2;

 if (!VAR_7)
  return -VAR_0;

 FUNC_2(VAR_4, VAR_6);
 FUNC_3(VAR_4);
 FUNC_5(VAR_4);
 FUNC_4(VAR_4);
 VAR_4->protocol = VAR_7;

 return 0;
}
