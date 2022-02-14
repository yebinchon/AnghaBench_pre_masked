
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ao {int dummy; } ;
typedef enum aocontrol { ____Placeholder_aocontrol } aocontrol ;


 int FUNC_0 (struct ao*,int,void*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
    void **VAR_1 = VAR_0;
    struct ao *VAR_2 = VAR_1[0];
    enum aocontrol VAR_3 = *(enum aocontrol *)VAR_1[1];
    void *VAR_4 = VAR_1[2];
    *(int *)VAR_1[3] = FUNC_0(VAR_2, VAR_3, VAR_4);
}
