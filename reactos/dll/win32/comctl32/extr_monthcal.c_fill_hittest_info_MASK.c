
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int cbSize; int uHit; int rc; int st; } ;
typedef TYPE_1__ MCHITTESTINFO ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *,scalar_t__) ;

__attribute__((used)) static inline UINT FUNC_1(const MCHITTESTINFO *VAR_1, MCHITTESTINFO *VAR_2)
{
  VAR_2->uHit = VAR_1->uHit;
  VAR_2->st = VAR_1->st;

  if (VAR_2->cbSize == sizeof(MCHITTESTINFO))
    FUNC_0(&VAR_2->rc, &VAR_1->rc, sizeof(MCHITTESTINFO) - VAR_0);

  return VAR_1->uHit;
}
