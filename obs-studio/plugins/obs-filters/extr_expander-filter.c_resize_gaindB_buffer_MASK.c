
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expander_data {size_t gaindB_len; int * gaindB; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct expander_data *VAR_1, size_t VAR_2)
{
 VAR_1->gaindB_len = VAR_2;
 for (int VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_1->gaindB[VAR_3] =
   FUNC_0(VAR_1->gaindB[VAR_3], VAR_1->gaindB_len * sizeof(float));
}
