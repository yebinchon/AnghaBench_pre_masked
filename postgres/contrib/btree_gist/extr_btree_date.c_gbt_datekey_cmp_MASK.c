
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int upper; int lower; } ;
typedef TYPE_1__ dateKEY ;
struct TYPE_4__ {scalar_t__ t; } ;
typedef TYPE_2__ Nsrt ;
typedef int FmgrInfo ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_3(const void *VAR_1, const void *VAR_2, FmgrInfo *VAR_3)
{
 dateKEY *VAR_4 = (dateKEY *) (((const Nsrt *) VAR_1)->t);
 dateKEY *VAR_5 = (dateKEY *) (((const Nsrt *) VAR_2)->t);
 int VAR_6;

 VAR_6 = FUNC_1(FUNC_2(VAR_0, FUNC_0(VAR_4->lower), FUNC_0(VAR_5->lower)));
 if (VAR_6 == 0)
  return FUNC_1(FUNC_2(VAR_0, FUNC_0(VAR_4->upper), FUNC_0(VAR_5->upper)));

 return VAR_6;
}
