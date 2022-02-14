
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 void* FUNC_1 (int *,int ,int ,int ,int,int ) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(int VAR_4)
{
 void *VAR_5;


 VAR_5 = FUNC_1(((void*)0),
   VAR_3,
   VAR_2,
   VAR_1,
   VAR_4,
   0);
 if (VAR_5 == VAR_0) {
  FUNC_3("mmap() failed: %m\n");
  FUNC_0();
 }
 FUNC_2(VAR_5, VAR_3);
}
