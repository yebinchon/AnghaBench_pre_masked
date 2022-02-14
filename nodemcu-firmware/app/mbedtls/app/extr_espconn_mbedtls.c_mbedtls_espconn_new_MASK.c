
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* pmbedtls_espconn ;
typedef int mbedtls_espconn ;
typedef int esp_tcp ;
struct TYPE_5__ {int * tcp; } ;
struct TYPE_6__ {TYPE_1__ proto; } ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static pmbedtls_espconn FUNC_2(void)
{
 pmbedtls_espconn VAR_0 = ((void*)0);
 VAR_0 = (pmbedtls_espconn)FUNC_1(sizeof(mbedtls_espconn));
 if (VAR_0){
  VAR_0->proto.tcp = (esp_tcp *)FUNC_1(sizeof(esp_tcp));
  if (VAR_0->proto.tcp == ((void*)0)){
   FUNC_0(VAR_0);
   VAR_0 = ((void*)0);
  }
 }

 return VAR_0;
}
