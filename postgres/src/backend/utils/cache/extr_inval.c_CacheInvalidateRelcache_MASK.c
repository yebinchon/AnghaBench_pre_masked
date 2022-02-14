
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* rd_rel; } ;
struct TYPE_5__ {scalar_t__ relisshared; } ;
typedef TYPE_2__* Relation ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;

void
FUNC_3(Relation VAR_2)
{
 Oid VAR_3;
 Oid VAR_4;

 FUNC_0();

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_2->rd_rel->relisshared)
  VAR_3 = VAR_0;
 else
  VAR_3 = VAR_1;

 FUNC_1(VAR_3, VAR_4);
}
