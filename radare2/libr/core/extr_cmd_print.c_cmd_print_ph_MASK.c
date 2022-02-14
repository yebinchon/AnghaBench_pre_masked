
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ut32 ;
struct TYPE_7__ {int (* handler ) (int ,int) ;scalar_t__ name; } ;
struct TYPE_6__ {int blocksize; int block; int num; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 TYPE_4__* VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int ,char const*) ;
 int FUNC_5 (scalar_t__,char const*,char) ;
 char* FUNC_6 (char const*) ;
 int FUNC_7 (char const*,char*,char*) ;
 char* FUNC_8 (char const*,char) ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static bool FUNC_10(RCore *VAR_1, const char *VAR_2) {
 char VAR_3[128];
 ut32 VAR_4 = 0, VAR_5 = VAR_1->blocksize;
 const char *VAR_6;
 int VAR_7 = 0, VAR_8 = 0;

 if (!*VAR_2 || *VAR_2 == '?') {
  FUNC_0 (1);
  return 1;
 }
 if (*VAR_2 == '=') {
  FUNC_0 (0);
  return 1;
 }
 VAR_2 = FUNC_6 (VAR_2);
 VAR_6 = FUNC_8 (VAR_2, ' ');
 FUNC_7 (VAR_2, "%31s", VAR_3);
 if (VAR_6 && VAR_6[1]) {
  int VAR_9 = FUNC_4 (VAR_1->num, VAR_6 + 1);
  if (VAR_9 > 0) {
   VAR_5 = VAR_9;
  }
  VAR_4 = VAR_1->blocksize;
  if (VAR_9 > VAR_1->blocksize) {
   FUNC_3 (VAR_1, VAR_9);
   if (VAR_9 != VAR_1->blocksize) {
    FUNC_1 ("Invalid block size\n");
    FUNC_3 (VAR_1, VAR_4);
    return 0;
   }
   FUNC_2 (VAR_1);
  }
 } else if (!VAR_6 || !*(VAR_6 + 1)) {
  VAR_4 = VAR_5;
 }

 while (VAR_4 > 0 && VAR_0[VAR_7].name) {
  if (!FUNC_5 (VAR_0[VAR_7].name, VAR_2, ' ')) {
   VAR_0[VAR_7].handler (VAR_1->block, VAR_5);
   VAR_8 = 1;
   break;
  }
  VAR_7++;
 }
 if (VAR_4) {
  FUNC_3 (VAR_1, VAR_4);
 }
 return VAR_8;
}
