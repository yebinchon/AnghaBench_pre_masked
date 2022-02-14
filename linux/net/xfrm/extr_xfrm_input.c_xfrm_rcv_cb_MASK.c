
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xfrm_input_afinfo {int (* callback ) (struct sk_buff*,int ,int) ;} ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct sk_buff*,int ,int) ;
 struct xfrm_input_afinfo* FUNC_2 (unsigned int) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_1, unsigned int VAR_2, u8 VAR_3,
         int VAR_4)
{
 int VAR_5;
 const struct xfrm_input_afinfo *VAR_6 = FUNC_2(VAR_2);

 if (!VAR_6)
  return -VAR_0;

 VAR_5 = VAR_6->callback(VAR_1, VAR_3, VAR_4);
 FUNC_0();

 return VAR_5;
}
