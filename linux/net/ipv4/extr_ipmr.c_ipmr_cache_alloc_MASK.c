
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int refcount; int minvif; scalar_t__ last_assert; } ;
struct TYPE_5__ {TYPE_1__ res; } ;
struct TYPE_6__ {TYPE_2__ mfc_un; int free; } ;
struct mfc_cache {TYPE_3__ _c; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct mfc_cache* FUNC_0 (int ,int ) ;
 int VAR_5 ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static struct mfc_cache *FUNC_2(void)
{
 struct mfc_cache *VAR_6 = FUNC_0(VAR_5, VAR_0);

 if (VAR_6) {
  VAR_6->_c.mfc_un.res.last_assert = VAR_4 - VAR_2 - 1;
  VAR_6->_c.mfc_un.res.minvif = VAR_1;
  VAR_6->_c.free = VAR_3;
  FUNC_1(&VAR_6->_c.mfc_un.res.refcount, 1);
 }
 return VAR_6;
}
