
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rrdengine_instance {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct rrdengine_instance*) ;
 int FUNC_3 (struct rrdengine_instance**,char*,int ,int ) ;
 int VAR_2 ;

void FUNC_4(void)
{
    int VAR_3;
    struct rrdengine_instance *VAR_4;

    VAR_3 = FUNC_3(&VAR_4, "/tmp", VAR_1, VAR_0);
    if (VAR_3) {
        FUNC_0(VAR_3);
    }
    FUNC_2(VAR_4);
    FUNC_1(VAR_2, "Hello world!");
    FUNC_0(0);
}
