
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int node; } ;
typedef TYPE_1__ RelFileNodeBackend ;
typedef int ForkNumber ;
typedef int FileTag ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (TYPE_1__) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(RelFileNodeBackend VAR_1, ForkNumber VAR_2,
      BlockNumber VAR_3)
{
 FileTag VAR_4;

 FUNC_1(VAR_4, VAR_1.node, VAR_2, VAR_3);


 FUNC_0(!FUNC_3(VAR_1));

 FUNC_2(&VAR_4, VAR_0, 1 );
}
