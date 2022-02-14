
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(float VAR_0[2], int VAR_1[2], int VAR_2)
{
    VAR_1[0] = FUNC_0((int)(VAR_0[0] * VAR_2), 0, VAR_2);
    VAR_1[1] = FUNC_0((int)(VAR_0[1] * VAR_2), 0, VAR_2);

    if (VAR_1[0] + VAR_1[1] >= VAR_2) {

        VAR_1[0] = 0;
        VAR_1[1] = FUNC_1(0, VAR_2 - 1);
    }
}
