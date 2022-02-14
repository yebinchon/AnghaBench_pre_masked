
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_4__ {scalar_t__ level; } ;
struct TYPE_6__ {scalar_t__ btpo_cycleid; int btpo_flags; TYPE_1__ btpo; int btpo_next; int btpo_prev; } ;
struct TYPE_5__ {int pd_lower; } ;
typedef TYPE_2__* PageHeader ;
typedef scalar_t__ Page ;
typedef int ItemIdData ;
typedef TYPE_3__* BTPageOpaque ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static Page
FUNC_3(uint32 VAR_3)
{
 Page VAR_4;
 BTPageOpaque VAR_5;

 VAR_4 = (Page) FUNC_2(VAR_0);


 FUNC_1(VAR_4, VAR_0);


 VAR_5 = (BTPageOpaque) FUNC_0(VAR_4);
 VAR_5->btpo_prev = VAR_5->btpo_next = VAR_2;
 VAR_5->btpo.level = VAR_3;
 VAR_5->btpo_flags = (VAR_3 > 0) ? 0 : VAR_1;
 VAR_5->btpo_cycleid = 0;


 ((PageHeader) VAR_4)->pd_lower += sizeof(ItemIdData);

 return VAR_4;
}
