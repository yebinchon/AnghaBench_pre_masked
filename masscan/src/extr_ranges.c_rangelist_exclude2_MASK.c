
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RangeList {unsigned int count; struct Range* list; } ;
struct Range {int end; int begin; } ;


 int FUNC_0 (struct RangeList*,int ,int ) ;
 int FUNC_1 (struct RangeList*) ;

__attribute__((used)) static void
FUNC_2( struct RangeList *VAR_0,
                  const struct RangeList *VAR_1)
{
    unsigned VAR_2;

    for (VAR_2=0; VAR_2<VAR_1->count; VAR_2++) {
        struct Range VAR_3 = VAR_1->list[VAR_2];
        FUNC_0(VAR_0, VAR_3.begin, VAR_3.end);
    }



    FUNC_1(VAR_0);

}
