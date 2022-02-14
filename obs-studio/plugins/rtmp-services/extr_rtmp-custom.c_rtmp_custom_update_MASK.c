
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtmp_custom {void* password; void* username; int use_auth; void* key; void* server; } ;
typedef int obs_data_t ;


 int FUNC_0 (void*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static void FUNC_4(void *VAR_0, obs_data_t *VAR_1)
{
 struct rtmp_custom *VAR_2 = VAR_0;

 FUNC_0(VAR_2->server);
 FUNC_0(VAR_2->key);

 VAR_2->server = FUNC_1(FUNC_3(VAR_1, "server"));
 VAR_2->key = FUNC_1(FUNC_3(VAR_1, "key"));
 VAR_2->use_auth = FUNC_2(VAR_1, "use_auth");
 VAR_2->username = FUNC_1(FUNC_3(VAR_1, "username"));
 VAR_2->password = FUNC_1(FUNC_3(VAR_1, "password"));
}
