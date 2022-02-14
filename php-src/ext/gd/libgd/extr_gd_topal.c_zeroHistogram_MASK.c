
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int histcell ;
typedef int * hist3d ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_1 (hist3d VAR_3)
{
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
    {
      FUNC_0 (VAR_3[VAR_4],
       0, VAR_1 * VAR_2 * sizeof (histcell));
    }
}
