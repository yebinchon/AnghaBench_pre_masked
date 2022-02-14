
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union cmdret {int* retlongs; } ;
typedef int u32 ;
struct cmdif {int dummy; } ;


 union cmdret VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct cmdif*,int,int,union cmdret*) ;
 int FUNC_1 (struct cmdif*,int,int) ;
 int FUNC_2 (struct cmdif*,int,int) ;
 int FUNC_3 (char*,int,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct cmdif *VAR_2, u32 VAR_3, u32 VAR_4, u32 VAR_5)
{
 union cmdret VAR_6 = VAR_0;
 unsigned int VAR_7 = VAR_1;
 int VAR_8 = 1;

 FUNC_0(VAR_2, 0x02, VAR_3, &VAR_6);
 VAR_6.retlongs[0] &= (~VAR_5);

 while (--VAR_7) {
  FUNC_1(VAR_2, 0x01, VAR_3);
  FUNC_2(VAR_2, 0x02, (VAR_6.retlongs[0] | VAR_4));
  FUNC_0(VAR_2, 0x02, VAR_3, &VAR_6);
  if ((VAR_6.retlongs[0] & VAR_4) == VAR_4) {
   VAR_8 = 0;
   break;
  } else
   VAR_6.retlongs[0] &= ~VAR_5;
 }
 FUNC_3("send arm 0x%x 0x%x 0x%x return %d\n", VAR_3, VAR_4, VAR_5,
      VAR_8);
 return VAR_8;
}
