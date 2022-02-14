
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int style; int tabs_count; int * tabs; } ;
typedef int INT ;
typedef TYPE_1__ EDITSTATE ;
typedef int BOOL ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int const*,int) ;

__attribute__((used)) static BOOL FUNC_4(EDITSTATE *VAR_3, INT VAR_4, const INT *VAR_5)
{
 if (!(VAR_3->style & VAR_0))
  return VAR_1;
        FUNC_2(VAR_3->tabs);
 VAR_3->tabs_count = VAR_4;
 if (!VAR_4)
  VAR_3->tabs = ((void*)0);
 else {
  VAR_3->tabs = FUNC_1(VAR_4 * sizeof(INT));
  FUNC_3(VAR_3->tabs, VAR_5, VAR_4 * sizeof(INT));
 }
 FUNC_0(VAR_3);
 return VAR_2;
}
