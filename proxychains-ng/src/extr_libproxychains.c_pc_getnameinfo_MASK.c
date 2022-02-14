
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * s6_addr; } ;
struct sockaddr_in6 {unsigned int sin6_scope_id; TYPE_1__ sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct sockaddr const) ;
 int FUNC_3 (struct sockaddr const) ;
 int FUNC_4 (scalar_t__,void const*,char*,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (unsigned char*,int *,int) ;
 int FUNC_7 (int ) ;
 int VAR_4 ;
 int FUNC_8 (char*,int,char*,int) ;
 size_t FUNC_9 (char*) ;
 int FUNC_10 (struct sockaddr const*,int,char*,int,char*,int,int) ;

int FUNC_11(const struct sockaddr *VAR_5, socklen_t VAR_6,
            char *VAR_7, socklen_t VAR_8, char *VAR_9,
            socklen_t VAR_10, int VAR_11)
{
 FUNC_0();
 FUNC_1();

 if(!VAR_4) {
  return FUNC_10(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
 } else {
  if(!VAR_6 || !(FUNC_2(*VAR_5) == VAR_0 || FUNC_2(*VAR_5) == VAR_1))
   return VAR_2;
  int VAR_12 = FUNC_2(*VAR_5) == VAR_1;
  if(VAR_6 < (VAR_12?sizeof(struct sockaddr_in6):sizeof(struct sockaddr_in)))
   return VAR_2;
  if(VAR_8) {
   unsigned char VAR_13[4];
   const void *VAR_14 = VAR_12 ? (void*)&((struct sockaddr_in6*)VAR_5)->sin6_addr
                       : (void*)&((struct sockaddr_in*)VAR_5)->sin_addr;
   unsigned VAR_15 = 0;
   if(VAR_12) {
    if(FUNC_5(&((struct sockaddr_in6*)VAR_5)->sin6_addr)) {
     FUNC_6(VAR_13, &((struct sockaddr_in6*)VAR_5)->sin6_addr.s6_addr[12], 4);
     VAR_14 = VAR_13;
     VAR_12 = 0;
    } else
     VAR_15 = ((struct sockaddr_in6 *)VAR_5)->sin6_scope_id;
   }
   if(!FUNC_4(VAR_12?VAR_1:VAR_0,VAR_14,VAR_7,VAR_8))
    return VAR_3;
   if(VAR_15) {
    size_t VAR_16 = FUNC_9(VAR_7);
    if(FUNC_8(VAR_7+VAR_16, VAR_8-VAR_16, "%%%u", VAR_15) >= VAR_8-VAR_16)
     return VAR_3;
   }
  }
  if(VAR_10) {
   if(FUNC_8(VAR_9, VAR_10, "%d", FUNC_7(FUNC_3(*VAR_5))) >= VAR_10)
    return VAR_3;
  }
 }
 return 0;
}
