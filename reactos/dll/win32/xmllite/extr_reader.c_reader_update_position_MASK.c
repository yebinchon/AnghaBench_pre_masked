
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int line_position; int line_number; } ;
struct TYPE_5__ {TYPE_1__ position; } ;
typedef TYPE_2__ xmlreader ;
typedef char WCHAR ;



__attribute__((used)) static void FUNC_0(xmlreader *VAR_0, WCHAR VAR_1)
{
    if (VAR_1 == '\r')
        VAR_0->position.line_position = 1;
    else if (VAR_1 == '\n')
    {
        VAR_0->position.line_number++;
        VAR_0->position.line_position = 1;
    }
    else
        VAR_0->position.line_position++;
}
