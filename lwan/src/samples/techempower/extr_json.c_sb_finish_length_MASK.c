
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* cur; char* start; } ;
typedef TYPE_1__ SB ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (char*) ;

__attribute__((used)) static char *FUNC_2(SB *VAR_0, size_t *VAR_1)
{
 *VAR_0->cur = 0;
 FUNC_0(VAR_0->start <= VAR_0->cur && FUNC_1(VAR_0->start) == (size_t)(VAR_0->cur - VAR_0->start));
 *VAR_1 = (size_t)(VAR_0->cur - VAR_0->start);
 return VAR_0->start;
}
