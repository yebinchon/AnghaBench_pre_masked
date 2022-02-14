
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct outqueuenode {char* buffer; char* textp; int textlen; TYPE_3__* addr; } ;
struct TYPE_6__ {TYPE_2__* ans; } ;
struct TYPE_4__ {char** str; } ;
struct TYPE_5__ {TYPE_1__ rrs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,char*,int,char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct outqueuenode *VAR_2) {
  char *VAR_3, *VAR_4;
  int VAR_5, VAR_6;

  VAR_3= VAR_2->addr->ans->rrs.str[0];
  VAR_5= FUNC_2(VAR_3);
  if (!VAR_0) {
    FUNC_0(VAR_2->buffer);
    VAR_2->buffer= 0;
    VAR_2->textp= VAR_3;
    VAR_2->textlen= VAR_5;
  } else {
    VAR_6= VAR_2->textlen + VAR_5 + (VAR_1 ? 0 : 2);
    VAR_4= FUNC_3(VAR_6 + 1);
    FUNC_1(VAR_4, VAR_1 ? "%s%.*s" : "%s[%.*s]", VAR_3, VAR_2->textlen, VAR_2->textp);
    FUNC_0(VAR_2->buffer);
    VAR_2->buffer= VAR_2->textp= VAR_4;
    VAR_2->textlen= VAR_6;
  }
}
