
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Range {int begin; int end; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(const struct Range VAR_0, struct Range *VAR_1, struct Range *VAR_2)
{

    VAR_2->begin = 2;
    VAR_2->end = 1;


    if (VAR_1->begin > VAR_0.end || VAR_1->end < VAR_0.begin) {
        return;
    }


    if (VAR_1->begin >= VAR_0.begin && VAR_1->end <= VAR_0.end) {
        VAR_1->begin = 2;
        VAR_1->end = 1;
        return;
    }


    if (VAR_1->begin >= VAR_0.begin && VAR_1->end > VAR_0.end) {
        VAR_1->begin = VAR_0.end + 1;
        return;
    }


    if (VAR_1->begin < VAR_0.begin && VAR_1->end <= VAR_0.end) {
        VAR_1->end = VAR_0.begin - 1;
        return;
    }


    if (VAR_1->begin < VAR_0.begin && VAR_1->end > VAR_0.end) {
        VAR_2->end = VAR_1->end;
        VAR_2->begin = VAR_0.end + 1;
        VAR_1->end = VAR_0.begin - 1;
        return;
    }


    FUNC_0(!"possible");
}
