
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alsa_data {char const* device; unsigned int rate; scalar_t__ handle; scalar_t__ active; } ;
typedef int obs_data_t ;


 int FUNC_0 (struct alsa_data*) ;
 int FUNC_1 (struct alsa_data*) ;
 int FUNC_2 (char const*) ;
 char const* FUNC_3 (char const*) ;
 unsigned int FUNC_4 (int *,char*) ;
 char* FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (char const*,char const*) ;

void FUNC_7(void *VAR_0, obs_data_t *VAR_1)
{
 struct alsa_data *VAR_2 = VAR_0;
 const char *VAR_3;
 unsigned int VAR_4;
 bool VAR_5 = 0;

 VAR_3 = FUNC_5(VAR_1, "device_id");

 if (FUNC_6(VAR_3, "__custom__") == 0)
  VAR_3 = FUNC_5(VAR_1, "custom_pcm");

 if (FUNC_6(VAR_2->device, VAR_3) != 0) {
  FUNC_2(VAR_2->device);
  VAR_2->device = FUNC_3(VAR_3);
  VAR_5 = 1;
 }

 VAR_4 = FUNC_4(VAR_1, "rate");
 if (VAR_2->rate != VAR_4) {
  VAR_2->rate = VAR_4;
  VAR_5 = 1;
 }
 if (VAR_5) {
  if (VAR_2->handle)
   FUNC_0(VAR_2);
  FUNC_1(VAR_2);
 }

}
