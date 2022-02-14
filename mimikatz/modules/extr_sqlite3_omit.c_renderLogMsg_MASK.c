
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zMsg ;
typedef int va_list ;
struct TYPE_2__ {int pLogArg; int (* xLog ) (int ,int,int ) ;} ;
typedef int StrAccum ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,char*,int,int ) ;
 int FUNC_2 (int *,char const*,int ) ;
 int FUNC_3 (int ,int,int ) ;

__attribute__((used)) static void FUNC_4(int VAR_2, const char *VAR_3, va_list VAR_4){
  StrAccum VAR_5;
  char VAR_6[VAR_0*3];

  FUNC_1(&VAR_5, 0, VAR_6, sizeof(VAR_6), 0);
  FUNC_2(&VAR_5, VAR_3, VAR_4);
  VAR_1.xLog(VAR_1.pLogArg, VAR_2,
                           FUNC_0(&VAR_5));
}
