
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct mrb_io {int fd; int fd2; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;
typedef int fd_set ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ) ;
 scalar_t__ VAR_3 ;
 struct mrb_io* FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *,char*,int **,int*) ;
 scalar_t__ FUNC_11 (int *,int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 (int *,int ,char*,int) ;
 int FUNC_15 (int *,char*) ;
 int FUNC_16 (int,int *,int *,int *,struct timeval*) ;
 struct timeval FUNC_17 (int *,int ) ;

__attribute__((used)) static mrb_value
FUNC_18(mrb_state *VAR_4, mrb_value VAR_5)
{
  mrb_value *VAR_6;
  mrb_int VAR_7;
  mrb_value VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
  struct timeval *VAR_14, VAR_15;
  fd_set VAR_16, VAR_17, VAR_18, VAR_19;
  fd_set *VAR_20, *VAR_21, *VAR_22;
  struct mrb_io *VAR_23;
  int VAR_24 = 0;
  mrb_value VAR_25;
  int VAR_26 = 0;
  int VAR_27 = 0;
  int VAR_28, VAR_29;

  FUNC_10(VAR_4, "*", &VAR_6, &VAR_7);

  if (VAR_7 < 1 || VAR_7 > 4) {
    FUNC_14(VAR_4, VAR_1, "wrong number of arguments (%i for 1..4)", VAR_7);
  }

  VAR_12 = FUNC_13();
  VAR_11 = FUNC_13();
  VAR_10 = FUNC_13();
  if (VAR_7 > 3)
    VAR_12 = VAR_6[3];
  if (VAR_7 > 2)
    VAR_11 = VAR_6[2];
  if (VAR_7 > 1)
    VAR_10 = VAR_6[1];
  VAR_8 = VAR_6[0];

  if (FUNC_12(VAR_12)) {
    VAR_14 = ((void*)0);
  } else {
    VAR_15 = FUNC_17(VAR_4, VAR_12);
    VAR_14 = &VAR_15;
  }

  FUNC_2(&VAR_16);
  if (!FUNC_12(VAR_8)) {
    FUNC_9(VAR_4, VAR_8, VAR_2);
    VAR_20 = &VAR_17;
    FUNC_2(VAR_20);
    for (VAR_28 = 0; VAR_28 < FUNC_3(VAR_8); VAR_28++) {
      VAR_9 = FUNC_4(VAR_8)[VAR_28];
      VAR_23 = FUNC_5(VAR_4, VAR_9);
      FUNC_1(VAR_23->fd, VAR_20);
      if (FUNC_11(VAR_4, VAR_9)) {
        VAR_24++;
        FUNC_1(VAR_23->fd, &VAR_16);
      }
      if (VAR_26 < VAR_23->fd)
        VAR_26 = VAR_23->fd;
    }
    if (VAR_24) {
      VAR_15.tv_sec = VAR_15.tv_usec = 0;
      VAR_14 = &VAR_15;
    }
  } else {
    VAR_20 = ((void*)0);
  }

  if (!FUNC_12(VAR_10)) {
    FUNC_9(VAR_4, VAR_10, VAR_2);
    VAR_21 = &VAR_18;
    FUNC_2(VAR_21);
    for (VAR_28 = 0; VAR_28 < FUNC_3(VAR_10); VAR_28++) {
      VAR_23 = FUNC_5(VAR_4, FUNC_4(VAR_10)[VAR_28]);
      FUNC_1(VAR_23->fd, VAR_21);
      if (VAR_26 < VAR_23->fd)
        VAR_26 = VAR_23->fd;
      if (VAR_23->fd2 >= 0) {
        FUNC_1(VAR_23->fd2, VAR_21);
        if (VAR_26 < VAR_23->fd2)
          VAR_26 = VAR_23->fd2;
      }
    }
  } else {
    VAR_21 = ((void*)0);
  }

  if (!FUNC_12(VAR_11)) {
    FUNC_9(VAR_4, VAR_11, VAR_2);
    VAR_22 = &VAR_19;
    FUNC_2(VAR_22);
    for (VAR_28 = 0; VAR_28 < FUNC_3(VAR_11); VAR_28++) {
      VAR_23 = FUNC_5(VAR_4, FUNC_4(VAR_11)[VAR_28]);
      FUNC_1(VAR_23->fd, VAR_22);
      if (VAR_26 < VAR_23->fd)
        VAR_26 = VAR_23->fd;
      if (VAR_23->fd2 >= 0) {
        FUNC_1(VAR_23->fd2, VAR_22);
        if (VAR_26 < VAR_23->fd2)
          VAR_26 = VAR_23->fd2;
      }
    }
  } else {
    VAR_22 = ((void*)0);
  }

  VAR_26++;

retry:
  VAR_29 = FUNC_16(VAR_26, VAR_20, VAR_21, VAR_22, VAR_14);
  if (VAR_29 < 0) {
    if (VAR_3 != VAR_0)
      FUNC_15(VAR_4, "select failed");
    if (VAR_14 == ((void*)0))
      goto retry;
    VAR_27 = 1;
  }

  if (!VAR_24 && VAR_29 == 0)
    return FUNC_13();

  VAR_25 = FUNC_7(VAR_4, 3);
  FUNC_8(VAR_4, VAR_25, VAR_20? FUNC_6(VAR_4) : FUNC_7(VAR_4, 0));
  FUNC_8(VAR_4, VAR_25, VAR_21? FUNC_6(VAR_4) : FUNC_7(VAR_4, 0));
  FUNC_8(VAR_4, VAR_25, VAR_22? FUNC_6(VAR_4) : FUNC_7(VAR_4, 0));

  if (VAR_27 == 0) {
    if (VAR_20) {
      VAR_13 = FUNC_4(VAR_25)[0];
      for (VAR_28 = 0; VAR_28 < FUNC_3(VAR_8); VAR_28++) {
        VAR_23 = FUNC_5(VAR_4, FUNC_4(VAR_8)[VAR_28]);
        if (FUNC_0(VAR_23->fd, VAR_20) ||
            FUNC_0(VAR_23->fd, &VAR_16)) {
          FUNC_8(VAR_4, VAR_13, FUNC_4(VAR_8)[VAR_28]);
        }
      }
    }

    if (VAR_21) {
      VAR_13 = FUNC_4(VAR_25)[1];
      for (VAR_28 = 0; VAR_28 < FUNC_3(VAR_10); VAR_28++) {
        VAR_23 = FUNC_5(VAR_4, FUNC_4(VAR_10)[VAR_28]);
        if (FUNC_0(VAR_23->fd, VAR_21)) {
          FUNC_8(VAR_4, VAR_13, FUNC_4(VAR_10)[VAR_28]);
        } else if (VAR_23->fd2 >= 0 && FUNC_0(VAR_23->fd2, VAR_21)) {
          FUNC_8(VAR_4, VAR_13, FUNC_4(VAR_10)[VAR_28]);
        }
      }
    }

    if (VAR_22) {
      VAR_13 = FUNC_4(VAR_25)[2];
      for (VAR_28 = 0; VAR_28 < FUNC_3(VAR_11); VAR_28++) {
        VAR_23 = FUNC_5(VAR_4, FUNC_4(VAR_11)[VAR_28]);
        if (FUNC_0(VAR_23->fd, VAR_22)) {
          FUNC_8(VAR_4, VAR_13, FUNC_4(VAR_11)[VAR_28]);
        } else if (VAR_23->fd2 >= 0 && FUNC_0(VAR_23->fd2, VAR_22)) {
          FUNC_8(VAR_4, VAR_13, FUNC_4(VAR_11)[VAR_28]);
        }
      }
    }
  }

  return VAR_25;
}
