
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_5__ {int thick; } ;


 int FUNC_0 (TYPE_1__*,int,int,int,int,int) ;
 int FUNC_1 (TYPE_1__*,int,int,int) ;

__attribute__((used)) static void FUNC_2(gdImagePtr VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 if (VAR_0->thick > 1) {
  int VAR_5 = VAR_0->thick >> 1;
  FUNC_0(VAR_0, VAR_1 - VAR_5, VAR_2, VAR_1 + VAR_0->thick - VAR_5 - 1, VAR_3, VAR_4);
 } else {
  if (VAR_3 < VAR_2) {
   int VAR_6 = VAR_2;
   VAR_2 = VAR_3;
   VAR_3 = VAR_6;
  }

  for (;VAR_2 <= VAR_3; VAR_2++) {
   FUNC_1(VAR_0, VAR_1, VAR_2, VAR_4);
  }
 }
 return;
}
