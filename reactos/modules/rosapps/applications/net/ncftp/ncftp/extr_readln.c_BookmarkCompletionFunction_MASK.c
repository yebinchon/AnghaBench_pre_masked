
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bookmarkName; } ;


 scalar_t__ FUNC_0 (int ,char const*,size_t) ;
 char* FUNC_1 (int ) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 size_t FUNC_2 (char const*) ;

__attribute__((used)) static char *
FUNC_3(const char *VAR_2, int VAR_3)
{
 char *VAR_4;
 size_t VAR_5;
 int VAR_6, VAR_7;

 if ((VAR_0 == ((void*)0)) || (VAR_3 >= VAR_1))
  return (((void*)0));

 VAR_5 = FUNC_2(VAR_2);
 if (VAR_5 == 0) {
  VAR_4 = FUNC_1(VAR_0[VAR_3].bookmarkName);
 } else {
  VAR_4 = ((void*)0);
  for (VAR_6=0, VAR_7=0; VAR_6<VAR_1; VAR_6++) {
   if (FUNC_0(VAR_0[VAR_6].bookmarkName, VAR_2, VAR_5) == 0) {
    if (VAR_7 >= VAR_3) {
     VAR_4 = FUNC_1(VAR_0[VAR_6].bookmarkName);
     break;
    }
    VAR_7++;
   }
  }
 }
 return VAR_4;
}
