
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
 int FUNC_1 (int ,int ,scalar_t__,int *,unsigned int,int ) ;

__attribute__((used)) static inline int
FUNC_2(struct snd_bebob *VAR_2, u64 VAR_3,
     u32 *VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;
 __be32 *VAR_8 = (__be32 *)VAR_4;

 VAR_7 = FUNC_1(VAR_2->unit, VAR_1,
      VAR_0 + VAR_3,
      VAR_8, VAR_5, 0);
 if (VAR_7 < 0)
  goto end;

 for (VAR_6 = 0; VAR_6 < VAR_5 / sizeof(u32); VAR_6++)
  VAR_4[VAR_6] = FUNC_0(VAR_8[VAR_6]);
end:
 return VAR_7;
}
