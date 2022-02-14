
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_family; int sin_port; } ;
struct hostent {scalar_t__ h_length; int * h_addr_list; int h_addrtype; } ;
typedef int portstr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (char) ;
 unsigned int FUNC_1 (char*) ;
 unsigned int FUNC_2 (char*) ;
 scalar_t__ VAR_4 ;
 struct hostent* FUNC_3 (char*) ;
 int FUNC_4 (short) ;
 unsigned long FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (unsigned long*,int ,size_t) ;
 int FUNC_8 (struct sockaddr_in* const,int ,int) ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 (char*,char const* const,int) ;

int
FUNC_11(const char * const VAR_7, struct sockaddr_in * const VAR_8, const int VAR_9)
{
 char VAR_10[128];
 unsigned long VAR_11;
 unsigned int VAR_12;
 struct hostent *VAR_13;
 char *VAR_14, *VAR_15, *VAR_16, *VAR_17, *VAR_18;

 FUNC_8(VAR_8, 0, sizeof(struct sockaddr_in));
 FUNC_10(VAR_10, VAR_7, sizeof(VAR_10));
 VAR_10[sizeof(VAR_10) - 1] = '\0';

 if ((VAR_16 = FUNC_9(VAR_10, ':')) != ((void*)0)) {

  if ((VAR_16[1] == '/') && (VAR_16[2] == '/')) {
   *VAR_16 = '\0';
   VAR_12 = 0;
   VAR_14 = VAR_16 + 3;
   for (VAR_17 = VAR_14; *VAR_17 != '\0'; VAR_17++) {
    if ((!FUNC_0(*VAR_17)) && (*VAR_17 != '.')) {

     if ((*VAR_17 == ':') && (FUNC_6(VAR_17[1]))) {
      *VAR_17++ = '\0';
      VAR_18 = VAR_17;
      while (FUNC_6(*VAR_17))
       VAR_17++;
      *VAR_17 = '\0';
      VAR_12 = FUNC_2(VAR_18);
     }
     *VAR_17 = '\0';
     break;
    }
   }
   if (VAR_12 == 0)
    VAR_12 = FUNC_1(VAR_10);
  } else {

   *VAR_16 = '\0';
   VAR_14 = VAR_10;
   VAR_12 = (unsigned int) FUNC_2(VAR_16 + 1);
  }
 } else if ((VAR_15 = FUNC_9(VAR_10, '@')) != ((void*)0)) {

  *VAR_15 = '\0';
  VAR_14 = VAR_15 + 1;
  VAR_12 = (unsigned int) FUNC_2(VAR_10);
 } else if (VAR_9 > 0) {

  VAR_12 = (unsigned int) VAR_9;
  VAR_14 = VAR_10;
 } else {



  VAR_4 = VAR_1;
  return (VAR_6);
 }

 VAR_8->sin_port = FUNC_4((short) VAR_12);

 VAR_11 = FUNC_5(VAR_14);
 if (VAR_11 != VAR_3) {
  VAR_8->sin_family = VAR_0;
  VAR_8->sin_addr.s_addr = VAR_11;
 } else {
  VAR_4 = 0;
  VAR_13 = FUNC_3(VAR_14);
  if (VAR_13 == ((void*)0)) {
   if (VAR_4 == 0)
    VAR_4 = VAR_2;
   return (VAR_5);
  }
  VAR_8->sin_family = VAR_13->h_addrtype;
  FUNC_7(&VAR_8->sin_addr.s_addr, VAR_13->h_addr_list[0],
   (size_t) VAR_13->h_length);
 }
 return (0);
}
