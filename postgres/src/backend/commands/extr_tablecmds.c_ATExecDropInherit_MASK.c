
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* rd_rel; } ;
struct TYPE_9__ {scalar_t__ relispartition; } ;
typedef TYPE_2__* Relation ;
typedef int RangeVar ;
typedef int ObjectAddress ;
typedef int LOCKMODE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_7 (int *,int ) ;

__attribute__((used)) static ObjectAddress
FUNC_8(Relation VAR_5, RangeVar *VAR_6, LOCKMODE VAR_7)
{
 ObjectAddress VAR_8;
 Relation VAR_9;

 if (VAR_5->rd_rel->relispartition)
  FUNC_3(VAR_2,
    (FUNC_4(VAR_1),
     FUNC_5("cannot change inheritance of a partition")));






 VAR_9 = FUNC_7(VAR_6, VAR_0);







 FUNC_2(VAR_5, VAR_9);

 FUNC_0(VAR_8, VAR_4,
      FUNC_1(VAR_9));


 FUNC_6(VAR_9, VAR_3);

 return VAR_8;
}
