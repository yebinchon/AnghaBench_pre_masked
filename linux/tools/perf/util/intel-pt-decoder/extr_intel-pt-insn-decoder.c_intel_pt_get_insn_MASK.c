
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pt_insn {int buf; } ;
struct insn {size_t length; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct insn*) ;
 int FUNC_1 (struct insn*) ;
 int FUNC_2 (struct insn*,unsigned char const*,size_t,int) ;
 int FUNC_3 (struct insn*,struct intel_pt_insn*) ;
 int FUNC_4 (int ,unsigned char const*,size_t) ;

int FUNC_5(const unsigned char *VAR_1, size_t VAR_2, int VAR_3,
        struct intel_pt_insn *VAR_4)
{
 struct insn VAR_5;

 FUNC_2(&VAR_5, VAR_1, VAR_2, VAR_3);
 FUNC_1(&VAR_5);
 if (!FUNC_0(&VAR_5) || VAR_5.length > VAR_2)
  return -1;
 FUNC_3(&VAR_5, VAR_4);
 if (VAR_5.length < VAR_0)
  FUNC_4(VAR_4->buf, VAR_1, VAR_5.length);
 else
  FUNC_4(VAR_4->buf, VAR_1, VAR_0);
 return 0;
}
