
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lexer {char const* pos; char const* start; int ring_buffer; int end; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char const*,char) ;

__attribute__((used)) static void FUNC_2(struct lexer *VAR_1, const char *VAR_2)
{
    VAR_1->state = VAR_0;
    VAR_1->pos = VAR_1->start = VAR_2;
    VAR_1->end = FUNC_1(VAR_2, '\0');
    FUNC_0(&VAR_1->ring_buffer);
}
