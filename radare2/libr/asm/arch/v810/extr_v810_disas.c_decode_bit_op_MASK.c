
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ut8 ;
typedef int ut16 ;
struct v810_cmd {int instr; } ;


 size_t FUNC_0 (int const) ;
 scalar_t__ VAR_0 ;
 char** VAR_1 ;
 int FUNC_1 (int ,scalar_t__,char*,char*) ;

__attribute__((used)) static int FUNC_2(const ut16 VAR_2, struct v810_cmd *VAR_3) {
 ut8 VAR_4;

 VAR_4 = FUNC_0(VAR_2);
 FUNC_1 (VAR_3->instr, VAR_0 - 1, "%s", VAR_1[VAR_4]);

 return 2;
}
