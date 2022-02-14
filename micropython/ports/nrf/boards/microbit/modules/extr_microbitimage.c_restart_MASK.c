
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* next_char; char* start; scalar_t__ end; char right; int offset_limit; scalar_t__ monospace; scalar_t__ offset; } ;
typedef TYPE_1__ scrolling_string_iterator_t ;


 int FUNC_0 (char) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(scrolling_string_iterator_t *VAR_0) {
    VAR_0->next_char = VAR_0->start;
    VAR_0->offset = 0;
    if (VAR_0->start < VAR_0->end) {
        VAR_0->right = *VAR_0->next_char;
        if (VAR_0->monospace) {
            VAR_0->offset_limit = 5;
        } else {
            VAR_0->offset_limit = FUNC_1(FUNC_0(VAR_0->right)) + 1;
        }
    } else {
        VAR_0->right = ' ';
        VAR_0->offset_limit = 5;
    }
}
