
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut16 ;
struct v810_cmd {int operands; int instr; } ;


 int FUNC_0 (int const,int const) ;
 size_t FUNC_1 (int const) ;
 scalar_t__ VAR_0 ;
 char** VAR_1 ;
 int FUNC_2 (int ,scalar_t__,char*,...) ;

__attribute__((used)) static int FUNC_3(const ut16 VAR_2, const ut16 VAR_3, struct v810_cmd *VAR_4) {
 FUNC_2 (VAR_4->instr, VAR_0 - 1, "%s",
   VAR_1[FUNC_1(VAR_2)]);
 FUNC_2 (VAR_4->operands, VAR_0 - 1, "%d",
   FUNC_0(VAR_2, VAR_3));

 return 4;
}
