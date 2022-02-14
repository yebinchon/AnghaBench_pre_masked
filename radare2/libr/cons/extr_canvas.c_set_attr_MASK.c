
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int constpool; int attr; } ;
typedef int RStrBuf ;
typedef TYPE_1__ RConsCanvas ;


 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char const*,int const) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static const char *FUNC_6(RConsCanvas *VAR_0, const char *VAR_1) {
 if (!VAR_0 || !VAR_1) {
  return ((void*)0);
 }
 const char *VAR_2 = VAR_1;

 while (FUNC_0 (VAR_2)) {
  VAR_2 += 2;
  while (*VAR_2 && *VAR_2 != 'J' && *VAR_2 != 'm' && *VAR_2 != 'H') {
   VAR_2++;
  }
  VAR_2++;
 }

 const int VAR_3 = VAR_2 - VAR_1;
 if (VAR_3 > 0) {
  RStrBuf VAR_4;
  FUNC_5 (&VAR_4);
  FUNC_2 (&VAR_4, VAR_1, VAR_3);
  VAR_0->attr = FUNC_1 (&VAR_0->constpool, FUNC_4 (&VAR_4));
  FUNC_3 (&VAR_4);
 }
 return VAR_2;
}
