
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* adns_state ;
struct TYPE_5__ {int nsearchlist; char** searchlist; } ;


 int VAR_0 ;
 int FUNC_0 (char**) ;
 int FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (char*,char const*,int) ;
 scalar_t__ FUNC_4 (char const**,char const**,int*) ;
 int FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_6(adns_state VAR_1, const char *VAR_2, int VAR_3, const char *VAR_4) {
  const char *VAR_5, *VAR_6;
  char *VAR_7, **VAR_8, **VAR_9;
  int VAR_10, VAR_11, VAR_12;

  if (!VAR_4) return;

  VAR_5= VAR_4;
  VAR_10= 0;
  VAR_11= 0;
  while (FUNC_4(&VAR_5,&VAR_6,&VAR_12)) { VAR_10++; VAR_11 += VAR_12+1; }

  VAR_8= FUNC_2(sizeof(char*)*VAR_10); if (!VAR_8) { FUNC_5(VAR_1,VAR_0); return; }
  VAR_7= FUNC_2(VAR_11); if (!VAR_7) { FUNC_5(VAR_1,VAR_0); FUNC_0(VAR_8); return; }

  VAR_5= VAR_4;
  VAR_9= VAR_8;
  while (FUNC_4(&VAR_5,&VAR_6,&VAR_12)) {
    *VAR_9++= VAR_7;
    FUNC_3(VAR_7,VAR_6,VAR_12);
    VAR_7 += VAR_12;
    *VAR_7++ = 0;
  }

  FUNC_1(VAR_1);
  VAR_1->nsearchlist= VAR_10;
  VAR_1->searchlist= VAR_8;
}
