
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct snd_dice {int unit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__,void*,size_t,int ) ;

__attribute__((used)) static inline int FUNC_1(struct snd_dice *VAR_2, u64 VAR_3,
       u32 VAR_4, void *VAR_5, size_t VAR_6)
{
 return FUNC_0(VAR_2->unit,
      VAR_6 == 4 ? VAR_1 :
          VAR_0,
      VAR_3 + VAR_4, VAR_5, VAR_6, 0);
}
