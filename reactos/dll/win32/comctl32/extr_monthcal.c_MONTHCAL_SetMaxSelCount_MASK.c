
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwStyle; scalar_t__ maxSelCount; } ;
typedef TYPE_1__ MONTHCAL_INFO ;
typedef int LRESULT ;
typedef scalar_t__ INT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static LRESULT
FUNC_1(MONTHCAL_INFO *VAR_3, INT VAR_4)
{
  FUNC_0("%d\n", VAR_4);

  if(!(VAR_3->dwStyle & VAR_1)) return VAR_0;
  if(VAR_4 <= 0) return VAR_0;

  VAR_3->maxSelCount = VAR_4;

  return VAR_2;
}
