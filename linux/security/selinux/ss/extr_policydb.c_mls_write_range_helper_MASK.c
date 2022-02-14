
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mls_range {TYPE_1__* level; } ;
typedef int __le32 ;
struct TYPE_3__ {size_t sens; int cat; } ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (int *,void*) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_5 (int *,int,size_t,void*) ;

__attribute__((used)) static int FUNC_6(struct mls_range *VAR_0, void *VAR_1)
{
 __le32 VAR_2[3];
 size_t VAR_3;
 int VAR_4, VAR_5;

 VAR_5 = FUNC_4(&VAR_0->level[1], &VAR_0->level[0]);

 if (VAR_5)
  VAR_3 = 2;
 else
  VAR_3 = 3;
 VAR_2[0] = FUNC_2(VAR_3-1);
 VAR_2[1] = FUNC_2(VAR_0->level[0].sens);
 if (!VAR_5)
  VAR_2[2] = FUNC_2(VAR_0->level[1].sens);

 FUNC_1(VAR_3 > FUNC_0(VAR_2));

 VAR_4 = FUNC_5(VAR_2, sizeof(u32), VAR_3, VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_3(&VAR_0->level[0].cat, VAR_1);
 if (VAR_4)
  return VAR_4;
 if (!VAR_5) {
  VAR_4 = FUNC_3(&VAR_0->level[1].cat, VAR_1);
  if (VAR_4)
   return VAR_4;
 }

 return 0;
}
