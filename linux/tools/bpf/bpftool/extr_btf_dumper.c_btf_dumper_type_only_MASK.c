
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf {int dummy; } ;
typedef int __u32 ;


 int FUNC_0 (struct btf const*,int ,char*,int ,int) ;

void FUNC_1(const struct btf *VAR_0, __u32 VAR_1, char *VAR_2,
     int VAR_3)
{
 int VAR_4;

 VAR_2[0] = '\0';
 if (!VAR_0)
  return;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, 0, VAR_3);
 if (VAR_4 < 0)
  VAR_2[0] = '\0';
}
