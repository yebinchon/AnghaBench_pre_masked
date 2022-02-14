
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int * data; } ;
struct TYPE_2__ {scalar_t__ cr; int * control; } ;
struct lapb_cb {int mode; int vs; int vr; int state; int dev; int frmr_type; TYPE_1__ frmr_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct sk_buff* FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int,char*,int ,int ,int *) ;
 int FUNC_2 (struct lapb_cb*,struct sk_buff*,scalar_t__) ;
 unsigned char* FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,scalar_t__) ;

void FUNC_5(struct lapb_cb *VAR_5)
{
 struct sk_buff *VAR_6;
 unsigned char *VAR_7;

 if ((VAR_6 = FUNC_0(VAR_3 + 7, VAR_0)) == ((void*)0))
  return;

 FUNC_4(VAR_6, VAR_3 + 1);

 if (VAR_5->mode & VAR_1) {
  VAR_7 = FUNC_3(VAR_6, 6);
  *VAR_7++ = VAR_2;
  *VAR_7++ = VAR_5->frmr_data.control[0];
  *VAR_7++ = VAR_5->frmr_data.control[1];
  *VAR_7++ = (VAR_5->vs << 1) & 0xFE;
  *VAR_7 = (VAR_5->vr << 1) & 0xFE;
  if (VAR_5->frmr_data.cr == VAR_4)
   *VAR_7 |= 0x01;
  VAR_7++;
  *VAR_7++ = VAR_5->frmr_type;

  FUNC_1(1, "(%p) S%d TX FRMR %5ph\n",
    VAR_5->dev, VAR_5->state,
    &VAR_6->data[1]);
 } else {
  VAR_7 = FUNC_3(VAR_6, 4);
  *VAR_7++ = VAR_2;
  *VAR_7++ = VAR_5->frmr_data.control[0];
  *VAR_7 = (VAR_5->vs << 1) & 0x0E;
  *VAR_7 |= (VAR_5->vr << 5) & 0xE0;
  if (VAR_5->frmr_data.cr == VAR_4)
   *VAR_7 |= 0x10;
  VAR_7++;
  *VAR_7++ = VAR_5->frmr_type;

  FUNC_1(1, "(%p) S%d TX FRMR %3ph\n",
    VAR_5->dev, VAR_5->state, &VAR_6->data[1]);
 }

 FUNC_2(VAR_5, VAR_6, VAR_4);
}
