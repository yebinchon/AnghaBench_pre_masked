
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int globals_list; } ;
struct TYPE_5__ {unsigned short leaf_type; } ;
typedef TYPE_1__ SGlobal ;
typedef TYPE_2__ SGDATAStream ;
typedef int R_STREAM_FILE ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,unsigned short,TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,unsigned short,char*) ;

void FUNC_6(void *VAR_0, R_STREAM_FILE *VAR_1) {
 unsigned short VAR_2 = 0;
 unsigned short VAR_3 = 0;
 char *VAR_4 = 0;
 SGDATAStream *VAR_5 = (SGDATAStream *) VAR_0;
 SGlobal *VAR_6 = 0;

 VAR_5->globals_list = FUNC_4 ();
 while (1) {
  FUNC_5 (VAR_1, 2, (char *)&VAR_2);
  if (VAR_2 == 0) {
   break;
  }
  VAR_4 = (char *) FUNC_1 (VAR_2);
  if (!VAR_4) {
   return;
  }
  FUNC_5 (VAR_1, VAR_2, VAR_4);

  VAR_3 = *(unsigned short *) (VAR_4);
  if ((VAR_3 == 0x110E) || (VAR_3 == 0x1009)) {
   VAR_6 = (SGlobal *) FUNC_1(sizeof(SGlobal));
   if (!VAR_6) {
    FUNC_0 (VAR_4);
    return;
   }
   VAR_6->leaf_type = VAR_3;
   FUNC_2 (VAR_4 + 2, VAR_2, VAR_6);
   FUNC_3 (VAR_5->globals_list, VAR_6);
  }
  FUNC_0 (VAR_4);
 }
}
