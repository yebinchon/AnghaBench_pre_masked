
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ta_header {struct ta_header* leak_prev; struct ta_header* leak_next; int canary; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ta_header VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(struct ta_header *VAR_4)
{
    VAR_4->canary = VAR_0;
    if (VAR_1) {
        FUNC_0(&VAR_3);
        VAR_4->leak_next = &VAR_2;
        VAR_4->leak_prev = VAR_2.leak_prev;
        VAR_2.leak_prev->leak_next = VAR_4;
        VAR_2.leak_prev = VAR_4;
        FUNC_1(&VAR_3);
    }
}
