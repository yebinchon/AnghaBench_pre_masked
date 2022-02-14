
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (void*,size_t) ;

__attribute__((used)) static void *
FUNC_4(int VAR_1, void *VAR_2, size_t VAR_3)
{
 void *VAR_4;


 if (VAR_2 == ((void*)0) && VAR_3 == 0)
  VAR_3 = 1;
 VAR_4 = FUNC_3(VAR_2, VAR_3);
 if (VAR_4 == ((void*)0))
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("out of memory")));
 return VAR_4;
}
