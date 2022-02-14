
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbip_imported_device {int port; int status; int devid; int busnum; int devnum; int hub; } ;
struct TYPE_2__ {struct usbip_imported_device* idev; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,...) ;
 struct usbip_imported_device* FUNC_2 (struct usbip_imported_device*,char*) ;
 int FUNC_3 (struct usbip_imported_device*,int ,int) ;
 int FUNC_4 (char*,char*,char*,int*,int*,int*,int*,int*,char*) ;
 char* FUNC_5 (char const*,char) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int FUNC_7(const char *VAR_6)
{
 int VAR_7 = 0;
 char *VAR_8;


 VAR_8 = FUNC_5(VAR_6, '\n');
 if (!VAR_8)
  return -1;
 VAR_8++;

 while (*VAR_8 != '\0') {
  int VAR_9, VAR_10, VAR_11, VAR_12;
  int VAR_13;
  char VAR_14[VAR_2];
  struct usbip_imported_device *VAR_15;
  char VAR_16[3];

  VAR_7 = FUNC_4(VAR_8, "%2s  %d %d %d %x %u %31s\n",
    VAR_16, &VAR_9, &VAR_10, &VAR_11,
    &VAR_12, &VAR_13, VAR_14);

  if (VAR_7 < 5) {
   FUNC_1("sscanf failed: %d", VAR_7);
   FUNC_0();
  }

  FUNC_1("hub %s port %d status %d speed %d devid %x",
    VAR_16, VAR_9, VAR_10, VAR_11, VAR_12);
  FUNC_1("sockfd %u lbusid %s", VAR_13, VAR_14);


  VAR_15 = &VAR_5->idev[VAR_9];
  FUNC_3(VAR_15, 0, sizeof(*VAR_15));

  if (FUNC_6("hs", VAR_16, 2) == 0)
   VAR_15->hub = VAR_0;
  else
   VAR_15->hub = VAR_1;

  VAR_15->port = VAR_9;
  VAR_15->status = VAR_10;

  VAR_15->devid = VAR_12;

  VAR_15->busnum = (VAR_12 >> 16);
  VAR_15->devnum = (VAR_12 & 0x0000ffff);

  if (VAR_15->status != VAR_4
      && VAR_15->status != VAR_3) {
   VAR_15 = FUNC_2(VAR_15, VAR_14);
   if (!VAR_15) {
    FUNC_1("imported_device_init failed");
    return -1;
   }
  }


  VAR_8 = FUNC_5(VAR_8, '\n');
  if (!VAR_8)
   break;
  VAR_8++;
 }

 FUNC_1("exit");

 return 0;
}
