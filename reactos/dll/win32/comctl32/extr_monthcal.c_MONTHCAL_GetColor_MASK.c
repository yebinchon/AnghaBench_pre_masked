
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_4__ {int* colors; } ;
typedef TYPE_1__ MONTHCAL_INFO ;
typedef int COLORREF ;


 size_t VAR_0 ;
 int FUNC_0 (char*,TYPE_1__ const*,size_t) ;

__attribute__((used)) static COLORREF
FUNC_1(const MONTHCAL_INFO *VAR_1, UINT VAR_2)
{
  FUNC_0("%p, %d\n", VAR_1, VAR_2);

  if (VAR_2 > VAR_0) return -1;
  return VAR_1->colors[VAR_2];
}
