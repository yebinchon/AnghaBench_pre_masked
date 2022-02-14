
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tfm; } ;
struct kdf_sdesc {TYPE_1__ shash; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct kdf_sdesc*) ;

__attribute__((used)) static void FUNC_2(struct kdf_sdesc *VAR_0)
{
 if (!VAR_0)
  return;

 if (VAR_0->shash.tfm)
  FUNC_0(VAR_0->shash.tfm);

 FUNC_1(VAR_0);
}
