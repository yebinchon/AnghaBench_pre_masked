
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mls_level {int cat; int sens; } ;
typedef int __le32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,void*) ;
 int FUNC_2 (int *,int,int,void*) ;

__attribute__((used)) static int FUNC_3(struct mls_level *VAR_0, void *VAR_1)
{
 __le32 VAR_2[1];
 int VAR_3;

 VAR_2[0] = FUNC_0(VAR_0->sens);
 VAR_3 = FUNC_2(VAR_2, sizeof(u32), 1, VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1(&VAR_0->cat, VAR_1);
 if (VAR_3)
  return VAR_3;

 return 0;
}
