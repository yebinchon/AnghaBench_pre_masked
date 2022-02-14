
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int flinfo; int collation; TYPE_1__* tinfo; } ;
typedef TYPE_2__ gbt_vsrt_arg ;
struct TYPE_8__ {int t; } ;
typedef TYPE_3__ Vsrt ;
struct TYPE_9__ {int upper; int lower; } ;
struct TYPE_6__ {int (* f_cmp ) (int ,int ,int ,int ) ;} ;
typedef TYPE_4__ GBT_VARKEY_R ;


 TYPE_4__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3(const void *VAR_0, const void *VAR_1, void *VAR_2)
{
 GBT_VARKEY_R VAR_3 = FUNC_0(((const Vsrt *) VAR_0)->t);
 GBT_VARKEY_R VAR_4 = FUNC_0(((const Vsrt *) VAR_1)->t);
 const gbt_vsrt_arg *VAR_5 = (const gbt_vsrt_arg *) VAR_2;
 int VAR_6;

 VAR_6 = VAR_5->tinfo->f_cmp(VAR_3.lower, VAR_4.lower, VAR_5->collation, VAR_5->flinfo);
 if (VAR_6 == 0)
  return VAR_5->tinfo->f_cmp(VAR_3.upper, VAR_4.upper, VAR_5->collation, VAR_5->flinfo);

 return VAR_6;
}
