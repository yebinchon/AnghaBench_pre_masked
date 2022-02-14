
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* zName; int custom_errno; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*,char const*,int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_1){
  int VAR_2;
  int VAR_3 = FUNC_2(VAR_1);
  for(VAR_2=0; VAR_0[VAR_2].zName; VAR_2++){
    if( FUNC_2(VAR_0[VAR_2].zName)!=VAR_3 ) continue;
    if( FUNC_1(VAR_0[VAR_2].zName, VAR_1, VAR_3) ) continue;
    return VAR_0[VAR_2].custom_errno;
  }

  FUNC_0(0);
  return 0;
}
