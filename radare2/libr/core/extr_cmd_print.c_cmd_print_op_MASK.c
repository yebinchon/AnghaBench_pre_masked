
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_5__ {int blocksize; int offset; int print; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int * FUNC_2 (TYPE_1__*,char const*,char const) ;
 int FUNC_3 (int ,int ,int *,int ,int,int,int) ;

__attribute__((used)) static void FUNC_4(RCore *VAR_1, const char *VAR_2) {
 ut8 *VAR_3;
 if (!VAR_2[0])
  return;
 switch (VAR_2[1]) {
 case 'a':
 case 's':
 case 'A':
 case 'x':
 case 'r':
 case 'l':
 case 'm':
 case 'd':
 case 'o':
 case '2':
 case '4':
  if (VAR_2[2]) {
   VAR_3 = FUNC_2 (VAR_1, VAR_2+3, VAR_2[1]);
  } else {
   VAR_3 = FUNC_2 (VAR_1, ((void*)0), VAR_2[1]);
  }
  break;
 case 'n':
  VAR_3 = FUNC_2 (VAR_1, "ff", 'x');
  break;
 case '\0':
 case '?':
 default:
  FUNC_1 (VAR_1, VAR_0);
  return;
 }
 if (VAR_3) {
  FUNC_3(VAR_1->print, VAR_1->offset, VAR_3,
   VAR_1->blocksize, 16, 1, 1);
  FUNC_0 (VAR_3);
 }
}
