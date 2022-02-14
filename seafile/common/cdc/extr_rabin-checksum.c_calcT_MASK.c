
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;


 int FUNC_0 (int) ;
 int* VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int ,int,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4 (u_int64_t VAR_2)
{
    int VAR_3 = 0;
    int VAR_4 = FUNC_1 (VAR_2) - 1;
    VAR_1 = VAR_4 - 8;
    u_int64_t VAR_5 = FUNC_3 (0, FUNC_0 (1) << VAR_4, VAR_2);
    for (VAR_3 = 0; VAR_3 < 256; VAR_3++) {
        VAR_0[VAR_3] = FUNC_2 (VAR_3, VAR_5, VAR_2) | ((u_int64_t) VAR_3 << VAR_4);
    }
}
