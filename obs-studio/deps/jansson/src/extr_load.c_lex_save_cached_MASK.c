
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* buffer; size_t buffer_pos; int position; } ;
struct TYPE_6__ {TYPE_1__ stream; } ;
typedef TYPE_2__ lex_t ;


 int FUNC_0 (TYPE_2__*,char) ;

__attribute__((used)) static void FUNC_1(lex_t *VAR_0)
{
    while(VAR_0->stream.buffer[VAR_0->stream.buffer_pos] != '\0')
    {
        FUNC_0(VAR_0, VAR_0->stream.buffer[VAR_0->stream.buffer_pos]);
        VAR_0->stream.buffer_pos++;
        VAR_0->stream.position++;
    }
}
