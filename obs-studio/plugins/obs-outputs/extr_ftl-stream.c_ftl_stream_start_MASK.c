
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftl_stream {int connect_thread; int connecting; scalar_t__ frames_sent; int output; } ;
typedef int obs_encoder_t ;
typedef int obs_data_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int *,int *,int ,struct ftl_stream*) ;

__attribute__((used)) static bool FUNC_9(void *VAR_1)
{
 struct ftl_stream *VAR_2 = VAR_1;

 FUNC_0("ftl_stream_start");


 obs_encoder_t *VAR_3 =
  FUNC_5(VAR_2->output);
 obs_data_t *VAR_4 = FUNC_3(VAR_3);
 FUNC_2(VAR_4, "bf", 0);
 FUNC_1(VAR_4);

 if (!FUNC_4(VAR_2->output, 0)) {
  return 0;
 }
 if (!FUNC_6(VAR_2->output, 0)) {
  return 0;
 }

 VAR_2->frames_sent = 0;
 FUNC_7(&VAR_2->connecting, 1);

 return FUNC_8(&VAR_2->connect_thread, ((void*)0), VAR_0,
         VAR_2) == 0;
}
