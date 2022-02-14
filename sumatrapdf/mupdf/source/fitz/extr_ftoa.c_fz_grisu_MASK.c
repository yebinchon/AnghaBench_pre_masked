
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int e; int f; } ;
typedef TYPE_1__ diy_fp_t ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__,TYPE_1__,char*,int*) ;
 int FUNC_2 (int) ;
 TYPE_1__ FUNC_3 (TYPE_1__,TYPE_1__) ;
 TYPE_1__ FUNC_4 (TYPE_1__,TYPE_1__) ;
 int FUNC_5 (float,TYPE_1__*,TYPE_1__*) ;

int
FUNC_6(float VAR_1, char* VAR_2, int* VAR_3)
{
 diy_fp_t VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10, VAR_11, VAR_12 = -VAR_0 + 4;

 FUNC_5(VAR_1, &VAR_4, &VAR_5);
 VAR_11 = FUNC_2(VAR_12 - VAR_5.e - VAR_0);
 VAR_8 = FUNC_0(VAR_11);

 VAR_6 = FUNC_4(VAR_5, VAR_8);
 VAR_7 = FUNC_4(VAR_4, VAR_8);

 VAR_6.f--;
 VAR_7.f++;

 VAR_9 = FUNC_3(VAR_6, VAR_7);

 *VAR_3 = -VAR_11;
 VAR_10 = FUNC_1(VAR_6, VAR_9, VAR_2, VAR_3);

 VAR_2[VAR_10] = 0;
 return VAR_10;
}
