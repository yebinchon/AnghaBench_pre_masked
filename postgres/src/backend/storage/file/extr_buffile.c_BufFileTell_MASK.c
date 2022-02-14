
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ off_t ;
struct TYPE_3__ {int curFile; scalar_t__ pos; scalar_t__ curOffset; } ;
typedef TYPE_1__ BufFile ;



void
FUNC_0(BufFile *VAR_0, int *VAR_1, off_t *VAR_2)
{
 *VAR_1 = VAR_0->curFile;
 *VAR_2 = VAR_0->curOffset + VAR_0->pos;
}
