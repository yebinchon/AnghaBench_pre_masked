
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned int indent_level; scalar_t__ state; TYPE_3__* output; int indent; } ;
typedef TYPE_2__ xmlwriter ;
typedef char WCHAR ;
struct TYPE_5__ {scalar_t__ written; } ;
struct TYPE_7__ {TYPE_1__ buffer; } ;


 int FUNC_0 (char const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_3__*,char const*,int ) ;

__attribute__((used)) static void FUNC_2(xmlwriter *VAR_1)
{
    static const WCHAR VAR_2[] = {' ',' '};
    static const WCHAR VAR_3[] = {'\r','\n'};
    unsigned int VAR_4 = VAR_1->indent_level;

    if (!VAR_1->indent)
        return;



    if (VAR_1->output->buffer.written && VAR_1->state != VAR_0)
        FUNC_1(VAR_1->output, VAR_3, FUNC_0(VAR_3));
    while (VAR_4--)
        FUNC_1(VAR_1->output, VAR_2, FUNC_0(VAR_2));
}
