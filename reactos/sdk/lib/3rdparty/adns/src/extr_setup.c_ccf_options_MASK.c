
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* adns_state ;
struct TYPE_5__ {unsigned long searchndots; int iflags; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int ,char*,char const*,int,int,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,char const*,int,char*,...) ;
 int FUNC_2 (char const*,char*,int) ;
 scalar_t__ FUNC_3 (char const**,char const**,int*) ;
 int FUNC_4 (char const*,char*) ;
 unsigned long FUNC_5 (char const*,char**,int) ;

__attribute__((used)) static void FUNC_6(adns_state VAR_4, const char *VAR_5, int VAR_6, const char *VAR_7) {
  const char *VAR_8;
  char *VAR_9;
  unsigned long VAR_10;
  int VAR_11;

  if (!VAR_7) return;

  while (FUNC_3(&VAR_7,&VAR_8,&VAR_11)) {
    if (VAR_11==5 && !FUNC_2(VAR_8,"debug",5)) {
      VAR_4->iflags |= VAR_3;
      continue;
    }
    if (VAR_11>=6 && !FUNC_2(VAR_8,"ndots:",6)) {
      VAR_10= FUNC_5(VAR_8+6,&VAR_9,10);
      if (VAR_11==6 || VAR_9 != VAR_8+VAR_11 || VAR_10 > VAR_0) {
 FUNC_1(VAR_4,VAR_5,VAR_6,"option `%.*s' malformed or has bad value",VAR_11,VAR_8);
 continue;
      }
      VAR_4->searchndots= VAR_10;
      continue;
    }
    if (VAR_11>=12 && !FUNC_2(VAR_8,"adns_checkc:",12)) {
      if (!FUNC_4(VAR_8+12,"none")) {
 VAR_4->iflags &= ~VAR_2;
 VAR_4->iflags |= VAR_1;
      } else if (!FUNC_4(VAR_8+12,"entex")) {
 VAR_4->iflags &= ~VAR_2;
 VAR_4->iflags |= VAR_1;
      } else if (!FUNC_4(VAR_8+12,"freq")) {
 VAR_4->iflags |= VAR_2;
      } else {
 FUNC_1(VAR_4,VAR_5,VAR_6, "option adns_checkc has bad value `%s' "
         "(must be none, entex or freq", VAR_8+12);
      }
      continue;
    }
    FUNC_0(VAR_4,-1,0,"%s:%d: unknown option `%.*s'", VAR_5,VAR_6, VAR_11,VAR_8);
  }
}
