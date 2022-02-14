
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int busid; } ;
struct op_import_request {TYPE_1__ udev; int busid; } ;
struct op_import_reply {TYPE_1__ udev; int busid; } ;
typedef int request ;
typedef int reply ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct op_import_request*) ;
 int FUNC_1 (int ,struct op_import_request*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int,TYPE_1__*) ;
 int FUNC_4 (struct op_import_request*,int ,int) ;
 scalar_t__ FUNC_5 (int ,char*,scalar_t__) ;
 int FUNC_6 (int ,char*,scalar_t__) ;
 int FUNC_7 (int,void*,int) ;
 int FUNC_8 (int,int *,int*) ;
 int FUNC_9 (int,void*,int) ;
 int FUNC_10 (int,int ,int ) ;
 int FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(int VAR_3, char *VAR_4)
{
 int VAR_5;
 struct op_import_request VAR_6;
 struct op_import_reply VAR_7;
 uint16_t VAR_8 = VAR_0;
 int VAR_9;

 FUNC_4(&VAR_6, 0, sizeof(VAR_6));
 FUNC_4(&VAR_7, 0, sizeof(VAR_7));


 VAR_5 = FUNC_10(VAR_3, VAR_1, 0);
 if (VAR_5 < 0) {
  FUNC_2("send op_common");
  return -1;
 }

 FUNC_6(VAR_6.busid, VAR_4, VAR_2-1);

 FUNC_1(0, &VAR_6);

 VAR_5 = FUNC_9(VAR_3, (void *) &VAR_6, sizeof(VAR_6));
 if (VAR_5 < 0) {
  FUNC_2("send op_import_request");
  return -1;
 }


 VAR_5 = FUNC_8(VAR_3, &VAR_8, &VAR_9);
 if (VAR_5 < 0) {
  FUNC_2("Attach Request for %s failed - %s\n",
      VAR_4, FUNC_11(VAR_9));
  return -1;
 }

 VAR_5 = FUNC_7(VAR_3, (void *) &VAR_7, sizeof(VAR_7));
 if (VAR_5 < 0) {
  FUNC_2("recv op_import_reply");
  return -1;
 }

 FUNC_0(0, &VAR_7);


 if (FUNC_5(VAR_7.udev.busid, VAR_4, VAR_2)) {
  FUNC_2("recv different busid %s", VAR_7.udev.busid);
  return -1;
 }


 return FUNC_3(VAR_3, &VAR_7.udev);
}
