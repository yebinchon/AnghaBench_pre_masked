
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nlattr {int dummy; } ;
typedef enum ip_set_ext_id { ____Placeholder_ip_set_ext_id } ip_set_ext_id ;
struct TYPE_2__ {int flag; } ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static inline bool
FUNC_0(enum ip_set_ext_id VAR_2, u32 VAR_3, struct nlattr *VAR_4[])
{
 return VAR_1[VAR_2].flag ?
  (VAR_3 & VAR_1[VAR_2].flag) :
  !!VAR_4[VAR_0];
}
