
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_shared_info {int dummy; } ;
struct sk_buff {int destructor; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (void*,unsigned int) ;
 struct sk_buff* FUNC_2 (unsigned int,int ) ;
 int VAR_2 ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (unsigned int) ;

__attribute__((used)) static struct sk_buff *FUNC_5(unsigned int VAR_3,
            int VAR_4)
{
 struct sk_buff *VAR_5;
 void *VAR_6;

 if (VAR_3 <= VAR_1 || VAR_4)
  return FUNC_2(VAR_3, VAR_0);

 VAR_3 = FUNC_0(VAR_3) +
        FUNC_0(sizeof(struct skb_shared_info));

 VAR_6 = FUNC_4(VAR_3);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 VAR_5 = FUNC_1(VAR_6, VAR_3);
 if (VAR_5 == ((void*)0))
  FUNC_3(VAR_6);
 else
  VAR_5->destructor = VAR_2;

 return VAR_5;
}
