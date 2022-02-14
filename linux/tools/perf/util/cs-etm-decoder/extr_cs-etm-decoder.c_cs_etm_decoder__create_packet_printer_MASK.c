
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cs_etm_decoder {int dcd_tree; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const*,int ,void*,int *) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct cs_etm_decoder *VAR_1,
       const char *VAR_2,
       void *VAR_3)
{
 u8 VAR_4;

 if (FUNC_0(VAR_1->dcd_tree, VAR_2,
       VAR_0,
       VAR_3, &VAR_4))
  return -1;

 if (FUNC_1(VAR_1->dcd_tree, VAR_4, 0))
  return -1;

 return 0;
}
