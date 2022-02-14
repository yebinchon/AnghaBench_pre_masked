
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int* VAR_6 ;
 int FUNC_0 (int,char*) ;
 unsigned int* FUNC_1 (int *,int,int,int,int,int ) ;

__attribute__((used)) static void FUNC_2(void)
{
 unsigned int *VAR_7 = FUNC_1(((void*)0), 4096, VAR_4 | VAR_5,
    VAR_1 | VAR_3 | VAR_0, -1, 0);
 if (VAR_7 == VAR_2)
  FUNC_0(1, "mmap");

 for (int VAR_8 = 0; VAR_8 < 1024; VAR_8++)
  VAR_7[VAR_8] = VAR_8;
 VAR_6 = VAR_7;
}
