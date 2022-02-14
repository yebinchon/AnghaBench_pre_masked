
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int elemtype; scalar_t__ dataoffset; scalar_t__ ndim; } ;
typedef int Oid ;
typedef TYPE_1__ ArrayType ;


 int FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (int) ;

ArrayType *
FUNC_2(Oid VAR_0)
{
 ArrayType *VAR_1;

 VAR_1 = (ArrayType *) FUNC_1(sizeof(ArrayType));
 FUNC_0(VAR_1, sizeof(ArrayType));
 VAR_1->ndim = 0;
 VAR_1->dataoffset = 0;
 VAR_1->elemtype = VAR_0;
 return VAR_1;
}
