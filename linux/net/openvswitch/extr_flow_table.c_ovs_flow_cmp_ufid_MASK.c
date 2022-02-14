
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sw_flow_id {scalar_t__ ufid_len; int ufid; } ;
struct TYPE_2__ {scalar_t__ ufid_len; int ufid; } ;
struct sw_flow {TYPE_1__ id; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_1(const struct sw_flow *VAR_0,
         const struct sw_flow_id *VAR_1)
{
 if (VAR_0->id.ufid_len != VAR_1->ufid_len)
  return 0;

 return !FUNC_0(VAR_0->id.ufid, VAR_1->ufid, VAR_1->ufid_len);
}
