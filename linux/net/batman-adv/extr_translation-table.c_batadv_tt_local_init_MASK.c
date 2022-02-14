
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ local_hash; } ;
struct batadv_priv {TYPE_1__ tt; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct batadv_priv *VAR_2)
{
 if (VAR_2->tt.local_hash)
  return 0;

 VAR_2->tt.local_hash = FUNC_0(1024);

 if (!VAR_2->tt.local_hash)
  return -VAR_0;

 FUNC_1(VAR_2->tt.local_hash,
       &VAR_1);

 return 0;
}
