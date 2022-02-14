
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ut8 ;
typedef int ut32 ;
struct propeller_cmd {char* prefix; } ;


 char** VAR_0 ;
 int FUNC_0 (char*,int,char*,char*) ;

__attribute__((used)) static void FUNC_1 (struct propeller_cmd *VAR_1, ut32 VAR_2) {
 ut8 VAR_3 = (VAR_2 >> 18) & 0xF;

 FUNC_0 (VAR_1->prefix, 15, "%s", VAR_0[VAR_3]);
 VAR_1->prefix[15] = '\0';
}
