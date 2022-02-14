
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LPCONTEXTMENU3 ;
typedef scalar_t__ LPCONTEXTMENU2 ;
typedef int IContextMenu ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,int *,void**) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static IContextMenu* FUNC_3(IContextMenu* VAR_5)
{
 IContextMenu* VAR_6 = ((void*)0);

 FUNC_0();

 if (FUNC_1(VAR_5, &VAR_1, (void**)&VAR_6) == VAR_2)
  VAR_4 = (LPCONTEXTMENU3)VAR_6;
 else if (FUNC_1(VAR_5, &VAR_0, (void**)&VAR_6) == VAR_2)
  VAR_3 = (LPCONTEXTMENU2)VAR_6;

 if (VAR_6) {
  FUNC_2(VAR_5);
  return VAR_6;
 } else
  return VAR_5;
}
