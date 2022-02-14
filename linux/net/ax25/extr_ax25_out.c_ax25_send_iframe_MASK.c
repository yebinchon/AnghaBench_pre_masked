
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_5__ {scalar_t__ modulus; int vr; int vs; } ;
typedef TYPE_1__ ax25_cb ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,struct sk_buff*,int ) ;
 unsigned char* FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(ax25_cb *VAR_5, struct sk_buff *VAR_6, int VAR_7)
{
 unsigned char *VAR_8;

 if (VAR_6 == ((void*)0))
  return;

 FUNC_3(VAR_6);

 if (VAR_5->modulus == VAR_3) {
  VAR_8 = FUNC_2(VAR_6, 1);

  *VAR_8 = VAR_2;
  *VAR_8 |= (VAR_7) ? VAR_4 : 0;
  *VAR_8 |= (VAR_5->vr << 5);
  *VAR_8 |= (VAR_5->vs << 1);
 } else {
  VAR_8 = FUNC_2(VAR_6, 2);

  VAR_8[0] = VAR_2;
  VAR_8[0] |= (VAR_5->vs << 1);
  VAR_8[1] = (VAR_7) ? VAR_1 : 0;
  VAR_8[1] |= (VAR_5->vr << 1);
 }

 FUNC_0(VAR_5);

 FUNC_1(VAR_5, VAR_6, VAR_0);
}
