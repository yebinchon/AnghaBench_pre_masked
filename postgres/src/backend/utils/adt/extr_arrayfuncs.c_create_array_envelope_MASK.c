
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ndim; int dataoffset; int elemtype; } ;
typedef int Oid ;
typedef TYPE_1__ ArrayType ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ,int*,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static ArrayType *
FUNC_5(int VAR_0, int *VAR_1, int *VAR_2, int VAR_3,
       Oid VAR_4, int VAR_5)
{
 ArrayType *VAR_6;

 VAR_6 = (ArrayType *) FUNC_4(VAR_3);
 FUNC_2(VAR_6, VAR_3);
 VAR_6->ndim = VAR_0;
 VAR_6->dataoffset = VAR_5;
 VAR_6->elemtype = VAR_4;
 FUNC_3(FUNC_0(VAR_6), VAR_1, VAR_0 * sizeof(int));
 FUNC_3(FUNC_1(VAR_6), VAR_2, VAR_0 * sizeof(int));

 return VAR_6;
}
