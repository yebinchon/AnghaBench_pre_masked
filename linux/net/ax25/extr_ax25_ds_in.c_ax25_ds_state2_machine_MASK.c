
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
typedef int ax25_cb ;


 int VAR_0 ;



 int VAR_1 ;

 int VAR_2 ;





 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int const,int,int ) ;

__attribute__((used)) static int FUNC_3(ax25_cb *VAR_3, struct sk_buff *VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 switch (VAR_5) {
 case 130:
 case 129:
  FUNC_2(VAR_3, 136, VAR_1, VAR_0);
  FUNC_0(VAR_3);
  break;

 case 136:
  FUNC_2(VAR_3, 128, VAR_6, VAR_2);
  FUNC_0(VAR_3);
  FUNC_1(VAR_3, 0);
  break;

 case 135:
 case 128:
  if (VAR_6) {
   FUNC_0(VAR_3);
   FUNC_1(VAR_3, 0);
  }
  break;

 case 134:
 case 133:
 case 132:
 case 131:
  if (VAR_6) {
   FUNC_2(VAR_3, 136, VAR_1, VAR_0);
   FUNC_0(VAR_3);
  }
  break;

 default:
  break;
 }

 return 0;
}
