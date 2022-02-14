
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
typedef int name ;
struct TYPE_2__ {int byte; int size; int op_type; int * name; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int*,int) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (char*,char const*,int) ;

int FUNC_4(ut64 VAR_1, ut8 *VAR_2, const char *VAR_3) {
 ut64 VAR_4[4] = {0};
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 char VAR_10[128];

 FUNC_3 (VAR_10, VAR_3, sizeof (VAR_10) - 1);
 VAR_10[sizeof (VAR_10) - 1] = 0;

 int VAR_11 = FUNC_1 (VAR_10, VAR_4, 4);
 VAR_6 = VAR_4[0];
 VAR_7 = VAR_4[1];
 VAR_8 = VAR_4[2];
 VAR_9 = VAR_4[3];
 for (VAR_5 = 0; VAR_0[VAR_5].name != ((void*)0); VAR_5++) {
  if (!FUNC_2 (VAR_10, VAR_0[VAR_5].name)) {
   VAR_2[0] = VAR_0[VAR_5].byte;
   switch (VAR_0[VAR_5].size) {
   case 2: VAR_2[1] = VAR_6;
    break;
   case 3:
    if (VAR_11 == 2) {
     VAR_2[1] = VAR_6;
     VAR_2[2] = VAR_7;
    } else {
     if (FUNC_0 (VAR_0[VAR_5].op_type)) {

      VAR_6 -= VAR_1;
     }
     VAR_2[1] = (VAR_6 >> 8) & 0xff;
     VAR_2[2] = VAR_6 & 0xff;
    }
    break;
   case 5: VAR_2[1] = VAR_6;
    VAR_2[2] = VAR_7;
    VAR_2[3] = VAR_8;
    VAR_2[4] = VAR_9;
    break;
   }
   return VAR_0[VAR_5].size;
  }
 }
 return 0;
}
