
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int dwStyle; } ;
typedef TYPE_1__ MONTHCAL_INFO ;
typedef scalar_t__ LCTYPE ;


 int FUNC_0 (int ,scalar_t__,int *,unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(const MONTHCAL_INFO *VAR_4, unsigned int VAR_5, WCHAR *VAR_6, unsigned int VAR_7)
{
  LCTYPE VAR_8;

  if (VAR_4->dwStyle & VAR_3)
      VAR_8 = VAR_1 + VAR_5;
  else
      VAR_8 = VAR_0 + VAR_5;

  return FUNC_0(VAR_2, VAR_8, VAR_6, VAR_7);
}
