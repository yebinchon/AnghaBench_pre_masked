
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (size_t) ;

__attribute__((used)) static void *
FUNC_4(int VAR_1, size_t VAR_2)
{
 void *VAR_3;


 if (VAR_2 == 0)
  VAR_2 = 1;
 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3 == ((void*)0))
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("out of memory")));
 return VAR_3;
}
