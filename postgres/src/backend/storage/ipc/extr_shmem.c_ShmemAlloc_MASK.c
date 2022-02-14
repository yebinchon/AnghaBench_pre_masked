
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Size ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;

void *
FUNC_4(Size VAR_2)
{
 void *VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (!VAR_3)
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_3("out of shared memory (%zu bytes requested)",
      VAR_2)));
 return VAR_3;
}
