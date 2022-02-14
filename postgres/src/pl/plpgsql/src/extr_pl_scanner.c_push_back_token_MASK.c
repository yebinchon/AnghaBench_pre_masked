
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TokenAuxData ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char*) ;
 size_t VAR_2 ;
 int * VAR_3 ;
 int* VAR_4 ;

__attribute__((used)) static void
FUNC_1(int VAR_5, TokenAuxData *VAR_6)
{
 if (VAR_2 >= VAR_1)
  FUNC_0(VAR_0, "too many tokens pushed back");
 VAR_4[VAR_2] = VAR_5;
 VAR_3[VAR_2] = *VAR_6;
 VAR_2++;
}
