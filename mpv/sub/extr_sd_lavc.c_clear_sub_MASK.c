
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sub {int valid; int avsub; void* endpts; void* pts; scalar_t__ count; } ;


 void* VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct sub *VAR_1)
{
    VAR_1->count = 0;
    VAR_1->pts = VAR_0;
    VAR_1->endpts = VAR_0;
    if (VAR_1->valid)
        FUNC_0(&VAR_1->avsub);
    VAR_1->valid = 0;
}
