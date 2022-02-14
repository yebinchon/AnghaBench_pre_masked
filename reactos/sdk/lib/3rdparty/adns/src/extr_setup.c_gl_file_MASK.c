
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * file; } ;
typedef TYPE_1__ getline_ctx ;
typedef int adns_state ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ,char*,char const*,int,...) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(adns_state VAR_3, getline_ctx *VAR_4, const char *VAR_5,
     int VAR_6, char *VAR_7, int VAR_8) {
  FILE *VAR_9= VAR_4->file;
  int VAR_10, VAR_11;
  char *VAR_12;

  VAR_12= VAR_7;
  VAR_8--;
  VAR_11= 0;

  for (;;) {
    if (VAR_11 == VAR_8) {
      FUNC_0(VAR_3,-1,0,"%s:%d: line too long, ignored",VAR_5,VAR_6);
      goto x_badline;
    }
    VAR_10= FUNC_2(VAR_9);
    if (!VAR_10) {
      FUNC_0(VAR_3,-1,0,"%s:%d: line contains nul, ignored",VAR_5,VAR_6);
      goto x_badline;
    } else if (VAR_10 == '\n') {
      break;
    } else if (VAR_10 == VAR_1) {
      if (FUNC_1(VAR_9)) {
 FUNC_3(VAR_3,VAR_2);
 FUNC_0(VAR_3,-1,0,"%s:%d: read error: %s",VAR_5,VAR_6,FUNC_4(VAR_2));
 return -1;
      }
      if (!VAR_11) return -1;
      break;
    } else {
      *VAR_12++= VAR_10;
      VAR_11++;
    }
  }

  *VAR_12++= 0;
  return VAR_11;

 x_badline:
  FUNC_3(VAR_3,VAR_0);
  while ((VAR_10= FUNC_2(VAR_9)) != VAR_1 && VAR_10 != '\n');
  return -2;
}
