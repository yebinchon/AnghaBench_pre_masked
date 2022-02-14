
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct skynet_socket_message {int dummy; } ;
struct skynet_context {int dummy; } ;
struct gate {int hash; } ;





 int FUNC_0 (struct gate*,void const*,int) ;
 int FUNC_1 (struct gate*,void const*,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct skynet_context*,char*,int,...) ;
 int FUNC_4 (struct skynet_context*,int,void*,size_t) ;

__attribute__((used)) static int
FUNC_5(struct skynet_context * VAR_0, void * VAR_1, int VAR_2, int VAR_3, uint32_t VAR_4, const void * VAR_5, size_t VAR_6) {
 struct gate *VAR_7 = VAR_1;
 switch(VAR_2) {
 case 128:
  FUNC_0(VAR_7 , VAR_5 , (int)VAR_6);
  break;
 case 130: {
  if (VAR_6 <=4 ) {
   FUNC_3(VAR_0, "Invalid client message from %x",VAR_4);
   break;
  }

  const uint8_t * VAR_8 = VAR_5 + VAR_6 - 4;
  uint32_t VAR_9 = VAR_8[0] | VAR_8[1] << 8 | VAR_8[2] << 16 | VAR_8[3] << 24;
  int VAR_10 = FUNC_2(&VAR_7->hash, VAR_9);
  if (VAR_10>=0) {

   FUNC_4(VAR_0, VAR_9, (void*)VAR_5, VAR_6-4);

   return 1;
  } else {
   FUNC_3(VAR_0, "Invalid client id %d from %x",(int)VAR_9,VAR_4);
   break;
  }
 }
 case 129:

  FUNC_1(VAR_7, VAR_5, (int)(VAR_6-sizeof(struct skynet_socket_message)));
  break;
 }
 return 0;
}
