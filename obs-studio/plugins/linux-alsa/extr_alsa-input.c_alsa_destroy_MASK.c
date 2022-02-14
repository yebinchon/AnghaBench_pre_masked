
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alsa_data {struct alsa_data* device; int abort_event; scalar_t__ handle; } ;


 int FUNC_0 (struct alsa_data*) ;
 int FUNC_1 (struct alsa_data*) ;
 int FUNC_2 (int ) ;

void FUNC_3(void *VAR_0)
{
 struct alsa_data *VAR_1 = VAR_0;

 if (VAR_1->handle)
  FUNC_0(VAR_1);

 FUNC_2(VAR_1->abort_event);
 FUNC_1(VAR_1->device);
 FUNC_1(VAR_1);
}
