
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* cur; char* start; char* end; } ;
typedef TYPE_1__ SB ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (char*,size_t) ;

__attribute__((used)) static void FUNC_2(SB *VAR_0, int VAR_1)
{
 size_t VAR_2 = VAR_0->cur - VAR_0->start;
 size_t VAR_3 = VAR_0->end - VAR_0->start;

 do {
  VAR_3 *= 2;
 } while (VAR_3 < VAR_2 + VAR_1);

 VAR_0->start = (char*) FUNC_1(VAR_0->start, VAR_3 + 1);
 if (VAR_0->start == ((void*)0))
  FUNC_0();
 VAR_0->cur = VAR_0->start + VAR_2;
 VAR_0->end = VAR_0->start + VAR_3;
}
