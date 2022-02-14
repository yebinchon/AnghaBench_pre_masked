
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ expires; int unresolved; } ;
struct TYPE_5__ {TYPE_1__ unres; } ;
struct TYPE_6__ {TYPE_2__ mfc_un; } ;
struct mfc_cache {TYPE_3__ _c; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct mfc_cache* FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct mfc_cache *FUNC_2(void)
{
 struct mfc_cache *VAR_4 = FUNC_0(VAR_3, VAR_0);

 if (VAR_4) {
  FUNC_1(&VAR_4->_c.mfc_un.unres.unresolved);
  VAR_4->_c.mfc_un.unres.expires = VAR_2 + 10 * VAR_1;
 }
 return VAR_4;
}
