
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct aa_profile {int * hash; } ;
typedef int __le32 ;
struct TYPE_6__ {scalar_t__ tfm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *,size_t) ;
 TYPE_1__* VAR_5 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,int ) ;

int FUNC_7(struct aa_profile *VAR_6, u32 VAR_7, void *VAR_8,
    size_t VAR_9)
{
 FUNC_0(VAR_5, VAR_4);
 int VAR_10 = -VAR_0;
 __le32 VAR_11 = FUNC_1(VAR_7);

 if (!VAR_2)
  return 0;

 if (!VAR_4)
  return 0;

 VAR_6->hash = FUNC_6(VAR_3, VAR_1);
 if (!VAR_6->hash)
  goto fail;

 VAR_5->tfm = VAR_4;

 VAR_10 = FUNC_3(VAR_5);
 if (VAR_10)
  goto fail;
 VAR_10 = FUNC_4(VAR_5, (u8 *) &VAR_11, 4);
 if (VAR_10)
  goto fail;
 VAR_10 = FUNC_4(VAR_5, (u8 *) VAR_8, VAR_9);
 if (VAR_10)
  goto fail;
 VAR_10 = FUNC_2(VAR_5, VAR_6->hash);
 if (VAR_10)
  goto fail;

 return 0;

fail:
 FUNC_5(VAR_6->hash);
 VAR_6->hash = ((void*)0);

 return VAR_10;
}
