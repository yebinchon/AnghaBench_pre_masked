
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RangeList {unsigned int count; struct Range* list; int member_0; } ;
struct Range {unsigned int begin; unsigned int end; } ;
struct Banner1 {int dummy; } ;


 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct RangeList*,char const*,unsigned int*,int ) ;
 int FUNC_3 (struct Banner1*,unsigned int) ;

__attribute__((used)) static void
FUNC_4(struct Banner1 *VAR_0, const char *VAR_1)
{
    struct RangeList VAR_2 = {0};
    unsigned VAR_3 = 0;
    unsigned VAR_4;

    FUNC_2(&VAR_2, VAR_1, &VAR_3, 0);
    if (VAR_3) {
        FUNC_0(0, "SCRIPTING: invalid 'setTcpPorts' range: %s\n", VAR_1);
        FUNC_1(1);
    }

    for (VAR_4=0; VAR_4<VAR_2.count; VAR_4++) {
        struct Range *VAR_5 = &VAR_2.list[VAR_4];
        unsigned VAR_6;

        for (VAR_6=VAR_5->begin; VAR_6<=VAR_5->end; VAR_6++) {
            FUNC_3(VAR_0, VAR_6);
        }
    }

}
