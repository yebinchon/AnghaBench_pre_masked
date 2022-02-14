
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thunk {unsigned int index; int call_stubless; } ;


 int VAR_0 ;
 struct thunk VAR_1 ;

__attribute__((used)) static inline void FUNC_0( struct thunk *VAR_2, unsigned int VAR_3 )
{
    *VAR_2 = VAR_1;
    VAR_2->index = VAR_3;
    VAR_2->call_stubless = VAR_0;
}
