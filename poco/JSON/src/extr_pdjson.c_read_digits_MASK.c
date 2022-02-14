
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int (* get ) (TYPE_2__*) ;int (* peek ) (TYPE_2__*) ;} ;
struct TYPE_6__ {TYPE_2__ source; } ;
typedef TYPE_1__ json_stream ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_4(json_stream *VAR_0)
{
    unsigned VAR_1 = 0;
    while (FUNC_0(VAR_0->source.peek(&VAR_0->source))) {
        if (FUNC_1(VAR_0, VAR_0->source.get(&VAR_0->source)) != 0)
            return -1;

        VAR_1++;
    }

    if (VAR_1 == 0) {
        return -1;
    }

    return 0;
}
