
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int obs_data_t ;
struct TYPE_4__ {scalar_t__ stream; scalar_t__ device; } ;


 int PULSE_DATA (void*) ;
 int bfree (scalar_t__) ;
 scalar_t__ bstrdup (char const*) ;
 TYPE_1__* data ;
 char* obs_data_get_string (int *,char*) ;
 int pulse_start_recording (TYPE_1__*) ;
 int pulse_stop_recording (TYPE_1__*) ;
 scalar_t__ strcmp (scalar_t__,char const*) ;

__attribute__((used)) static void pulse_update(void *vptr, obs_data_t *settings)
{
 PULSE_DATA(vptr);
 bool restart = 0;
 const char *new_device;

 new_device = obs_data_get_string(settings, "device_id");
 if (!data->device || strcmp(data->device, new_device) != 0) {
  if (data->device)
   bfree(data->device);
  data->device = bstrdup(new_device);
  restart = 1;
 }

 if (!restart)
  return;

 if (data->stream)
  pulse_stop_recording(data);
 pulse_start_recording(data);
}
