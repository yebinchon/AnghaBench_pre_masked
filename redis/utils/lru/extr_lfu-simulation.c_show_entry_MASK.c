
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry {scalar_t__ ctime; scalar_t__ hits; int decrtime; int counter; } ;


 int VAR_0 ;
 int FUNC_0 (char*,long,char*,int ,int ,unsigned long,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;

void FUNC_2(long VAR_1, struct entry *VAR_2) {
    char *VAR_3 = "normal       ";

    if (VAR_1 >= 10 && VAR_1 <= 14) VAR_3 = "new no access";
    if (VAR_1 >= 15 && VAR_1 <= 19) VAR_3 = "new accessed ";
    if (VAR_1 >= VAR_0 -5) VAR_3= "old no access";

    FUNC_0("%ld] <%s> frequency:%d decrtime:%d [%lu hits | age:%ld sec]\n",
        VAR_1, VAR_3, VAR_2->counter, VAR_2->decrtime, (unsigned long)VAR_2->hits,
            FUNC_1(((void*)0)) - VAR_2->ctime);
}
