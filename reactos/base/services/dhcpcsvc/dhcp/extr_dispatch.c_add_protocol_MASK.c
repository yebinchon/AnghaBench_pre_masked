
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protocol {int fd; void (* handler ) (struct protocol*) ;struct protocol* next; void* local; } ;


 int FUNC_0 (char*,char*) ;
 struct protocol* FUNC_1 (int) ;
 struct protocol* VAR_0 ;

void
FUNC_2(char *VAR_1, int VAR_2, void (*VAR_3)(struct protocol *),
             void *VAR_4)
{
    struct protocol *VAR_5;

    VAR_5 = FUNC_1(sizeof(*VAR_5));
    if (!VAR_5)
        FUNC_0("can't allocate protocol struct for %s", VAR_1);

    VAR_5->fd = VAR_2;
    VAR_5->handler = VAR_3;
    VAR_5->local = VAR_4;
    VAR_5->next = VAR_0;
    VAR_0 = VAR_5;
}
