
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dso {int name; } ;


 int FUNC_0 (struct dso*) ;
 struct dso** VAR_0 ;
 int FUNC_1 (struct dso**) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  struct dso *VAR_3 = VAR_0[VAR_2];

  FUNC_2(VAR_3->name);
  FUNC_0(VAR_3);
 }

 FUNC_1(VAR_0);
}
