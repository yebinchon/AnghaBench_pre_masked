
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct cfpkt {int dummy; } ;
struct cflayer {TYPE_1__* up; } ;
struct cffrml {scalar_t__ dofcs; } ;
struct TYPE_2__ {int (* receive ) (TYPE_1__*,struct cfpkt*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cfpkt*,int*,int) ;
 int FUNC_1 (struct cfpkt*) ;
 scalar_t__ FUNC_2 (struct cfpkt*) ;
 int FUNC_3 (struct cfpkt*,int*,int) ;
 int FUNC_4 (struct cfpkt*,int*,int) ;
 int FUNC_5 (struct cfpkt*,int ,int) ;
 scalar_t__ FUNC_6 (struct cfpkt*,int) ;
 struct cffrml* FUNC_7 (struct cflayer*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*,int,int) ;
 int FUNC_11 (TYPE_1__*,struct cfpkt*) ;

__attribute__((used)) static int FUNC_12(struct cflayer *VAR_6, struct cfpkt *VAR_7)
{
 u16 VAR_8;
 u16 VAR_9;
 u16 VAR_10;
 int VAR_11;
 struct cffrml *VAR_12;
 VAR_12 = FUNC_7(VAR_6);

 FUNC_3(VAR_7, &VAR_8, 2);
 VAR_9 = FUNC_8(VAR_8);


 if (!VAR_12->dofcs)
  VAR_9 -= 2;

 if (FUNC_6(VAR_7, VAR_9) < 0) {
  ++VAR_5;
  FUNC_9("Framing length error (%d)\n", VAR_9);
  FUNC_1(VAR_7);
  return -VAR_2;
 }




 if (VAR_12->dofcs) {
  FUNC_4(VAR_7, &VAR_8, 2);
  VAR_10 = FUNC_8(VAR_8);
  VAR_11 = FUNC_5(VAR_7, VAR_3, 0xffff);
  if (VAR_11 != VAR_10) {
   FUNC_0(VAR_7, &VAR_8, 2);
   ++VAR_5;
   ++VAR_4;
   FUNC_10("Frame checksum error (0x%x != 0x%x)\n",
    VAR_10, VAR_11);
   return -VAR_0;
  }
 }
 if (FUNC_2(VAR_7)) {
  ++VAR_5;
  FUNC_9("Packet is erroneous!\n");
  FUNC_1(VAR_7);
  return -VAR_2;
 }

 if (VAR_6->up == ((void*)0)) {
  FUNC_9("Layr up is missing!\n");
  FUNC_1(VAR_7);
  return -VAR_1;
 }

 return VAR_6->up->receive(VAR_6->up, VAR_7);
}
