
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Size ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

Size
FUNC_3(Size VAR_2, Size VAR_3)
{
 Size VAR_4;

 if (VAR_2 == 0 || VAR_3 == 0)
  return 0;
 VAR_4 = VAR_2 * VAR_3;

 if (VAR_4 / VAR_3 != VAR_2)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("requested shared memory size overflows size_t")));
 return VAR_4;
}
