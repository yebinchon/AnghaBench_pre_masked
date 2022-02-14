
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* insts; scalar_t__ len; scalar_t__ bytelen; scalar_t__ sub; } ;
typedef TYPE_1__ ByteProg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 char* FUNC_0 (char const*,TYPE_1__*,int ) ;

int FUNC_1(ByteProg *VAR_5, const char *VAR_6)
{
    VAR_5->len = 0;
    VAR_5->bytelen = 0;
    VAR_5->sub = 0;




    VAR_5->insts[VAR_5->bytelen++] = VAR_3;
    VAR_5->insts[VAR_5->bytelen++] = 3;
    VAR_5->insts[VAR_5->bytelen++] = VAR_0;
    VAR_5->insts[VAR_5->bytelen++] = VAR_1;
    VAR_5->insts[VAR_5->bytelen++] = -5;
    VAR_5->len += 3;

    VAR_5->insts[VAR_5->bytelen++] = VAR_4;
    VAR_5->insts[VAR_5->bytelen++] = 0;
    VAR_5->len++;

    VAR_6 = FUNC_0(VAR_6, VAR_5, 0);
    if (VAR_6 == ((void*)0) || *VAR_6) return 1;

    VAR_5->insts[VAR_5->bytelen++] = VAR_4;
    VAR_5->insts[VAR_5->bytelen++] = 1;
    VAR_5->len++;

    VAR_5->insts[VAR_5->bytelen++] = VAR_2;
    VAR_5->len++;

    return 0;
}
