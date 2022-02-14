
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alsa_data {int device; int listen_thread; int handle; } ;
typedef int pthread_attr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct alsa_data*) ;
 int FUNC_1 (struct alsa_data*) ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,int ,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int *,int ,struct alsa_data*) ;
 int FUNC_7 (int *,int ,int ,int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int) ;

bool FUNC_11(struct alsa_data *VAR_5)
{
 pthread_attr_t VAR_6;
 int VAR_7;

 VAR_7 = FUNC_7(&VAR_5->handle, VAR_5->device, VAR_3,
      0);
 if (VAR_7 < 0) {
  FUNC_2(VAR_0, "Failed to open '%s': %s", VAR_5->device,
       FUNC_10(VAR_7));
  return 0;
 }

 if (!FUNC_1(VAR_5))
  goto cleanup;

 if (FUNC_9(VAR_5->handle) != VAR_2) {
  FUNC_2(VAR_0, "Device not prepared: '%s'", VAR_5->device);
  goto cleanup;
 }



 VAR_7 = FUNC_8(VAR_5->handle);
 if (VAR_7 < 0) {
  FUNC_2(VAR_0, "Failed to start '%s': %s", VAR_5->device,
       FUNC_10(VAR_7));
  goto cleanup;
 }



 FUNC_4(&VAR_6);
 FUNC_5(&VAR_6, VAR_1);

 VAR_7 = FUNC_6(&VAR_5->listen_thread, &VAR_6, VAR_4, VAR_5);
 if (VAR_7) {
  FUNC_3(&VAR_6);
  FUNC_2(VAR_0,
       "Failed to create capture thread for device '%s'.",
       VAR_5->device);
  goto cleanup;
 }

 FUNC_3(&VAR_6);
 return 1;

cleanup:
 FUNC_0(VAR_5);
 return 0;
}
