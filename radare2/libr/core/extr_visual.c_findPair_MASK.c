
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char ut8 ;
struct TYPE_6__ {char* block; TYPE_1__* print; scalar_t__ blocksize; } ;
struct TYPE_5__ {int cur; int ocur; } ;
typedef TYPE_2__ RCore ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 char* FUNC_2 (char*,scalar_t__,char const*,int) ;
 scalar_t__ FUNC_3 (char const*,char) ;

__attribute__((used)) static void FUNC_4(RCore *VAR_0) {
 ut8 VAR_1[256];
 int VAR_2, VAR_3, VAR_4 = VAR_0->print->cur + 1;
 int VAR_5 = 0;
 const ut8 *VAR_6, *VAR_7 = ((void*)0);
 const char *VAR_8 = "{}[]()<>";
 ut8 VAR_9 = VAR_0->block[VAR_0->print->cur];

 VAR_6 = (const ut8 *) FUNC_3 (VAR_8, VAR_9);
 if (VAR_6) {
  char VAR_10 = 0;
  if ((const char *) VAR_6 > VAR_8) {
   VAR_10 = VAR_6[-1];
  }
  VAR_5 = (size_t) (VAR_6 - (const ut8 *) VAR_8);
  VAR_9 = (VAR_5 % 2 && VAR_6 != (const ut8 *) VAR_8)? VAR_10: VAR_6[1];
 }
 VAR_3 = 1;
 VAR_1[0] = VAR_9;

 if (VAR_6 && (VAR_5 % 2)) {
  for (VAR_2 = VAR_4 - 1; VAR_2 >= 0; VAR_2--) {
   if (VAR_0->block[VAR_2] == VAR_9) {
    VAR_7 = VAR_0->block + VAR_2;
    break;
   }
  }
 } else {
  VAR_7 = FUNC_2 (VAR_0->block + VAR_4, VAR_0->blocksize - VAR_4,
   (const ut8 *) VAR_1, VAR_3);
  if (!VAR_7) {
   VAR_7 = FUNC_2 (VAR_0->block, FUNC_0 (VAR_0->blocksize, VAR_4),
    (const ut8 *) VAR_1, VAR_3);
  }
 }
 if (VAR_7) {
  VAR_0->print->cur = (int) (size_t) (VAR_7 - VAR_0->block);
  VAR_0->print->ocur = -1;
  FUNC_1 (VAR_0, 1);
 }
}
