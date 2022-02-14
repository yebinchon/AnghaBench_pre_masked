
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 void* FUNC_1 (int *,int ,int,int ,int,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void *FUNC_3(int VAR_5)
{
 void *VAR_6;

 VAR_6 = FUNC_1(((void*)0),
   VAR_4,
   VAR_2 | VAR_3,
   VAR_1,
   VAR_5,
   0);
 if (VAR_6 == VAR_0) {
  FUNC_2("mmap() failed: %m\n");
  FUNC_0();
 }

 return VAR_6;
}
