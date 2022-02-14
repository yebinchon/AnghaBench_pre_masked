
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int diagnostic; int cause; } ;
struct TYPE_5__ {unsigned char* cuddata; int cudlength; } ;
struct TYPE_8__ {int reverse; } ;
struct x25_sock {int lci; int vr; TYPE_3__* neighbour; TYPE_2__ causediag; TYPE_1__ calluserdata; TYPE_4__ facilities; int vc_facil_mask; int dte_facilities; int source_addr; int dest_addr; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_7__ {scalar_t__ extended; int global_facil_mask; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;





 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int) ;
 unsigned char* FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*,unsigned char*,int) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (unsigned char*,int *,int *) ;
 int FUNC_6 (unsigned char*,TYPE_4__*,int *,int ) ;
 struct x25_sock* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sk_buff*,TYPE_3__*) ;

void FUNC_9(struct sock *VAR_8, int VAR_9)
{
 struct x25_sock *VAR_10 = FUNC_7(VAR_8);
 struct sk_buff *VAR_11;
 unsigned char *VAR_12;
 unsigned char VAR_13[VAR_6];
 unsigned char VAR_14[1 + VAR_1];
 unsigned char VAR_15, VAR_16;



 int VAR_17 = VAR_7 + VAR_2;




 switch (VAR_9) {
 case 136:
  VAR_17 += 1 + VAR_1 + VAR_6 + VAR_5;
  break;
 case 137:
  if (VAR_10->facilities.reverse & 0x80) {
   VAR_17 += 1 + VAR_6 + VAR_5;
  } else {
   VAR_17 += 1 + VAR_6;
  }
  break;
 case 134:
 case 130:
  VAR_17 += 2;
  break;
 case 128:
 case 129:
 case 132:
 case 135:
 case 133:
 case 131:
  break;
 default:
  FUNC_1("invalid frame type %02X\n", VAR_9);
  return;
 }

 if ((VAR_11 = FUNC_0(VAR_17, VAR_0)) == ((void*)0))
  return;




 FUNC_4(VAR_11, VAR_7);




 VAR_12 = FUNC_2(VAR_11, 2);

 VAR_15 = (VAR_10->lci >> 8) & 0x0F;
 VAR_16 = (VAR_10->lci >> 0) & 0xFF;

 if (VAR_10->neighbour->extended) {
  *VAR_12++ = VAR_15 | VAR_3;
  *VAR_12++ = VAR_16;
 } else {
  *VAR_12++ = VAR_15 | VAR_4;
  *VAR_12++ = VAR_16;
 }




 switch (VAR_9) {

  case 136:
   VAR_12 = FUNC_2(VAR_11, 1);
   *VAR_12++ = 136;
   VAR_17 = FUNC_5(VAR_14, &VAR_10->dest_addr,
      &VAR_10->source_addr);
   FUNC_3(VAR_11, VAR_14, VAR_17);
   VAR_17 = FUNC_6(VAR_13,
     &VAR_10->facilities,
     &VAR_10->dte_facilities,
     VAR_10->neighbour->global_facil_mask);
   FUNC_3(VAR_11, VAR_13, VAR_17);
   FUNC_3(VAR_11, VAR_10->calluserdata.cuddata,
         VAR_10->calluserdata.cudlength);
   VAR_10->calluserdata.cudlength = 0;
   break;

  case 137:
   VAR_12 = FUNC_2(VAR_11, 2);
   *VAR_12++ = 137;
   *VAR_12++ = 0x00;
   VAR_17 = FUNC_6(VAR_13,
       &VAR_10->facilities,
       &VAR_10->dte_facilities,
       VAR_10->vc_facil_mask);
   FUNC_3(VAR_11, VAR_13, VAR_17);




   if(VAR_10->facilities.reverse & 0x80) {
    FUNC_3(VAR_11,
          VAR_10->calluserdata.cuddata,
          VAR_10->calluserdata.cudlength);
   }
   VAR_10->calluserdata.cudlength = 0;
   break;

  case 134:
   VAR_12 = FUNC_2(VAR_11, 3);
   *VAR_12++ = VAR_9;
   *VAR_12++ = VAR_10->causediag.cause;
   *VAR_12++ = VAR_10->causediag.diagnostic;
   break;

  case 130:
   VAR_12 = FUNC_2(VAR_11, 3);
   *VAR_12++ = VAR_9;
   *VAR_12++ = 0x00;
   *VAR_12++ = 0x00;
   break;

  case 128:
  case 129:
  case 132:
   if (VAR_10->neighbour->extended) {
    VAR_12 = FUNC_2(VAR_11, 2);
    *VAR_12++ = VAR_9;
    *VAR_12++ = (VAR_10->vr << 1) & 0xFE;
   } else {
    VAR_12 = FUNC_2(VAR_11, 1);
    *VAR_12 = VAR_9;
    *VAR_12++ |= (VAR_10->vr << 5) & 0xE0;
   }
   break;

  case 135:
  case 133:
  case 131:
   VAR_12 = FUNC_2(VAR_11, 1);
   *VAR_12 = VAR_9;
   break;
 }

 FUNC_8(VAR_11, VAR_10->neighbour);
}
