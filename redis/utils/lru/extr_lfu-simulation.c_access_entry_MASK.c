
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry {int hits; int counter; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct entry *VAR_0) {
    VAR_0->counter = FUNC_0(VAR_0->counter);
    VAR_0->hits++;
}
