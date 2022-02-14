
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtmp_common {struct rtmp_common* key; struct rtmp_common* output; struct rtmp_common* server; struct rtmp_common* service; } ;


 int FUNC_0 (struct rtmp_common*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct rtmp_common *VAR_1 = VAR_0;

 FUNC_0(VAR_1->service);
 FUNC_0(VAR_1->server);
 FUNC_0(VAR_1->output);
 FUNC_0(VAR_1->key);
 FUNC_0(VAR_1);
}
