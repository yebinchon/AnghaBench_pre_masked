
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
typedef enum pedit_header_type { ____Placeholder_pedit_header_type } pedit_header_type ;


 int VAR_0 ;






 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_1,
    enum pedit_header_type VAR_2, int *VAR_3)
{
 int VAR_4 = -VAR_0;

 switch (VAR_2) {
 case 133:
  if (FUNC_0(VAR_1)) {
   *VAR_3 = FUNC_1(VAR_1);
   VAR_4 = 0;
  }
  break;
 case 130:
 case 132:
 case 131:
  *VAR_3 = FUNC_2(VAR_1);
  VAR_4 = 0;
  break;
 case 129:
 case 128:
  if (FUNC_3(VAR_1)) {
   *VAR_3 = FUNC_4(VAR_1);
   VAR_4 = 0;
  }
  break;
 default:
  VAR_4 = -VAR_0;
  break;
 }

 return VAR_4;
}
