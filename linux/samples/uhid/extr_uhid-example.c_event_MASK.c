
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uhid_event {int type; } ;
typedef int ssize_t ;
typedef int ev ;


 int VAR_0 ;






 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct uhid_event*) ;
 int FUNC_2 (struct uhid_event*,int ,int) ;
 int FUNC_3 (int,struct uhid_event*,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(int VAR_3)
{
 struct uhid_event VAR_4;
 ssize_t VAR_5;

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 VAR_5 = FUNC_3(VAR_3, &VAR_4, sizeof(VAR_4));
 if (VAR_5 == 0) {
  FUNC_0(VAR_2, "Read HUP on uhid-cdev\n");
  return -VAR_0;
 } else if (VAR_5 < 0) {
  FUNC_0(VAR_2, "Cannot read uhid-cdev: %m\n");
  return -VAR_1;
 } else if (VAR_5 != sizeof(VAR_4)) {
  FUNC_0(VAR_2, "Invalid size read from uhid-dev: %zd != %lu\n",
   VAR_5, sizeof(VAR_4));
  return -VAR_0;
 }

 switch (VAR_4.type) {
 case 129:
  FUNC_0(VAR_2, "UHID_START from uhid-dev\n");
  break;
 case 128:
  FUNC_0(VAR_2, "UHID_STOP from uhid-dev\n");
  break;
 case 132:
  FUNC_0(VAR_2, "UHID_OPEN from uhid-dev\n");
  break;
 case 133:
  FUNC_0(VAR_2, "UHID_CLOSE from uhid-dev\n");
  break;
 case 131:
  FUNC_0(VAR_2, "UHID_OUTPUT from uhid-dev\n");
  FUNC_1(&VAR_4);
  break;
 case 130:
  FUNC_0(VAR_2, "UHID_OUTPUT_EV from uhid-dev\n");
  break;
 default:
  FUNC_0(VAR_2, "Invalid event from uhid-dev: %u\n", VAR_4.type);
 }

 return 0;
}
