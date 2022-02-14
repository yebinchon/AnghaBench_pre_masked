
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ lower; scalar_t__ upper; } ;
typedef TYPE_1__ oidKEY ;
struct TYPE_4__ {scalar_t__ t; } ;
typedef TYPE_2__ Nsrt ;
typedef int FmgrInfo ;


 int FUNC_0 (int ,int *,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3(const void *VAR_2, const void *VAR_3, FmgrInfo *VAR_4)
{
 oidKEY *VAR_5 = (oidKEY *) (((const Nsrt *) VAR_2)->t);
 oidKEY *VAR_6 = (oidKEY *) (((const Nsrt *) VAR_3)->t);

 if (VAR_5->lower == VAR_6->lower)
 {
  if (VAR_5->upper == VAR_6->upper)
   return 0;

  return FUNC_1(
        FUNC_0(VAR_1, VAR_4, VAR_0, FUNC_2(VAR_5->upper), FUNC_2(VAR_6->upper))
   );
 }

 return FUNC_1(
       FUNC_0(VAR_1, VAR_4, VAR_0, FUNC_2(VAR_5->lower), FUNC_2(VAR_6->lower))
  );
}
