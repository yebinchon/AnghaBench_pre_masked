
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct addrinfo {int ai_family; int ai_protocol; int ai_addrlen; scalar_t__ ai_addr; int ai_socktype; } ;
typedef int ai_hints ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct sockaddr*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct addrinfo*) ;
 int FUNC_4 (char const*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_5 (struct addrinfo*,int ,int) ;
 int FUNC_6 (int,int ,int ,void*,int) ;
 int FUNC_7 (int,int ,int ) ;
 int FUNC_8 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_9(const char *VAR_7, int VAR_8, int VAR_9, int *VAR_10) {
 int VAR_11;
 int VAR_12;
 int VAR_13 = 1;
 struct addrinfo VAR_14;
 struct addrinfo *VAR_15 = ((void*)0);
 char VAR_16[16];
 if (VAR_7 == ((void*)0) || VAR_7[0] == 0) {
  VAR_7 = "0.0.0.0";
 }
 FUNC_8(VAR_16, "%d", VAR_8);
 FUNC_5( &VAR_14, 0, sizeof( VAR_14 ) );
 VAR_14.ai_family = VAR_0;
 if (VAR_9 == VAR_1) {
  VAR_14.ai_socktype = VAR_4;
 } else {
  FUNC_0(VAR_9 == VAR_2);
  VAR_14.ai_socktype = VAR_3;
 }
 VAR_14.ai_protocol = VAR_9;

 VAR_12 = FUNC_4( VAR_7, VAR_16, &VAR_14, &VAR_15 );
 if ( VAR_12 != 0 ) {
  return -1;
 }
 *VAR_10 = VAR_15->ai_family;
 VAR_11 = FUNC_7(*VAR_10, VAR_15->ai_socktype, 0);
 if (VAR_11 < 0) {
  goto _failed_fd;
 }
 if (FUNC_6(VAR_11, VAR_5, VAR_6, (void *)&VAR_13, sizeof(int))==-1) {
  goto _failed;
 }
 VAR_12 = FUNC_1(VAR_11, (struct sockaddr *)VAR_15->ai_addr, VAR_15->ai_addrlen);
 if (VAR_12 != 0)
  goto _failed;

 FUNC_3( VAR_15 );
 return VAR_11;
_failed:
 FUNC_2(VAR_11);
_failed_fd:
 FUNC_3( VAR_15 );
 return -1;
}
