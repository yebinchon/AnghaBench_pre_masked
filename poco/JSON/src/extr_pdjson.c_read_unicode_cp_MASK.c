
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int (* get ) (TYPE_2__*) ;} ;
struct TYPE_5__ {TYPE_2__ source; } ;
typedef TYPE_1__ json_stream ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static long
FUNC_3(json_stream *VAR_1)
{
    long VAR_2 = 0;
    int VAR_3 = 12;

    for (size_t VAR_4 = 0; VAR_4 < 4; VAR_4++) {
        int VAR_5 = VAR_1->source.get(&VAR_1->source);
        int VAR_6;

        if (VAR_5 == VAR_0) {
            FUNC_1(VAR_1, "%s", "unterminated string literal in unicode");
            return -1;
        } else if ((VAR_6 = FUNC_0(VAR_5)) == -1) {
            FUNC_1(VAR_1, "bad escape unicode byte, '%c'", VAR_5);
            return -1;
        }

        VAR_2 += VAR_6 * (1 << VAR_3);
        VAR_3 -= 4;
    }


    return VAR_2;
}
