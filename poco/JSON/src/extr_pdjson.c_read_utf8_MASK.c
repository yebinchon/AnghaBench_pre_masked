
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char (* get ) (TYPE_2__*) ;} ;
struct TYPE_6__ {TYPE_2__ source; } ;
typedef TYPE_1__ json_stream ;


 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (TYPE_1__*,char*,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char) ;
 char FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(json_stream* VAR_0, int VAR_1)
{
    int VAR_2 = FUNC_4(VAR_1);
    if (!VAR_2)
    {
        FUNC_1(VAR_0, "%s", "Bad character.");
        return -1;
    }

    char VAR_3[4];
    VAR_3[0] = VAR_1;
    for (int VAR_4 = 1; VAR_4 < VAR_2; ++VAR_4)
    {
        VAR_3[VAR_4] = VAR_0->source.get(&VAR_0->source);;
    }

    if (!FUNC_0((unsigned char*) VAR_3, VAR_2))
    {
        FUNC_1(VAR_0, "%s", "No legal UTF8 found");
        return -1;
    }

    for (int VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5)
    {
        if (FUNC_2(VAR_0, VAR_3[VAR_5]) != 0)
            return -1;
    }
    return 0;
}
