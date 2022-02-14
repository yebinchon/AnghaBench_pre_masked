
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ndim; int elemtype; scalar_t__ dataoffset; } ;
typedef int Size ;
typedef TYPE_1__ Acl ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int* FUNC_1 (TYPE_1__*) ;
 int* FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int ,char*,int) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static Acl *
FUNC_6(int VAR_2)
{
 Acl *VAR_3;
 Size VAR_4;

 if (VAR_2 < 0)
  FUNC_4(VAR_1, "invalid size: %d", VAR_2);
 VAR_4 = FUNC_0(VAR_2);
 VAR_3 = (Acl *) FUNC_5(VAR_4);
 FUNC_3(VAR_3, VAR_4);
 VAR_3->ndim = 1;
 VAR_3->dataoffset = 0;
 VAR_3->elemtype = VAR_0;
 FUNC_2(VAR_3)[0] = 1;
 FUNC_1(VAR_3)[0] = VAR_2;
 return VAR_3;
}
