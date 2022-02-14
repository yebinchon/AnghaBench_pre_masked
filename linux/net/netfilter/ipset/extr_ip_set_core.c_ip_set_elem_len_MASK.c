
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nlattr {int dummy; } ;
struct ip_set {size_t* offset; int extensions; int flags; } ;
typedef enum ip_set_ext_id { ____Placeholder_ip_set_ext_id } ip_set_ext_id ;
struct TYPE_2__ {size_t align; scalar_t__ len; int type; } ;


 size_t FUNC_0 (size_t,size_t) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int,struct nlattr**) ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (struct nlattr*) ;

size_t
FUNC_3(struct ip_set *VAR_5, struct nlattr *VAR_6[], size_t VAR_7,
  size_t VAR_8)
{
 enum ip_set_ext_id VAR_9;
 u32 VAR_10 = 0;

 if (VAR_6[VAR_0])
  VAR_10 = FUNC_2(VAR_6[VAR_0]);
 if (VAR_10 & VAR_3)
  VAR_5->flags |= VAR_1;
 if (!VAR_8)
  VAR_8 = 1;
 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  if (!FUNC_1(VAR_9, VAR_10, VAR_6))
   continue;
  VAR_7 = FUNC_0(VAR_7, VAR_4[VAR_9].align);
  VAR_5->offset[VAR_9] = VAR_7;
  VAR_5->extensions |= VAR_4[VAR_9].type;
  VAR_7 += VAR_4[VAR_9].len;
 }
 return FUNC_0(VAR_7, VAR_8);
}
