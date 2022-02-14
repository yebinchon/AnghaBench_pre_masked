
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_data {int sock; } ;
struct addrinfo {int ai_addrlen; int ai_addr; scalar_t__ ai_protocol; int ai_socktype; int ai_family; struct addrinfo* ai_next; int ai_flags; } ;
typedef int strm_value ;
typedef int strm_string ;
typedef int strm_stream ;
typedef int sockopt ;
typedef int WSADATA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct addrinfo*) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (int *,char const*,struct addrinfo*,struct addrinfo**) ;
 scalar_t__ FUNC_7 (int,int) ;
 struct socket_data* FUNC_8 (int) ;
 int FUNC_9 (struct addrinfo*,int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_10 (int ,int ,int ,char*,int) ;
 int FUNC_11 (int ,int ,scalar_t__) ;
 int FUNC_12 (char*,char*,int) ;
 int FUNC_13 (int *,int,int *,char*,int *) ;
 scalar_t__ FUNC_14 (int ) ;
 int VAR_13 ;
 int FUNC_15 (int *,char*) ;
 char* FUNC_16 (int ,char*) ;
 int * FUNC_17 (int ,int ,int ,void*) ;
 int FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int ) ;
 int FUNC_20 (int ) ;

__attribute__((used)) static int
FUNC_21(strm_stream* VAR_14, int VAR_15, strm_value* VAR_16, strm_value* VAR_17)
{
  struct addrinfo VAR_18;
  struct addrinfo *VAR_19, *VAR_20;
  int VAR_21, VAR_22;
  strm_value VAR_23;
  const char *VAR_24;
  char VAR_25[12];
  struct socket_data *VAR_26;
  strm_stream *VAR_27;
  FUNC_13(VAR_14, VAR_15, VAR_16, "v", &VAR_23);
  if (FUNC_14(VAR_23)) {
    FUNC_12(VAR_25, "%d", (int)FUNC_19(VAR_23));
    VAR_24 = VAR_25;
  }
  else {
    strm_string VAR_28 = FUNC_20(VAR_23);
    VAR_24 = FUNC_16(VAR_28, VAR_25);
  }

  FUNC_9(&VAR_18, 0, sizeof(struct addrinfo));



  VAR_18.ai_family = VAR_1;

  VAR_18.ai_socktype = VAR_5;
  VAR_18.ai_flags = VAR_2;
  VAR_18.ai_protocol = 0;

  for (;;) {
    VAR_22 = FUNC_6(((void*)0), VAR_24, &VAR_18, &VAR_19);
    if (VAR_22 != 0) {
      if (VAR_22 == VAR_3) continue;
      FUNC_15(VAR_14, FUNC_5(VAR_22));
      return VAR_9;
    }
    break;
  }

  for (VAR_20 = VAR_19; VAR_20 != ((void*)0); VAR_20 = VAR_20->ai_next) {
    VAR_21 = FUNC_11(VAR_20->ai_family, VAR_20->ai_socktype, VAR_20->ai_protocol);
    if (VAR_21 == -1) continue;

    if (FUNC_2(VAR_21, VAR_20->ai_addr, VAR_20->ai_addrlen) == 0)
      break;
    FUNC_3(VAR_21);
  }

  FUNC_4(VAR_19);
  if (VAR_20 == ((void*)0)) {
    FUNC_15(VAR_14, "socket error: bind");
    return VAR_9;
  }

  if (FUNC_7(VAR_21, 5) < 0) {
    FUNC_3(VAR_21);
    FUNC_15(VAR_14, "socket error: listen");
    return VAR_9;
  }

  VAR_26 = FUNC_8(sizeof(struct socket_data));
  VAR_26->sock = VAR_21;
  VAR_27 = FUNC_17(VAR_13, VAR_11, VAR_12, (void*)VAR_26);
  *VAR_17 = FUNC_18(VAR_27);
  return VAR_10;
}
