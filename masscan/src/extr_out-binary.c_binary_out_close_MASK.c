
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t bytes_written; } ;
struct Output {TYPE_1__ rotate; } ;
typedef int FILE ;


 int FUNC_0 (struct Output*) ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (char*,int,int,int *) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,char*) ;

__attribute__((used)) static void
FUNC_6(struct Output *VAR_0, FILE *VAR_1)
{
    char VAR_2[2+'a'];
    size_t VAR_3;

    FUNC_0(VAR_0);

    FUNC_3(VAR_2, 0, 2+'a');
    FUNC_5(VAR_2, 2+'a', "masscan/1.1");
    VAR_3 = FUNC_2(VAR_2, 1, 2+'a', VAR_1);
    if (VAR_3 != 2+'a') {
        FUNC_4("output");
        FUNC_1(1);
    }
    VAR_0->rotate.bytes_written += VAR_3;
}
