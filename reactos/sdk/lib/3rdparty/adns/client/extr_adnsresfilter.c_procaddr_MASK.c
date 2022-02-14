
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct treething {scalar_t__ qu; int * bytes; scalar_t__ ans; } ;
struct sockaddr {int dummy; } ;
struct outqueuenode {int textlen; int printbefore; struct treething* addr; int * textp; int * buffer; } ;
struct TYPE_2__ {int sin_addr; } ;


 int FUNC_0 (int ,struct outqueuenode*) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct sockaddr const*,int ,int ,struct treething*,scalar_t__*) ;
 int FUNC_2 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int ,int) ;
 struct treething* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;
 int FUNC_4 (char*) ;
 int VAR_12 ;
 void** FUNC_5 (struct treething*,int *,int ) ;
 void* FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(void) {
  struct treething *VAR_13;
  void **VAR_14;
  struct outqueuenode *VAR_15;
  int VAR_16;

  if (!VAR_6) {
    VAR_6= FUNC_6(sizeof(struct treething));
    VAR_6->qu= 0;
    VAR_6->ans= 0;
  }

  FUNC_3(VAR_6->bytes,VAR_2,4);
  VAR_14= FUNC_5(VAR_6,&VAR_12,VAR_4);
  if (!VAR_14) FUNC_4("tsearch");
  VAR_13= *VAR_14;

  if (VAR_13 == VAR_6) {
    VAR_6= 0;
    FUNC_3(&VAR_11.sin_addr,VAR_2,4);
    VAR_16= FUNC_1(VAR_1, (const struct sockaddr*)&VAR_11,
      VAR_10,0,VAR_13,&VAR_13->qu);
    if (VAR_16) FUNC_2("submit",VAR_16);
  }
  VAR_15= FUNC_6(sizeof(*VAR_15));
  VAR_15->buffer= FUNC_6(VAR_5);
  VAR_15->textp= VAR_15->buffer;
  FUNC_3(VAR_15->textp,VAR_0,VAR_5);
  VAR_15->textlen= VAR_5;
  VAR_15->addr= VAR_13;
  VAR_15->printbefore= VAR_9;
  FUNC_0(VAR_7,VAR_15);
  VAR_8++;
  VAR_5= 0;
  VAR_3= -1;
}
