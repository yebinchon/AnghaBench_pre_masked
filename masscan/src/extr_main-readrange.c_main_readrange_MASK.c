
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RangeList {unsigned int count; struct Range* list; } ;
struct Range {int begin; int end; } ;
struct Masscan {struct RangeList targets; } ;
typedef int FILE ;


 unsigned int FUNC_0 (struct Range) ;
 int FUNC_1 (int *,char*,...) ;
 int * VAR_0 ;

void
FUNC_2(struct Masscan *VAR_1)
{
    struct RangeList *VAR_2 = &VAR_1->targets;
    unsigned VAR_3;
    FILE *VAR_4 = VAR_0;

    for (VAR_3=0; VAR_3<VAR_2->count; VAR_3++) {
        struct Range VAR_5 = VAR_2->list[VAR_3];
        FUNC_1(VAR_4, "%u.%u.%u.%u",
            (VAR_5.begin>>24)&0xFF,
            (VAR_5.begin>>16)&0xFF,
            (VAR_5.begin>> 8)&0xFF,
            (VAR_5.begin>> 0)&0xFF
            );
        if (VAR_5.begin != VAR_5.end) {
            unsigned VAR_6 = FUNC_0(VAR_5);

            if (VAR_6) {
                FUNC_1(VAR_4, "/%u", VAR_6);
            } else
            FUNC_1(VAR_4, "-%u.%u.%u.%u",
                (VAR_5.end>>24)&0xFF,
                (VAR_5.end>>16)&0xFF,
                (VAR_5.end>> 8)&0xFF,
                (VAR_5.end>> 0)&0xFF
                );
        }
        FUNC_1(VAR_4, "\n");
    }


}
