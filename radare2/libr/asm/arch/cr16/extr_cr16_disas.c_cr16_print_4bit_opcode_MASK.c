
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut16 ;
struct cr16_cmd {int instr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (size_t) ;
 size_t FUNC_1 (int ) ;
 char** VAR_1 ;
 int FUNC_2 (int ,scalar_t__,char*,char*) ;

__attribute__((used)) static inline int FUNC_3(struct cr16_cmd *VAR_2, ut16 VAR_3)
{
 if (FUNC_0(FUNC_1(VAR_3))) {
  return -1;
 }

 FUNC_2(VAR_2->instr, VAR_0 - 1, "%s",
   VAR_1[FUNC_1(VAR_3)]);

 return 0;
}
