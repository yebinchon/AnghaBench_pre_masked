
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int is_internal; int auxiliary_id; } ;
typedef int Oid ;
typedef TYPE_1__ ObjectAccessPostAlter ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int ,int ,int ,int,void*) ;
 int FUNC_3 (int ,int ,int ,int,void*) ;

void
FUNC_4(Oid VAR_1, Oid VAR_2, int VAR_3,
        Oid VAR_4, bool VAR_5)
{
 ObjectAccessPostAlter VAR_6;


 FUNC_0(&FUNC_2 != ((void*)0));

 FUNC_1(&VAR_6, 0, sizeof(ObjectAccessPostAlter));
 VAR_6.auxiliary_id = VAR_4;
 VAR_6.is_internal = VAR_5;

 FUNC_2) (VAR_0,
         VAR_1, VAR_2, VAR_3,
         (void *) &VAR_6);
}
