
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {void* mask; void* val; } ;
struct ctnetlink_filter {TYPE_1__ mark; int family; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ctnetlink_filter* FUNC_0 (int ) ;
 int VAR_4 ;
 struct ctnetlink_filter* FUNC_1 (int,int ) ;
 int FUNC_2 (struct nlattr const* const) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static struct ctnetlink_filter *
FUNC_4(const struct nlattr * const VAR_5[], u8 VAR_6)
{
 struct ctnetlink_filter *VAR_7;


 if (VAR_5[VAR_0] && VAR_5[VAR_1])
  return FUNC_0(-VAR_3);


 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_4);
 if (VAR_7 == ((void*)0))
  return FUNC_0(-VAR_2);

 VAR_7->family = VAR_6;







 return VAR_7;
}
