
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct addrinfo {int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ai_family; struct addrinfo* ai_next; } ;
typedef int socklen_t ;
typedef int evutil_socket_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*,char const*,...) ;
 int FUNC_1 (struct addrinfo*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char const*,char const*,struct addrinfo*,struct addrinfo**) ;
 struct sockaddr* FUNC_4 (int ) ;
 int FUNC_5 (struct sockaddr*,int ,int ) ;
 int FUNC_6 (struct addrinfo*,int ,int) ;
 int FUNC_7 (int ,int ,int ) ;

evutil_socket_t
FUNC_8 (const char *VAR_2, const char *VAR_3,
            struct sockaddr **VAR_4, socklen_t *VAR_5)
{
 evutil_socket_t VAR_6;
    int VAR_7;
 struct addrinfo VAR_8, *VAR_9, *VAR_10;

 FUNC_6 (&VAR_8, 0, sizeof(struct addrinfo));
 VAR_8.ai_family = VAR_0;
 VAR_8.ai_socktype = VAR_1;

 if ((VAR_7 = FUNC_3(VAR_2, VAR_3, &VAR_8, &VAR_9)) != 0) {
        FUNC_0 ("udp_client error for %s, %s: %s",
                       VAR_2, VAR_3, FUNC_2(VAR_7));
        return -1;
    }
 VAR_10 = VAR_9;

 do {
  VAR_6 = FUNC_7(VAR_9->ai_family, VAR_9->ai_socktype, VAR_9->ai_protocol);
  if (VAR_6 >= 0)
   break;
 } while ( (VAR_9 = VAR_9->ai_next) != ((void*)0));

 if (VAR_9 == ((void*)0)) {
  FUNC_0 ("udp_client error for %s, %s", VAR_2, VAR_3);
        FUNC_1 (VAR_10);
        return -1;
    }

 *VAR_4 = FUNC_4(VAR_9->ai_addrlen);
 FUNC_5(*VAR_4, VAR_9->ai_addr, VAR_9->ai_addrlen);
 *VAR_5 = VAR_9->ai_addrlen;

 FUNC_1(VAR_10);

 return (VAR_6);
}
