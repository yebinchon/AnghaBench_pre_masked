
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
typedef TYPE_1__* pmbedtls_parame ;
struct TYPE_4__ {int parame_sec; scalar_t__ parame_datalen; unsigned char* parame_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_0 (unsigned char*,char const* const) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__*,scalar_t__) ;

__attribute__((used)) static unsigned char* FUNC_3(uint32 *VAR_5, uint32 VAR_6, uint32 *VAR_7)
{
 const char* const VAR_8 = "-----BEGIN";
 unsigned char *VAR_9 = ((void*)0);
 pmbedtls_parame VAR_10 = ((void*)0);

 if (VAR_6 == VAR_1){
  VAR_10 = VAR_4;
 } else{
  VAR_10 = VAR_3;
 }

 if (VAR_10->parame_sec != 0){

  uint32 VAR_11 = VAR_10->parame_datalen;
  VAR_9 = (unsigned char *)FUNC_1(VAR_11 + 4);
  if (VAR_9){
   FUNC_2(VAR_10->parame_sec * VAR_2, (uint32*)VAR_9, VAR_11);




   if ((char*)FUNC_0(VAR_9, VAR_8) != ((void*)0)){
    VAR_11 ++;
    VAR_9[VAR_11 - 1] = '\0';
   }
  }
  *VAR_7 = VAR_11;
 } else{
  VAR_9 = VAR_10->parame_data;
  *VAR_7 = VAR_10->parame_datalen;
 }

 *VAR_5 = VAR_10->parame_sec;
 return VAR_9;
}
