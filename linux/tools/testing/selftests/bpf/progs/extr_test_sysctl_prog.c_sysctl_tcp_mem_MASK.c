
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_sysctl {scalar_t__ write; } ;


 unsigned char FUNC_0 (unsigned long*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int,int ,unsigned long*) ;
 int FUNC_2 (struct bpf_sysctl*,char*,int) ;
 int FUNC_3 (struct bpf_sysctl*) ;

int FUNC_4(struct bpf_sysctl *VAR_2)
{
 unsigned long VAR_3[3] = {0, 0, 0};
 char VAR_4[VAR_1];
 unsigned char VAR_5, VAR_6 = 0;
 int VAR_7;

 if (VAR_2->write)
  return 0;

 if (!FUNC_3(VAR_2))
  return 0;

 VAR_7 = FUNC_2(VAR_2, VAR_4, VAR_1);
 if (VAR_7 < 0 || VAR_7 >= VAR_1)
  return 0;

#pragma clang loop unroll(full)
 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3); ++VAR_5) {
  VAR_7 = FUNC_1(VAR_4 + VAR_6, VAR_0, 0,
      VAR_3 + VAR_5);
  if (VAR_7 <= 0 || VAR_7 > VAR_0)
   return 0;
  VAR_6 += VAR_7 & VAR_0;
 }


 return VAR_3[0] < VAR_3[1] && VAR_3[1] < VAR_3[2];
}
