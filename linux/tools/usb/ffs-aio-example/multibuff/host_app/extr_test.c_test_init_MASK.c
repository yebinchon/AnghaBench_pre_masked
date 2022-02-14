
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_state {int attached; int * ctx; int * handle; int * found; } ;
struct libusb_device_descriptor {scalar_t__ idVendor; scalar_t__ idProduct; } ;
typedef int ssize_t ;
typedef int libusb_device ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int) ;
 int FUNC_7 (int *,struct libusb_device_descriptor*) ;
 int FUNC_8 (int *,int ***) ;
 int FUNC_9 (int **) ;
 int FUNC_10 (int *,int **) ;
 int FUNC_11 (char*,...) ;

int FUNC_12(struct test_state *VAR_2)
{
 int VAR_3, VAR_4;
 ssize_t VAR_5;
 libusb_device **VAR_6;

 VAR_2->found = ((void*)0);
 VAR_2->ctx = ((void*)0);
 VAR_2->handle = ((void*)0);
 VAR_2->attached = 0;

 VAR_4 = FUNC_9(&VAR_2->ctx);
 if (VAR_4) {
  FUNC_11("cannot init libusb: %s\n", FUNC_4(VAR_4));
  return 1;
 }

 VAR_5 = FUNC_8(VAR_2->ctx, &VAR_6);
 if (VAR_5 <= 0) {
  FUNC_11("no devices found\n");
  goto error1;
 }

 for (VAR_3 = 0; VAR_3 < VAR_5; ++VAR_3) {
  libusb_device *VAR_7 = VAR_6[VAR_3];
  struct libusb_device_descriptor VAR_8;
  VAR_4 = FUNC_7(VAR_7, &VAR_8);
  if (VAR_4) {
   FUNC_11("unable to get device descriptor: %s\n",
          FUNC_4(VAR_4));
   goto error2;
  }
  if (VAR_8.idVendor == VAR_1 && VAR_8.idProduct == VAR_0) {
   VAR_2->found = VAR_7;
   break;
  }
 }

 if (!VAR_2->found) {
  FUNC_11("no devices found\n");
  goto error2;
 }

 VAR_4 = FUNC_10(VAR_2->found, &VAR_2->handle);
 if (VAR_4) {
  FUNC_11("cannot open device: %s\n", FUNC_4(VAR_4));
  goto error2;
 }

 if (FUNC_1(VAR_2->handle, 0)) {
  VAR_4 = FUNC_3(VAR_2->handle, 0);
  if (VAR_4) {
   FUNC_11("unable to detach kernel driver: %s\n",
          FUNC_4(VAR_4));
   goto error3;
  }
  VAR_2->attached = 1;
  VAR_4 = FUNC_1(VAR_2->handle, 0);
  if (VAR_4) {
   FUNC_11("cannot claim interface: %s\n",
          FUNC_4(VAR_4));
   goto error4;
  }
 }

 return 0;

error4:
 if (VAR_2->attached == 1)
  FUNC_0(VAR_2->handle, 0);

error3:
 FUNC_2(VAR_2->handle);

error2:
 FUNC_6(VAR_6, 1);

error1:
 FUNC_5(VAR_2->ctx);
 return 1;
}
