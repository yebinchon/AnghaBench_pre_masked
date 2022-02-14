
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 void* FUNC_1 (int *,int,int,int,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_2(void **VAR_8)
{
 *VAR_8 = FUNC_1(((void*)0), VAR_5 * VAR_6, VAR_3 | VAR_4,
      VAR_0 | VAR_2, -1, 0);
 if (*VAR_8 == VAR_1) {
  FUNC_0(VAR_7, "shared memory mmap failed\n");
  *VAR_8 = ((void*)0);
 }
}
