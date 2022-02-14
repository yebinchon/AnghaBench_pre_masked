
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dev; int protocol; } ;
struct napi_struct {int dummy; } ;
typedef int gro_result_t ;
struct TYPE_2__ {int free; } ;


 int VAR_0 ;






 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct napi_struct*,struct sk_buff*) ;
 int FUNC_4 (struct napi_struct*,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static gro_result_t FUNC_6(struct napi_struct *VAR_2,
          struct sk_buff *VAR_3,
          gro_result_t VAR_4)
{
 switch (VAR_4) {
 case 128:
 case 131:
  FUNC_1(VAR_3, VAR_0);
  VAR_3->protocol = FUNC_2(VAR_3, VAR_3->dev);
  if (VAR_4 == 128)
   FUNC_3(VAR_2, VAR_3);
  break;

 case 132:
  FUNC_4(VAR_2, VAR_3);
  break;

 case 129:
  if (FUNC_0(VAR_3)->free == VAR_1)
   FUNC_5(VAR_3);
  else
   FUNC_4(VAR_2, VAR_3);
  break;

 case 130:
 case 133:
  break;
 }

 return VAR_4;
}
