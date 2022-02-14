
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_addrlen; int ai_addr; scalar_t__ ai_protocol; int ai_socktype; int ai_family; struct addrinfo* ai_next; } ;
typedef int strm_value ;
typedef int strm_string ;
typedef int strm_stream ;
typedef int WSADATA ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (struct addrinfo*) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (char*,char const*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_7 (struct addrinfo*,int ,int) ;
 int FUNC_8 (int ,int ,scalar_t__) ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 (int *,int,int *,char*,int *,int *) ;
 int FUNC_11 (int,int) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int *,char*) ;
 char* FUNC_14 (int ,char*) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static int
FUNC_17(strm_stream* VAR_8, int VAR_9, strm_value* VAR_10, strm_value* VAR_11)
{
  struct addrinfo VAR_12;
  struct addrinfo *VAR_13, *VAR_14;
  int VAR_15, VAR_16;
  const char *VAR_17;
  char VAR_18[12], VAR_19[7];
  strm_string VAR_20;
  strm_value VAR_21;






  FUNC_10(VAR_8, VAR_9, VAR_10, "Sv", &VAR_20, &VAR_21);
  if (FUNC_12(VAR_21)) {
    FUNC_9(VAR_18, "%d", (int)FUNC_15(VAR_21));
    VAR_17 = VAR_18;
  }
  else {
    strm_string VAR_22 = FUNC_16(VAR_21);
    VAR_17 = FUNC_14(VAR_22, VAR_18);
  }

  FUNC_7(&VAR_12, 0, sizeof(struct addrinfo));



  VAR_12.ai_family = VAR_1;

  VAR_12.ai_socktype = VAR_2;
  VAR_12.ai_protocol = 0;
  VAR_16 = FUNC_6(FUNC_14(VAR_20, VAR_19), VAR_17, &VAR_12, &VAR_13);

  if (VAR_16 != 0) {
    FUNC_13(VAR_8, FUNC_5(VAR_16));
    return VAR_6;
  }

  for (VAR_14 = VAR_13; VAR_14 != ((void*)0); VAR_14 = VAR_14->ai_next) {
    VAR_15 = FUNC_8(VAR_14->ai_family, VAR_14->ai_socktype, VAR_14->ai_protocol);
    if (VAR_15 == -1) continue;

    if (FUNC_3(VAR_15, VAR_14->ai_addr, VAR_14->ai_addrlen) != -1)
      break;
    FUNC_2(VAR_15);
  }

  FUNC_4(VAR_13);
  if (VAR_14 == ((void*)0)) {
    FUNC_13(VAR_8, "socket error: connect");
    return VAR_6;
  }
  *VAR_11 = FUNC_11(VAR_15, VAR_4|VAR_5|VAR_3);
  return VAR_7;
}
