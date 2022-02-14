
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int member_1; int member_0; } ;
struct TYPE_5__ {TYPE_1__ member_0; } ;
typedef TYPE_2__ mfxVersion ;
typedef scalar_t__ mfxStatus ;
typedef int mfxSession ;
typedef int mfxIMPL ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,TYPE_2__*,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;

bool FUNC_3(void)
{
 mfxIMPL VAR_5 = VAR_1 | VAR_2;
 mfxVersion VAR_6 = {{0, 1}};
 mfxSession VAR_7;
 mfxStatus VAR_8;

 VAR_8 = FUNC_1(VAR_5, &VAR_6, &VAR_7);

 if (VAR_8 == VAR_0) {
  FUNC_2(&VAR_4);
  FUNC_0(VAR_7);
 } else {
  VAR_5 = VAR_1 | VAR_3;
  VAR_8 = FUNC_1(VAR_5, &VAR_6, &VAR_7);
  if (VAR_8 == VAR_0) {
   FUNC_2(&VAR_4);
   FUNC_0(VAR_7);
  }
 }

 return 1;
}
