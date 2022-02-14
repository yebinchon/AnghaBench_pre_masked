
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int end; } ;
struct sw_flow_match {TYPE_1__ range; struct sw_flow_key* key; } ;
struct sw_flow_key {int dummy; } ;
struct TYPE_4__ {int unmasked_key; } ;
struct sw_flow {TYPE_2__ id; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct sw_flow_key*,int,int) ;
 int FUNC_2 (struct sw_flow_key*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static bool FUNC_4(const struct sw_flow *VAR_0,
          const struct sw_flow_match *VAR_1)
{
 struct sw_flow_key *VAR_2 = VAR_1->key;
 int VAR_3 = FUNC_2(VAR_2);
 int VAR_4 = VAR_1->range.end;

 FUNC_0(FUNC_3(&VAR_0->id));
 return FUNC_1(VAR_0->id.unmasked_key, VAR_2, VAR_3, VAR_4);
}
