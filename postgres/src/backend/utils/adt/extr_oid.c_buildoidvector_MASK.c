
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ndim; int dim1; scalar_t__ lbound1; int elemtype; scalar_t__ dataoffset; int values; } ;
typedef TYPE_1__ oidvector ;
typedef int Oid ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ,int const*,int) ;
 scalar_t__ FUNC_3 (int ) ;

oidvector *
FUNC_4(const Oid *VAR_1, int VAR_2)
{
 oidvector *VAR_3;

 VAR_3 = (oidvector *) FUNC_3(FUNC_0(VAR_2));

 if (VAR_2 > 0 && VAR_1)
  FUNC_2(VAR_3->values, VAR_1, VAR_2 * sizeof(Oid));





 FUNC_1(VAR_3, FUNC_0(VAR_2));
 VAR_3->ndim = 1;
 VAR_3->dataoffset = 0;
 VAR_3->elemtype = VAR_0;
 VAR_3->dim1 = VAR_2;
 VAR_3->lbound1 = 0;

 return VAR_3;
}
