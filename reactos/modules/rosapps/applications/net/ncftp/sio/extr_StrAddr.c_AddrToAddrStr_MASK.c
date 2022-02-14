
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {scalar_t__ sin_port; int sin_addr; } ;
struct servent {char* s_name; } ;
struct in_addr {int dummy; } ;
struct hostent {char* h_name; } ;


 int VAR_0 ;
 struct hostent* FUNC_0 (char*,int,int ) ;
 struct servent* FUNC_1 (int,char*) ;
 char* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,char*,unsigned int) ;

char *
FUNC_5(char *const VAR_1, size_t VAR_2, struct sockaddr_in * const VAR_3, int VAR_4, const char *VAR_5)
{
 const char *VAR_6;
 struct hostent *VAR_7;
 char VAR_8[128];
 char *VAR_9, *VAR_10;
 const char *VAR_11;
 struct servent *VAR_12;

 if (VAR_4 == 0) {
  VAR_6 = FUNC_2(VAR_3->sin_addr);
 } else {
  VAR_7 = FUNC_0((char *) &VAR_3->sin_addr, (int) sizeof(struct in_addr), VAR_0);
  if ((VAR_7 != ((void*)0)) && (VAR_7->h_name != ((void*)0)) && (VAR_7->h_name[0] != '\0')) {
   VAR_6 = VAR_7->h_name;
  } else {
   VAR_6 = FUNC_2(VAR_3->sin_addr);
  }
 }
 if (VAR_5 == ((void*)0))
  VAR_5 = "%h:%p";
 for (VAR_10 = VAR_1, VAR_9 = VAR_10 + VAR_2 - 1; ; VAR_5++) {
  if (*VAR_5 == '\0') {
   break;
  } else if (*VAR_5 == '%') {
   VAR_5++;
   if (*VAR_5 == '%') {
    if (VAR_10 < VAR_9)
     *VAR_10++ = '%';
   } else if (*VAR_5 == 'p') {
    FUNC_4(VAR_8, "%u", (unsigned int) FUNC_3(VAR_3->sin_port));
    for (VAR_11 = VAR_8; *VAR_11 != '\0'; VAR_11++)
     if (VAR_10 < VAR_9)
      *VAR_10++ = *VAR_11;
    *VAR_10 = '\0';
   } else if (*VAR_5 == 'h') {
    if (VAR_6 != ((void*)0)) {
     VAR_11 = VAR_6;
    } else {
     VAR_11 = "unknown";
    }
    for ( ; *VAR_11 != '\0'; VAR_11++)
     if (VAR_10 < VAR_9)
      *VAR_10++ = *VAR_11;
    *VAR_10 = '\0';
   } else if (*VAR_5 == 's') {
    VAR_12 = FUNC_1((int) (VAR_3->sin_port), "tcp");
    if (VAR_12 == ((void*)0))
     VAR_12 = FUNC_1((int) (VAR_3->sin_port), "udp");
    if (VAR_12 == ((void*)0)) {
     FUNC_4(VAR_8, "%u", (unsigned int) FUNC_3(VAR_3->sin_port));
     VAR_11 = VAR_8;
    } else {
     VAR_11 = VAR_12->s_name;
    }
    for ( ; *VAR_11 != '\0'; VAR_11++)
     if (VAR_10 < VAR_9)
      *VAR_10++ = *VAR_11;

    *VAR_10 = '\0';
   } else if ((*VAR_5 == 't') || (*VAR_5 == 'u')) {
    VAR_12 = FUNC_1((int) (VAR_3->sin_port), (*VAR_5 == 'u') ? "udp" : "tcp");
    if (VAR_12 == ((void*)0)) {
     FUNC_4(VAR_8, "%u", (unsigned int) FUNC_3(VAR_3->sin_port));
     VAR_11 = VAR_8;
    } else {
     VAR_11 = VAR_12->s_name;
    }
    for ( ; *VAR_11 != '\0'; VAR_11++)
     if (VAR_10 < VAR_9)
      *VAR_10++ = *VAR_11;

    *VAR_10 = '\0';
   } else if (*VAR_5 == '\0') {
    break;
   } else {
    if (VAR_10 < VAR_9)
     *VAR_10++ = *VAR_5;
   }
  } else if (VAR_10 < VAR_9) {
   *VAR_10++ = *VAR_5;
  }
 }
 *VAR_10 = '\0';
 return (VAR_1);
}
