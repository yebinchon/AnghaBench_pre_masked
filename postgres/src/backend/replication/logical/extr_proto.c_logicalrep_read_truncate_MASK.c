
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int StringInfo ;
typedef int List ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,void*) ;
 void* FUNC_1 (int ,int) ;

List *
FUNC_2(StringInfo VAR_3,
       bool *VAR_4, bool *VAR_5)
{
 int VAR_6;
 int VAR_7;
 List *VAR_8 = VAR_0;
 uint8 VAR_9;

 VAR_7 = FUNC_1(VAR_3, 4);


 VAR_9 = FUNC_1(VAR_3, 1);
 *VAR_4 = (VAR_9 & VAR_1) > 0;
 *VAR_5 = (VAR_9 & VAR_2) > 0;

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
  VAR_8 = FUNC_0(VAR_8, FUNC_1(VAR_3, 4));

 return VAR_8;
}
