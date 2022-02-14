
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* start; char* cur; char* end; } ;
typedef TYPE_1__ SB ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(SB *VAR_0)
{
 VAR_0->start = (char*) FUNC_0(17);
 if (VAR_0->start == ((void*)0))
  FUNC_1();
 VAR_0->cur = VAR_0->start;
 VAR_0->end = VAR_0->start + 16;
}
