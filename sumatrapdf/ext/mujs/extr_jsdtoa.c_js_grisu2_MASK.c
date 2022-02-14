
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int f; scalar_t__ e; } ;
typedef TYPE_1__ diy_fp_t ;


 TYPE_1__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__,TYPE_1__,char*,int*,int*) ;
 int FUNC_2 (scalar_t__,int,int) ;
 TYPE_1__ FUNC_3 (TYPE_1__,TYPE_1__) ;
 TYPE_1__ FUNC_4 (TYPE_1__,TYPE_1__) ;
 int FUNC_5 (double,TYPE_1__*,TYPE_1__*) ;

int
FUNC_6(double VAR_0, char *VAR_1, int *VAR_2)
{
 int VAR_3, VAR_4;
 diy_fp_t VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11 = 64, VAR_12 = -59, VAR_13 = -56;
 FUNC_5(VAR_0, &VAR_5, &VAR_6);
 VAR_4 = FUNC_2(VAR_6.e + VAR_11, VAR_12, VAR_13);
 VAR_7 = FUNC_0(VAR_4);
 VAR_8 = FUNC_4(VAR_6, VAR_7);
 VAR_9 = FUNC_4(VAR_5, VAR_7);
 VAR_9.f++; VAR_8.f--;
 VAR_10 = FUNC_3(VAR_8, VAR_9);
 *VAR_2 = -VAR_4;
 FUNC_1(VAR_8, VAR_10, VAR_1, &VAR_3, VAR_2);
 return VAR_3;
}
