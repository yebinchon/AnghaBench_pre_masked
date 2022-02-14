
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ut64 ;
typedef int ut32 ;
struct TYPE_7__ {int blocksize_max; int blocksize; int num; int flags; } ;
struct TYPE_6__ {int size; } ;
typedef TYPE_1__ RFlagItem ;
typedef TYPE_2__ RCore ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 TYPE_1__* FUNC_4 (int ,char const*) ;
 int FUNC_5 (int ,char const*) ;

__attribute__((used)) static int FUNC_6(void *VAR_1, const char *VAR_2) {
 ut64 VAR_3;
 RFlagItem *VAR_4;
 RCore *VAR_5 = (RCore *)VAR_1;
 switch (VAR_2[0]) {
 case 'm':
  VAR_3 = FUNC_5 (VAR_5->num, VAR_2 + 1);
  if (VAR_3 > 1) {
   VAR_5->blocksize_max = VAR_3;
  } else {
   FUNC_1 ("0x%x\n", (ut32)VAR_5->blocksize_max);
  }
  break;
 case '+':
  VAR_3 = FUNC_5 (VAR_5->num, VAR_2 + 1);
  FUNC_2 (VAR_5, VAR_5->blocksize + VAR_3);
  break;
 case '-':
  VAR_3 = FUNC_5 (VAR_5->num, VAR_2 + 1);
  FUNC_2 (VAR_5, VAR_5->blocksize - VAR_3);
  break;
 case 'f':
  if (VAR_2[1] == ' ') {
   VAR_4 = FUNC_4 (VAR_5->flags, VAR_2 + 2);
   if (VAR_4) {
    FUNC_2 (VAR_5, VAR_4->size);
   } else {
    FUNC_0 ("bf: cannot find flag named '%s'\n", VAR_2 + 2);
   }
  } else {
   FUNC_0 ("Usage: bf [flagname]\n");
  }
  break;
 case 'j':
  FUNC_1 ("{\"blocksize\":%d,\"blocksize_limit\":%d}\n", VAR_5->blocksize, VAR_5->blocksize_max);
  break;
 case '*':
  FUNC_1 ("b 0x%x\n", VAR_5->blocksize);
  break;
 case '\0':
  FUNC_1 ("0x%x\n", VAR_5->blocksize);
  break;
 case ' ':
  FUNC_2 (VAR_5, FUNC_5 (VAR_5->num, VAR_2));
  break;
 default:
 case '?':
  FUNC_3 (VAR_5, VAR_0);
  break;
 }
 return 0;
}
