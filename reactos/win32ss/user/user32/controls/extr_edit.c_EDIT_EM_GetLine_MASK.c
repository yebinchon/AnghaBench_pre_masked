
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ WORD ;
typedef int WCHAR ;
struct TYPE_5__ {int style; scalar_t__ line_count; scalar_t__ text; } ;
typedef scalar_t__* LPWSTR ;
typedef scalar_t__* LPSTR ;
typedef scalar_t__ INT ;
typedef TYPE_1__ EDITSTATE ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__*,scalar_t__,scalar_t__*,scalar_t__,int *,int *) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,scalar_t__) ;

__attribute__((used)) static INT FUNC_4(EDITSTATE *VAR_2, INT VAR_3, LPWSTR VAR_4, BOOL VAR_5)
{
 LPWSTR VAR_6;
 INT VAR_7, VAR_8;
 INT VAR_9;

 if (VAR_2->style & VAR_1) {
  if (VAR_3 >= VAR_2->line_count)
   return 0;
 } else
  VAR_3 = 0;
 VAR_9 = FUNC_0(VAR_2, VAR_3);
 VAR_6 = VAR_2->text + VAR_9;
 VAR_7 = FUNC_1(VAR_2, VAR_9);
 VAR_8 = *(WORD *)VAR_4;
 if(VAR_5)
 {
     if(VAR_8 <= VAR_7)
     {
  FUNC_3(VAR_4, VAR_6, VAR_8 * sizeof(WCHAR));
  return VAR_8;
     }
     else
     {
  FUNC_3(VAR_4, VAR_6, VAR_7 * sizeof(WCHAR));
  VAR_4[VAR_7] = 0;
  return VAR_7;
     }
 }
 else
 {
     INT VAR_10 = FUNC_2(VAR_0, 0, VAR_6, VAR_7, (LPSTR)VAR_4, VAR_8, ((void*)0), ((void*)0));
     if(!VAR_10 && VAR_7)
  return VAR_8;
     if(VAR_10 < VAR_8)
  ((LPSTR)VAR_4)[VAR_10] = 0;
     return VAR_10;
 }
}
