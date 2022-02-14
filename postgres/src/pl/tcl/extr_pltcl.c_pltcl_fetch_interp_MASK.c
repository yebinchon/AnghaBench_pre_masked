
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * interp; } ;
typedef TYPE_1__ pltcl_interp_desc ;
typedef int Oid ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int ,int *,int ,int*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static pltcl_interp_desc *
FUNC_3(Oid VAR_3, bool VAR_4)
{
 Oid VAR_5;
 pltcl_interp_desc *VAR_6;
 bool VAR_7;


 if (VAR_4)
  VAR_5 = FUNC_0();
 else
  VAR_5 = VAR_1;

 VAR_6 = FUNC_1(VAR_2, &VAR_5,
         VAR_0,
         &VAR_7);
 if (!VAR_7)
  VAR_6->interp = ((void*)0);


 if (!VAR_6->interp)
  FUNC_2(VAR_6, VAR_3, VAR_4);

 return VAR_6;
}
