
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {int dummy; } ;
typedef int fd_set ;
typedef int adns_query ;
typedef int adns_answer ;
struct TYPE_4__ {TYPE_1__* head; } ;
struct TYPE_3__ {int qu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int,int *,int *,int *,int ) ;
 int FUNC_4 (int ,int*,int *,int *,int *,struct timeval**,struct timeval*,int ) ;
 int FUNC_5 (int ,int *,int **,void**) ;
 int VAR_6 ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 () ;
 TYPE_2__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_10 (char const*,char const* const**,int ) ;
 int FUNC_11 (void*,int *) ;
 int FUNC_12 (int ) ;
 int VAR_11 ;
 int FUNC_13 () ;
 int FUNC_14 (int,int *,int *,int *,struct timeval*) ;
 int VAR_12 ;
 int FUNC_15 (char*,scalar_t__) ;
 int FUNC_16 (char*) ;

int FUNC_17(int VAR_13, const char *const *VAR_14) {
  struct timeval *VAR_15, VAR_16;
  adns_query VAR_17;
  void *VAR_18;
  adns_answer *VAR_19;
  int VAR_20, VAR_21;
  fd_set VAR_22, VAR_23, VAR_24;
  const char *VAR_25;

  FUNC_7();

  while ((VAR_25= *++VAR_14)) FUNC_10(VAR_25,&VAR_14,0);

  if (!VAR_10 && !VAR_6) FUNC_16("no domains given, and -f/--pipe not used; try --help");

  for (;;) {
    for (;;) {
      VAR_17= VAR_9 ? 0 : VAR_8.head ? VAR_8.head->qu : 0;
      VAR_20= FUNC_5(VAR_6,&VAR_17,&VAR_19,&VAR_18);
      if ((VAR_20 == VAR_2) || (VAR_20 == VAR_5)) break;
      if (VAR_20 == VAR_4) { if (!VAR_10) goto x_quit; else break; }
      FUNC_6(!VAR_20);
      FUNC_11(VAR_18,VAR_19);
    }
    VAR_21= 0;
    FUNC_2(&VAR_22);
    FUNC_2(&VAR_23);
    FUNC_2(&VAR_24);
    if (VAR_10) {
      VAR_21= 1;
      FUNC_1(0,&VAR_22);
    }
    VAR_15= 0;
    FUNC_4(VAR_6, &VAR_21, &VAR_22,&VAR_23,&VAR_24, &VAR_15,&VAR_16,0);
 VAR_1;
    VAR_20= FUNC_14(VAR_21, &VAR_22,&VAR_23,&VAR_24, VAR_15);
 VAR_0;
    if (VAR_20 == -1) {
      if (VAR_7 == VAR_3) continue;
      FUNC_15("select",VAR_7);
    }
    FUNC_3(VAR_6, VAR_21, &VAR_22,&VAR_23,&VAR_24, 0);
    if (VAR_10 && FUNC_0(0,&VAR_22)) FUNC_13();
  }
x_quit:
  if (FUNC_8(VAR_12)) FUNC_9();
  FUNC_12(VAR_11);
}
