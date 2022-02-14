
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_insn_pos {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,long) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 long VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct bpf_insn_pos*) ;
 int FUNC_5 (int ,struct bpf_insn_pos*) ;

__attribute__((used)) static int
FUNC_6(struct bpf_insn_pos *VAR_10,
      int VAR_11,
      int VAR_12,
      long VAR_13)
{

 if (VAR_11 != VAR_7)
  FUNC_5(FUNC_3(VAR_7, VAR_11), VAR_10);

 if (VAR_13)
  FUNC_5(FUNC_0(VAR_0, VAR_7, VAR_13), VAR_10);


 FUNC_5(FUNC_0(VAR_3, VAR_6, VAR_8), VAR_10);


 if (VAR_12 != VAR_5)
  FUNC_5(FUNC_3(VAR_5, VAR_12), VAR_10);


 FUNC_5(FUNC_1(VAR_1), VAR_10);





 FUNC_5(FUNC_2(VAR_2, VAR_4, 0, VAR_9),
     VAR_10);

 return FUNC_4(VAR_10);
}
