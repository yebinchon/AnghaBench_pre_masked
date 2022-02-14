
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct metadata_dst {int dummy; } ;
typedef int gfp_t ;
typedef enum metadata_type { ____Placeholder_metadata_type } metadata_type ;


 int FUNC_0 (struct metadata_dst*,int,scalar_t__) ;
 struct metadata_dst* FUNC_1 (scalar_t__,int ) ;

struct metadata_dst *FUNC_2(u8 VAR_0, enum metadata_type VAR_1,
     gfp_t VAR_2)
{
 struct metadata_dst *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3) + VAR_0, VAR_2);
 if (!VAR_3)
  return ((void*)0);

 FUNC_0(VAR_3, VAR_1, VAR_0);

 return VAR_3;
}
