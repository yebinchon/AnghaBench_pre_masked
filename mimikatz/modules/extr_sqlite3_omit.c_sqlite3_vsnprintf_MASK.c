
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_4__ {size_t nChar; } ;
typedef TYPE_1__ StrAccum ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,char*,int,int ) ;
 int FUNC_1 (TYPE_1__*,char const*,int ) ;

char *FUNC_2(int VAR_1, char *VAR_2, const char *VAR_3, va_list VAR_4){
  StrAccum VAR_5;
  if( VAR_1<=0 ) return VAR_2;







  FUNC_0(&VAR_5, 0, VAR_2, VAR_1, 0);
  FUNC_1(&VAR_5, VAR_3, VAR_4);
  VAR_2[VAR_5.nChar] = 0;
  return VAR_2;
}
