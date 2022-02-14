
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef enum CachedBrush { ____Placeholder_CachedBrush } CachedBrush ;
typedef size_t UINT ;
struct TYPE_4__ {int* colors; int hwndSelf; int * pens; int * brushes; } ;
typedef TYPE_1__ MONTHCAL_INFO ;
typedef int LRESULT ;
typedef int COLORREF ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int) ;


 size_t VAR_4 ;

 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_4 (char*,TYPE_1__*,size_t,int) ;

__attribute__((used)) static LRESULT
FUNC_5(MONTHCAL_INFO *VAR_8, UINT VAR_9, COLORREF VAR_10)
{
  enum CachedBrush VAR_11;
  COLORREF VAR_12;

  FUNC_4("%p, %d: color %08x\n", VAR_8, VAR_9, VAR_10);

  if (VAR_9 > VAR_5) return -1;

  VAR_12 = VAR_8->colors[VAR_9];
  VAR_8->colors[VAR_9] = VAR_10;


  switch (VAR_9)
  {
  case 130:
    VAR_11 = VAR_0;
    break;
  case 128:
    VAR_11 = VAR_3;
    break;
  case 129:
    VAR_11 = VAR_2;
    break;
  default:
    VAR_11 = VAR_1;
  }

  if (VAR_11 != VAR_1)
  {
    FUNC_2(VAR_8->brushes[VAR_11]);
    VAR_8->brushes[VAR_11] = FUNC_1(VAR_10);
  }


  if (VAR_9 == VAR_4)
  {
    FUNC_2(VAR_8->pens[VAR_7]);
    VAR_8->pens[VAR_7] = FUNC_0(VAR_6, 1, VAR_8->colors[VAR_9]);
  }

  FUNC_3(VAR_8->hwndSelf, ((void*)0), VAR_9 == 130);
  return VAR_12;
}
