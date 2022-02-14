
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
typedef TYPE_1__* pmbedtls_parame ;
typedef int mbedtls_parame ;
struct TYPE_4__ {size_t parame_datalen; int * parame_data; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static pmbedtls_parame FUNC_2(size_t VAR_0)
{
 pmbedtls_parame VAR_1 = (pmbedtls_parame)FUNC_1(sizeof(mbedtls_parame));
 if (VAR_1 && VAR_0 != 0){
  VAR_1->parame_datalen = VAR_0;
  VAR_1->parame_data = (uint8*)FUNC_1(VAR_1->parame_datalen + 1);
  if (VAR_1->parame_data){

  } else{
   FUNC_0(VAR_1);
   VAR_1 = ((void*)0);
  }
 }
 return VAR_1;
}
