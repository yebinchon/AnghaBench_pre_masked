
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jack_data {int channels; int jack_mutex; int * jack_client; int ** jack_ports; int device; scalar_t__ start_jack_server; } ;
typedef int port_name ;
typedef int jack_port_t ;
typedef int jack_options_t ;
typedef int int_fast32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int ,int ,int ) ;
 int * FUNC_4 (int *,char*,int ,int ,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int *,int ,struct jack_data*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int,char*,unsigned int) ;

int_fast32_t FUNC_9(struct jack_data *VAR_6)
{
 FUNC_6(&VAR_6->jack_mutex);

 if (VAR_6->jack_client != ((void*)0))
  goto good;

 jack_options_t VAR_7 =
  VAR_6->start_jack_server ? VAR_2 : VAR_1;

 VAR_6->jack_client = FUNC_3(VAR_6->device, VAR_7, 0);
 if (VAR_6->jack_client == ((void*)0)) {
  FUNC_0(VAR_4,
       "jack_client_open Error:"
       "Could not create JACK client! %s",
       VAR_6->device);
  goto error;
 }

 VAR_6->jack_ports =
  (jack_port_t **)FUNC_1(sizeof(jack_port_t *) * VAR_6->channels);
 for (unsigned int VAR_8 = 0; VAR_8 < VAR_6->channels; ++VAR_8) {
  char VAR_9[10] = {'\0'};
  FUNC_8(VAR_9, sizeof(VAR_9), "in_%u", VAR_8 + 1);

  VAR_6->jack_ports[VAR_8] = FUNC_4(
   VAR_6->jack_client, VAR_9, VAR_0,
   VAR_3, 0);
  if (VAR_6->jack_ports[VAR_8] == ((void*)0)) {
   FUNC_0(VAR_4,
        "jack_port_register Error:"
        "Could not create JACK port! %s",
        VAR_9);
   goto error;
  }
 }

 if (FUNC_5(VAR_6->jack_client, VAR_5,
          VAR_6) != 0) {
  FUNC_0(VAR_4, "jack_set_process_callback Error");
  goto error;
 }

 if (FUNC_2(VAR_6->jack_client) != 0) {
  FUNC_0(VAR_4, "jack_activate Error:"
    "Could not activate JACK client!");
  goto error;
 }

good:
 FUNC_7(&VAR_6->jack_mutex);
 return 0;

error:
 FUNC_7(&VAR_6->jack_mutex);
 return 1;
}
