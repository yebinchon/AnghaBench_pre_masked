
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
typedef int uint16 ;
typedef TYPE_1__* pmbedtls_parame ;
struct TYPE_5__ {int parame_datalen; char* parame_data; int parame_type; scalar_t__ parame_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* VAR_6 ;
 TYPE_1__* VAR_7 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (char*,unsigned char const*,int) ;
 scalar_t__ FUNC_2 (unsigned char const*,char const* const) ;
 int FUNC_3 (scalar_t__,scalar_t__*,int) ;

bool FUNC_4(uint32 VAR_8, int VAR_9, const unsigned char *VAR_10, uint16 VAR_11)
{
 pmbedtls_parame VAR_12 = ((void*)0);
 uint32 VAR_13 = 0;
 bool VAR_14 = 0;

 if (VAR_8 != 0){
  FUNC_3(VAR_8 * VAR_5, (uint32*)&VAR_13, 4);
  if (VAR_13 != VAR_3){
   VAR_12 = FUNC_0(0);
   VAR_12->parame_datalen = VAR_11;
  }
 } else{
  const char* const VAR_15 = "-----BEGIN";
  int VAR_16 = VAR_1;




  if ((char*)FUNC_2(VAR_10, VAR_15) != ((void*)0)){
   VAR_16 = VAR_2;
  }else{
   VAR_16 = VAR_0;
  }

  if (VAR_16 == VAR_2){
   VAR_11 += 1;
  }

  VAR_12 = FUNC_0(VAR_11);
  if (VAR_12){
   FUNC_1(VAR_12->parame_data, VAR_10, VAR_11);
   if (VAR_16 == VAR_2)
    VAR_12->parame_data[VAR_11 - 1] = '\0';
  }
 }

 if (VAR_12){
  VAR_14 = 1;
  VAR_12->parame_type = VAR_9;
  VAR_12->parame_sec = VAR_8;
  if (VAR_9 == VAR_4){
   VAR_7 = VAR_12;
  } else{
   VAR_6 = VAR_12;
  }
 }
 return VAR_14;
}
