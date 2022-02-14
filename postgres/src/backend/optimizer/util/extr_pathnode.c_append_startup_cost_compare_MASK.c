
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* parent; } ;
struct TYPE_5__ {int relids; } ;
typedef TYPE_2__ Path ;
typedef int ListCell ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (int const*) ;

__attribute__((used)) static int
FUNC_3(const ListCell *VAR_1, const ListCell *VAR_2)
{
 Path *VAR_3 = (Path *) FUNC_2(VAR_1);
 Path *VAR_4 = (Path *) FUNC_2(VAR_2);
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_4, VAR_0);
 if (VAR_5 != 0)
  return -VAR_5;
 return FUNC_0(VAR_3->parent->relids, VAR_4->parent->relids);
}
