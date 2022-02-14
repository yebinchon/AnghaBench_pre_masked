
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum net_attach_type { ____Placeholder_net_attach_type } net_attach_type ;


 scalar_t__* VAR_0 ;
 scalar_t__ FUNC_0 (char const*,scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static enum net_attach_type FUNC_1(const char *VAR_2)
{
 enum net_attach_type VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_0[VAR_3] &&
      FUNC_0(VAR_2, VAR_0[VAR_3]))
   return VAR_3;
 }

 return VAR_1;
}
