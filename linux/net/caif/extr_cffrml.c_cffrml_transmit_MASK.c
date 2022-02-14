
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct cfpkt {int dummy; } ;
struct cflayer {TYPE_1__* dn; } ;
struct cffrml {scalar_t__ dofcs; } ;
typedef int __le16 ;
struct TYPE_4__ {int hdr_len; } ;
struct TYPE_3__ {int (* transmit ) (TYPE_1__*,struct cfpkt*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cfpkt*,int *,int) ;
 int FUNC_1 (struct cfpkt*,int *,int) ;
 int FUNC_2 (struct cfpkt*) ;
 scalar_t__ FUNC_3 (struct cfpkt*) ;
 int FUNC_4 (struct cfpkt*) ;
 TYPE_2__* FUNC_5 (struct cfpkt*) ;
 int FUNC_6 (struct cfpkt*,int ,int) ;
 int FUNC_7 (struct cfpkt*,int) ;
 struct cffrml* FUNC_8 (struct cflayer*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (TYPE_1__*,struct cfpkt*) ;

__attribute__((used)) static int FUNC_12(struct cflayer *VAR_3, struct cfpkt *VAR_4)
{
 u16 VAR_5;
 u16 VAR_6;
 __le16 VAR_7;

 struct cffrml *VAR_8 = FUNC_8(VAR_3);
 if (VAR_8->dofcs) {
  VAR_5 = FUNC_6(VAR_4, VAR_2, 0xffff);
  VAR_7 = FUNC_9(VAR_5);
  FUNC_1(VAR_4, &VAR_7, 2);
 } else {
  FUNC_7(VAR_4, 2);
 }
 VAR_6 = FUNC_4(VAR_4);
 VAR_7 = FUNC_9(VAR_6);
 FUNC_0(VAR_4, &VAR_7, 2);
 FUNC_5(VAR_4)->hdr_len += 2;
 if (FUNC_3(VAR_4)) {
  FUNC_10("Packet is erroneous!\n");
  FUNC_2(VAR_4);
  return -VAR_1;
 }

 if (VAR_3->dn == ((void*)0)) {
  FUNC_2(VAR_4);
  return -VAR_0;

 }
 return VAR_3->dn->transmit(VAR_3->dn, VAR_4);
}
