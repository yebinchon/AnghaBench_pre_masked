
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
typedef scalar_t__ ut32 ;
struct TYPE_3__ {unsigned int length; int syntax; } ;
typedef TYPE_1__ tms320_dasm_t ;


 char* FUNC_0 (int ,unsigned int*) ;
 int FUNC_1 (char*) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,int,char*,char*) ;
 size_t FUNC_3 (char*) ;
 char FUNC_4 (unsigned char) ;

int FUNC_5(tms320_dasm_t *VAR_2, const ut8 *VAR_3, int VAR_4) {
 unsigned int VAR_5;
 char *VAR_6;
 size_t VAR_7, VAR_8;

 VAR_0 = (ut8 *)VAR_3;
 VAR_1 = (ut32)VAR_4;

 VAR_5 = 0;


 VAR_6 = FUNC_0(0, &VAR_5);
 VAR_2->length = VAR_5;
 if (!VAR_6) {
  return 0;
 }


 VAR_2->length = VAR_5;
 VAR_8 = FUNC_3(VAR_6);
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  {
   VAR_6[VAR_7] = FUNC_4 ((unsigned char)VAR_6[VAR_7]);
  }
 }
 FUNC_2 (VAR_2->syntax, sizeof(VAR_2->syntax), "%s", VAR_6);
 FUNC_1 (VAR_6);

 return VAR_5;
}
