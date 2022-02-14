
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* adns_state ;
struct TYPE_6__ {int iflags; } ;


 int FUNC_0 (TYPE_1__*,int,int ,char*,char const*) ;
 int VAR_0 ;
 char* FUNC_1 (TYPE_1__*,char const*) ;
 int FUNC_2 (TYPE_1__*,char const*,int) ;

__attribute__((used)) static void FUNC_3(adns_state VAR_1, const char *VAR_2) {
  const char *VAR_3;

  if (VAR_1->iflags & VAR_0) {
    FUNC_0(VAR_1,-1,0,"not checking environment variable `%s'",VAR_2);
    return;
  }
  VAR_3= FUNC_1(VAR_1,VAR_2);
  if (VAR_3) FUNC_2(VAR_1,VAR_3,1);
}
