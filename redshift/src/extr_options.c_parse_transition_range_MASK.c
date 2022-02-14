
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int start; int end; } ;
typedef TYPE_1__ time_range_t ;


 int FUNC_0 (char const*,char const**) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0, time_range_t *VAR_1)
{
 const char *VAR_2 = ((void*)0);
 int VAR_3 = FUNC_0(VAR_0, &VAR_2);
 if (VAR_3 < 0) return -1;

 int VAR_4;
 if (VAR_2[0] == '\0') {
  VAR_4 = VAR_3;
 } else if (VAR_2[0] == '-') {
  VAR_2 += 1;
  const char *VAR_5 = ((void*)0);
  VAR_4 = FUNC_0(VAR_2, &VAR_5);
  if (VAR_4 < 0 || VAR_5[0] != '\0') return -1;
 } else {
  return -1;
 }

 VAR_1->start = VAR_3;
 VAR_1->end = VAR_4;

 return 0;
}
