
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef void* ut64 ;
struct TYPE_8__ {int blocksize; int offset; int num; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (TYPE_1__*,char const*) ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__*,int ,void*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 void* FUNC_7 (int ,char*) ;
 char* FUNC_8 (char const*) ;
 char* FUNC_9 (char*,char) ;

__attribute__((used)) static bool FUNC_10(RCore *VAR_1, const char *VAR_2) {
 if (!VAR_1 || !*VAR_2) {
  return 0;
 }
 if (VAR_2[1] == '?') {
  FUNC_2 ("Usage: wf [file] ([size] ([offset]))\n");
  FUNC_6 (VAR_1, VAR_0);
  return 0;
 }
 if (VAR_2[1] == 's') {
  return FUNC_1 (VAR_1, VAR_2 + 1);
 }
 if (VAR_2[1] == 'f') {
  return FUNC_0 (VAR_1, VAR_2 + 1);
 }
 char *VAR_3 = FUNC_8 (VAR_2 + 1);
 char *VAR_4 = FUNC_9 (VAR_3, ' ');
 int VAR_5 = VAR_1->blocksize;
 if (VAR_4) {
  *VAR_4++ = 0;
  VAR_5 = FUNC_7 (VAR_1->num, VAR_4);
 }
 ut64 VAR_6 = FUNC_7 (VAR_1->num, VAR_3);
 FUNC_4 (VAR_1, VAR_1->offset, VAR_6, VAR_5);
 FUNC_3 (VAR_3);
 FUNC_5 (VAR_1);
 return 1;
}
