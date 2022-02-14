
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ relNode; scalar_t__ spcNode; int dbNode; } ;
typedef TYPE_1__ RelFileNode ;
typedef int Oid ;
typedef int FileTag ;


 int FUNC_0 (int ,TYPE_1__,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_2 ;

void
FUNC_2(Oid VAR_3)
{
 FileTag VAR_4;
 RelFileNode VAR_5;

 VAR_5.dbNode = VAR_3;
 VAR_5.spcNode = 0;
 VAR_5.relNode = 0;

 FUNC_0(VAR_4, VAR_5, VAR_1, VAR_0);

 FUNC_1(&VAR_4, VAR_2, 1 );
}
