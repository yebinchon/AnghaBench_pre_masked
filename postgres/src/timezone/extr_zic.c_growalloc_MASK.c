
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 void* FUNC_1 (void*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,size_t) ;

__attribute__((used)) static void *
FUNC_4(void *VAR_3, size_t VAR_4, ptrdiff_t VAR_5, ptrdiff_t *VAR_6)
{
 if (VAR_5 < *VAR_6)
  return VAR_3;
 else
 {
  ptrdiff_t VAR_7 = VAR_0 - VAR_2;
  ptrdiff_t VAR_8 = VAR_7 < VAR_1 ? VAR_7 : VAR_1;

  if ((VAR_8 - 1) / 3 * 2 < *VAR_6)
   FUNC_2(FUNC_0("integer overflow"));
  *VAR_6 += (*VAR_6 >> 1) + 1;
  return FUNC_1(VAR_3, FUNC_3(*VAR_6, VAR_4));
 }
}
