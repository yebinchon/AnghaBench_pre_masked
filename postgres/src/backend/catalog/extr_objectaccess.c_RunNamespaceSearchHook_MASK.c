
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ereport_on_violation; int result; } ;
typedef int Oid ;
typedef TYPE_1__ ObjectAccessNamespaceSearch ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int ,int ,int ,int ,void*) ;
 int FUNC_3 (int ,int ,int ,int ,void*) ;

bool
FUNC_4(Oid VAR_2, bool VAR_3)
{
 ObjectAccessNamespaceSearch VAR_4;


 FUNC_0(&FUNC_2 != ((void*)0));

 FUNC_1(&VAR_4, 0, sizeof(ObjectAccessNamespaceSearch));
 VAR_4.ereport_on_violation = VAR_3;
 VAR_4.result = 1;

 FUNC_2) (VAR_1,
         VAR_0, VAR_2, 0,
         (void *) &VAR_4);

 return VAR_4.result;
}
