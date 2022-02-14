
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct snd_bebob {int unit; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,scalar_t__,int *,int,int ) ;

__attribute__((used)) static inline int
FUNC_2(struct snd_bebob *VAR_2, u64 VAR_3, u32 *VAR_4)
{
 int VAR_5;
 __be32 VAR_6;

 VAR_5 = FUNC_1(VAR_2->unit, VAR_1,
     VAR_0 + VAR_3,
     &VAR_6, sizeof(__be32), 0);
 if (VAR_5 < 0)
  goto end;

 *VAR_4 = FUNC_0(VAR_6);
end:
 return VAR_5;
}
