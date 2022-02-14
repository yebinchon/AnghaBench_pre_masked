
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct lapb_cb {int mode; int vs; int vr; int state; int dev; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_0 (int,char*,int ,int ,int,int,int) ;
 int FUNC_1 (struct lapb_cb*,struct sk_buff*,int ) ;
 unsigned char* FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_3(struct lapb_cb *VAR_5, struct sk_buff *VAR_6, int VAR_7)
{
 unsigned char *VAR_8;

 if (!VAR_6)
  return;

 if (VAR_5->mode & VAR_2) {
  VAR_8 = FUNC_2(VAR_6, 2);

  VAR_8[0] = VAR_3;
  VAR_8[0] |= VAR_5->vs << 1;
  VAR_8[1] = VAR_7 ? VAR_1 : 0;
  VAR_8[1] |= VAR_5->vr << 1;
 } else {
  VAR_8 = FUNC_2(VAR_6, 1);

  *VAR_8 = VAR_3;
  *VAR_8 |= VAR_7 ? VAR_4 : 0;
  *VAR_8 |= VAR_5->vr << 5;
  *VAR_8 |= VAR_5->vs << 1;
 }

 FUNC_0(1, "(%p) S%d TX I(%d) S%d R%d\n",
   VAR_5->dev, VAR_5->state, VAR_7, VAR_5->vs, VAR_5->vr);

 FUNC_1(VAR_5, VAR_6, VAR_0);
}
