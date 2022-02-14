
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int expected; int value; int format; } ;
typedef TYPE_1__ j_data ;
typedef int bio_buf ;


 int FUNC_0 (char*,int,int ,int ) ;
 int FUNC_1 (char*,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_2(int VAR_1)
{
    const j_data *VAR_2 = &VAR_0[VAR_1];
    char VAR_3[80];

    FUNC_0(VAR_3, sizeof(VAR_3) - 1, VAR_2->format, VAR_2->value);
    if (!FUNC_1(VAR_3, VAR_2->expected))
        return 0;
    return 1;
}
