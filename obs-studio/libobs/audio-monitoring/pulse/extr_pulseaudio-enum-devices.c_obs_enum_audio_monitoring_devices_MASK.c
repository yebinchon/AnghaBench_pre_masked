
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enum_cb {int cont; void* data; int cb; } ;
typedef int pa_source_info_cb_t ;
typedef int obs_enum_audio_device_cb ;


 int FUNC_0 (struct enum_cb*) ;
 struct enum_cb* FUNC_1 (int) ;
 int FUNC_2 (int ,void*) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int FUNC_4 () ;

void FUNC_5(obs_enum_audio_device_cb VAR_1, void *VAR_2)
{
 struct enum_cb *VAR_3 = FUNC_1(sizeof(struct enum_cb));
 VAR_3->cb = VAR_1;
 VAR_3->data = VAR_2;
 VAR_3->cont = 1;

 FUNC_3();
 pa_source_info_cb_t VAR_4 = VAR_0;
 FUNC_2(VAR_4, (void *)VAR_3);
 FUNC_4();

 FUNC_0(VAR_3);
}
