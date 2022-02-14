
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtmp_common {int * output; int * service; int * key; int * server; } ;
typedef int obs_data_t ;
typedef int json_t ;


 int FUNC_0 (int *) ;
 void* FUNC_1 (char const*) ;
 int FUNC_2 (struct rtmp_common*,int *,int *) ;
 int * FUNC_3 (int *,int *,char const**) ;
 char* FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (int *,char*) ;
 char* FUNC_8 (int *,char*) ;
 int * FUNC_9 () ;

__attribute__((used)) static void FUNC_10(void *VAR_0, obs_data_t *VAR_1)
{
 struct rtmp_common *VAR_2 = VAR_0;

 FUNC_0(VAR_2->service);
 FUNC_0(VAR_2->server);
 FUNC_0(VAR_2->output);
 FUNC_0(VAR_2->key);

 VAR_2->service = FUNC_1(FUNC_8(VAR_1, "service"));
 VAR_2->server = FUNC_1(FUNC_8(VAR_1, "server"));
 VAR_2->key = FUNC_1(FUNC_8(VAR_1, "key"));
 VAR_2->output = ((void*)0);

 json_t *VAR_3 = FUNC_9();
 if (VAR_3) {
  const char *VAR_4;
  json_t *VAR_5 = FUNC_3(VAR_3, VAR_2->service, &VAR_4);

  if (VAR_4) {
   FUNC_0(VAR_2->service);
   VAR_2->service = FUNC_1(VAR_4);
  }

  if (VAR_5) {
   json_t *VAR_6 = FUNC_7(VAR_5, "recommended");
   if (FUNC_6(VAR_6)) {
    const char *VAR_7 = FUNC_4(VAR_6, "output");
    if (VAR_7)
     VAR_2->output = FUNC_1(VAR_7);
   }

   FUNC_2(VAR_2, VAR_5, VAR_1);
  }
 }
 FUNC_5(VAR_3);

 if (!VAR_2->output)
  VAR_2->output = FUNC_1("rtmp_output");
}
