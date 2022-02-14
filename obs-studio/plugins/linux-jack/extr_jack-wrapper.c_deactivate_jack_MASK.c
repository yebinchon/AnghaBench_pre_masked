
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jack_data {int channels; int jack_mutex; int * jack_client; int ** jack_ports; } ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct jack_data *VAR_0)
{
 FUNC_3(&VAR_0->jack_mutex);

 if (VAR_0->jack_client) {
  if (VAR_0->jack_ports != ((void*)0)) {
   for (int VAR_1 = 0; VAR_1 < VAR_0->channels; ++VAR_1) {
    if (VAR_0->jack_ports[VAR_1] != ((void*)0))
     FUNC_2(
      VAR_0->jack_client,
      VAR_0->jack_ports[VAR_1]);
   }
   FUNC_0(VAR_0->jack_ports);
   VAR_0->jack_ports = ((void*)0);
  }
  FUNC_1(VAR_0->jack_client);
  VAR_0->jack_client = ((void*)0);
 }
 FUNC_4(&VAR_0->jack_mutex);
}
