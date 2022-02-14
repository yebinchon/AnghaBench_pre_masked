
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Queue {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct Queue*,int ,int) ;
 int VAR_0 ;

struct Queue *
FUNC_4(void)
{
    struct Queue *VAR_1;
    VAR_1 = (struct Queue *)FUNC_2(sizeof(*VAR_1));
    if (VAR_1 == ((void*)0)) {
        FUNC_1(VAR_0, "%s: out of memory error\n", "smack");
        FUNC_0(1);
    }
    FUNC_3(VAR_1, 0, sizeof(*VAR_1));
    return VAR_1;
}
