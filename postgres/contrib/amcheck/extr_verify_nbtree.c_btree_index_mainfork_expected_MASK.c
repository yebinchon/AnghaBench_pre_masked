
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* rd_rel; } ;
struct TYPE_5__ {scalar_t__ relpersistence; } ;
typedef TYPE_2__* Relation ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static inline bool
FUNC_5(Relation VAR_3)
{
 if (VAR_3->rd_rel->relpersistence != VAR_2 ||
  !FUNC_0())
  return 1;

 FUNC_2(VAR_1,
   (FUNC_3(VAR_0),
    FUNC_4("cannot verify unlogged index \"%s\" during recovery, skipping",
     FUNC_1(VAR_3))));

 return 0;
}
