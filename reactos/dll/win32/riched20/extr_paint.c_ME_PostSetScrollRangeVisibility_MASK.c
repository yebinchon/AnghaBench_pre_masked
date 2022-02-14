
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fMask; scalar_t__ nMin; scalar_t__ nMax; scalar_t__ nPage; } ;
typedef TYPE_1__ SCROLLINFO ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static BOOL FUNC_1(SCROLLINFO *VAR_2)
{
  if (VAR_2->fMask & VAR_0)
    return VAR_1;



  return VAR_2->nMin < VAR_2->nMax - FUNC_0(VAR_2->nPage - 1, 0);
}
