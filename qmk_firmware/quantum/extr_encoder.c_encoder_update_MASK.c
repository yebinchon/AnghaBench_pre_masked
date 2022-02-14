
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t int8_t ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (size_t,int) ;
 int * VAR_3 ;

__attribute__((used)) static void FUNC_1(int8_t VAR_4, uint8_t VAR_5) {
    VAR_2[VAR_4] += VAR_1[VAR_5 & 0xF];
    if (VAR_2[VAR_4] >= VAR_0) {
        VAR_3[VAR_4]++;
        FUNC_0(VAR_4, 1);
    }
    if (VAR_2[VAR_4] <= -VAR_0) {
        VAR_3[VAR_4]--;
        FUNC_0(VAR_4, 0);
    }
    VAR_2[VAR_4] %= VAR_0;
}
