
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int actual_size ;
typedef int Size ;


 int FUNC_0 (int) ;
 int * VAR_0 ;
 int FUNC_1 (char*,int*,int) ;
 int VAR_1 ;
 int FUNC_2 (char**,int*,int ) ;

void
FUNC_3(Size VAR_2, char *VAR_3)
{
 char *VAR_4;
 Size VAR_5;
 Size VAR_6;
 int VAR_7;


 FUNC_0(VAR_2 > sizeof(VAR_5));
 VAR_4 = VAR_3 + sizeof(VAR_5);
 VAR_6 = VAR_2 - sizeof(VAR_5);

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  FUNC_2(&VAR_4, &VAR_6, VAR_0[VAR_7]);


 VAR_5 = VAR_2 - VAR_6 - sizeof(VAR_5);
 FUNC_1(VAR_3, &VAR_5, sizeof(VAR_5));
}
