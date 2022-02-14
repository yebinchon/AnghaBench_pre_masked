
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct TYPE_2__ {int is_child; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct timeval*,int ) ;
 char** VAR_3 ;
 scalar_t__ FUNC_2 (char*,size_t,char*,char*,...) ;
 scalar_t__ VAR_4 ;
 size_t FUNC_3 (struct timeval*,char*,size_t) ;

__attribute__((used)) static size_t FUNC_4(
  const char *VAR_5, int VAR_6, int VAR_7,
  char *VAR_8, size_t VAR_9, int VAR_10)
{
 struct timeval VAR_11;
 size_t VAR_12 = 0;
 {
  if (!VAR_2.is_child) {
   FUNC_1(&VAR_11, 0);
   VAR_12 = FUNC_3(&VAR_11, VAR_8, VAR_9);
  }
  if (VAR_4 == VAR_0) {
   if (!VAR_2.is_child) {
    VAR_12 += FUNC_2(VAR_8 + VAR_12, VAR_9 - VAR_12, "%s: pid %d, %s(), line %d: ",
      VAR_3[VAR_7 & VAR_1], FUNC_0(), VAR_5, VAR_6);
   } else {
    VAR_12 += FUNC_2(VAR_8 + VAR_12, VAR_9 - VAR_12, "%s: %s(), line %d: ",
      VAR_3[VAR_7 & VAR_1], VAR_5, VAR_6);
   }
  } else {
   VAR_12 += FUNC_2(VAR_8 + VAR_12, VAR_9 - VAR_12, "%s: ",
     VAR_3[VAR_7 & VAR_1]);
  }
 }

 return VAR_12;
}
