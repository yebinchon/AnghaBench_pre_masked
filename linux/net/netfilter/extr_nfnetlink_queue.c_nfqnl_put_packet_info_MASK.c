
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ ip_summed; } ;
typedef int __u32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static int
FUNC_3(struct sk_buff *VAR_5, struct sk_buff *VAR_6,
        bool VAR_7)
{
 __u32 VAR_8 = 0;

 if (VAR_6->ip_summed == VAR_0)
  VAR_8 = VAR_1;
 else if (VAR_7)
  VAR_8 = VAR_2;

 if (FUNC_2(VAR_6))
  VAR_8 |= VAR_3;

 return VAR_8 ? FUNC_1(VAR_5, VAR_4, FUNC_0(VAR_8)) : 0;
}
