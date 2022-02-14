
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {scalar_t__ len; int * vec; } ;
struct TYPE_5__ {TYPE_1__ sp; } ;
typedef TYPE_2__ dccp_feat_val ;


 int VAR_0 ;
 int FUNC_0 () ;
 int * FUNC_1 (scalar_t__ const*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2(dccp_feat_val *VAR_1, u8 const *VAR_2, u8 VAR_3)
{
 VAR_1->sp.len = VAR_3;
 if (VAR_1->sp.len > 0) {
  VAR_1->sp.vec = FUNC_1(VAR_2, VAR_3, FUNC_0());
  if (VAR_1->sp.vec == ((void*)0)) {
   VAR_1->sp.len = 0;
   return -VAR_0;
  }
 }
 return 0;
}
