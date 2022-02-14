
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_flags; int ai_family; int ai_socktype; int ai_protocol; int ai_addrlen; scalar_t__ ai_addr; struct addrinfo* ai_next; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;
typedef int hints ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *,int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (struct addrinfo*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char const*,char const*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_5 (struct addrinfo*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int *,struct addrinfo*) ;
 int FUNC_11 (int *,int ,int ) ;
 int FUNC_12 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int *,int ,int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int *,int ,char*,int,int ,int ,int ,int ) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,char*,int *,int *,int *,int *,int *,scalar_t__*) ;
 int FUNC_21 (int *,char*) ;
 scalar_t__ FUNC_22 (int ) ;
 int FUNC_23 () ;
 int FUNC_24 (int *,int ,char*) ;
 int FUNC_25 (int *,int ,char*,int ) ;
 int FUNC_26 (int *,char*,int ) ;
 scalar_t__ FUNC_27 (int ) ;

__attribute__((used)) static mrb_value
FUNC_28(mrb_state *VAR_2, mrb_value VAR_3)
{
  struct addrinfo VAR_4, *VAR_5, *VAR_6;
  mrb_value VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
  mrb_int VAR_16;
  int VAR_17, VAR_18;
  const char *VAR_19 = ((void*)0), *VAR_20 = ((void*)0);

  VAR_8 = FUNC_6(VAR_2);
  VAR_17 = FUNC_19(VAR_2);

  VAR_9 = VAR_15 = VAR_12 = FUNC_23();
  VAR_16 = 0;
  FUNC_20(VAR_2, "oo|oooi", &VAR_11, &VAR_14, &VAR_9, &VAR_15, &VAR_12, &VAR_16);

  if (FUNC_27(VAR_11)) {
    VAR_19 = FUNC_0(VAR_2, VAR_11);
  } else if (FUNC_22(VAR_11)) {
    VAR_19 = ((void*)0);
  } else {
    FUNC_24(VAR_2, VAR_1, "nodename must be String or nil");
  }

  if (FUNC_27(VAR_14)) {
    VAR_20 = FUNC_0(VAR_2, VAR_14);
  } else if (FUNC_14(VAR_14)) {
    VAR_20 = FUNC_1(FUNC_15(VAR_2, VAR_14, 10));
  } else if (FUNC_22(VAR_14)) {
    VAR_20 = ((void*)0);
  } else {
    FUNC_24(VAR_2, VAR_1, "service must be String, Fixnum, or nil");
  }

  FUNC_5(&VAR_4, 0, sizeof(VAR_4));
  VAR_4.ai_flags = (int)VAR_16;

  if (FUNC_14(VAR_9)) {
    VAR_4.ai_family = (int)FUNC_13(VAR_9);
  }

  if (FUNC_14(VAR_15)) {
    VAR_4.ai_socktype = (int)FUNC_13(VAR_15);
  }

  if (FUNC_14(VAR_12)) {
    VAR_4.ai_protocol = (int)FUNC_13(VAR_12);
  }

  VAR_10 = FUNC_11(VAR_2, VAR_3, FUNC_21(VAR_2, "_lastai"));
  if (FUNC_9(VAR_10)) {
    FUNC_2((struct addrinfo*)FUNC_8(VAR_10));
    FUNC_12(VAR_2, VAR_3, FUNC_21(VAR_2, "_lastai"), FUNC_23());
  }

  VAR_18 = FUNC_4(VAR_19, VAR_20, &VAR_4, &VAR_5);
  if (VAR_18) {
    FUNC_25(VAR_2, VAR_0, "getaddrinfo: %s", FUNC_3(VAR_18));
  }
  FUNC_12(VAR_2, VAR_3, FUNC_21(VAR_2, "_lastai"), FUNC_10(VAR_2, VAR_5));

  for (VAR_6 = VAR_5; VAR_6 != ((void*)0); VAR_6 = VAR_6->ai_next) {
    VAR_13 = FUNC_26(VAR_2, (char*)VAR_6->ai_addr, VAR_6->ai_addrlen);
    VAR_7 = FUNC_17(VAR_2, VAR_3, "new", 4, VAR_13, FUNC_16(VAR_6->ai_family), FUNC_16(VAR_6->ai_socktype), FUNC_16(VAR_6->ai_protocol));
    FUNC_7(VAR_2, VAR_8, VAR_7);
    FUNC_18(VAR_2, VAR_17);
  }

  FUNC_2(VAR_5);
  FUNC_12(VAR_2, VAR_3, FUNC_21(VAR_2, "_lastai"), FUNC_23());

  return VAR_8;
}
