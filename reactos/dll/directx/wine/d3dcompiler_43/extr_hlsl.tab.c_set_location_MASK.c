
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct source_location {int col; int line; int file; } ;
struct YYLTYPE {int first_column; int first_line; } ;
struct TYPE_2__ {int source_file; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct source_location *VAR_1, const struct YYLTYPE *VAR_2)
{
    VAR_1->file = VAR_0.source_file;
    VAR_1->line = VAR_2->first_line;
    VAR_1->col = VAR_2->first_column;
}
