
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int upper; int lower; } ;
typedef TYPE_1__ uuidKEY ;
struct TYPE_4__ {scalar_t__ t; } ;
typedef TYPE_2__ Nsrt ;
typedef int FmgrInfo ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1, FmgrInfo *VAR_2)
{
 uuidKEY *VAR_3 = (uuidKEY *) (((const Nsrt *) VAR_0)->t);
 uuidKEY *VAR_4 = (uuidKEY *) (((const Nsrt *) VAR_1)->t);
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_3->lower, &VAR_4->lower);
 if (VAR_5 == 0)
  VAR_5 = FUNC_0(&VAR_3->upper, &VAR_4->upper);
 return VAR_5;
}
