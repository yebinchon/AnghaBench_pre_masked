
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Vector {scalar_t__ capacity; scalar_t__ current; int pData; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct Vector * VAR_0)
{
    FUNC_0(VAR_0->pData);
    VAR_0->current = 0;
    VAR_0->capacity = 0;
}
