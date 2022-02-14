
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_result ;


 char const** VAR_0 ;
 char const* VAR_1 ;

const char *
FUNC_0(mp_result VAR_2)
{
 if (VAR_2 > 0)
  return VAR_1;

 VAR_2 = -VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2 && VAR_0[VAR_3] != ((void*)0); ++VAR_3)
  ;

 if (VAR_0[VAR_3] != ((void*)0))
 {
  return VAR_0[VAR_3];
 }
 else
 {
  return VAR_1;
 }
}
