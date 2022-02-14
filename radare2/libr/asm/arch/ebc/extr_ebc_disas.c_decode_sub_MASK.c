
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_4__ {int instr; } ;
typedef TYPE_1__ ebc_command_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int const,int) ;
 int FUNC_1 (int const*,TYPE_1__*) ;
 char** VAR_2 ;
 int FUNC_2 (int ,int ,char*,char*,unsigned int) ;

__attribute__((used)) static int FUNC_3(const ut8 *VAR_3, ebc_command_t *VAR_4) {
 int VAR_5 = FUNC_1(VAR_3, VAR_4);
 unsigned VAR_6 = FUNC_0 (VAR_3[0], 6)? 64: 32;
 FUNC_2(VAR_4->instr, VAR_0, "%s%u",
   VAR_2[VAR_1], VAR_6);
 return VAR_5;
}
