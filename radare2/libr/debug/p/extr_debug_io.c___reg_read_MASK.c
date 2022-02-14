
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char ut8 ;
struct TYPE_4__ {char* (* system ) (int ,char*) ;int io; } ;
struct TYPE_5__ {TYPE_1__ iob; } ;
typedef TYPE_2__ RDebug ;


 int FUNC_0 (int,int) ;
 char* FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int ) ;
 char* FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char const*) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (int ,char*) ;

__attribute__((used)) static int FUNC_12(RDebug *VAR_0, int VAR_1, ut8 *VAR_2, int VAR_3) {
 char *VAR_4 = VAR_0->iob.system (VAR_0->iob.io, "dr8");
 if (!VAR_4) {
  const char *VAR_5 = FUNC_5 ();
  if (!VAR_5 || !*VAR_5) {
   FUNC_2 ("debug.io: Failed to get dr8 from io\n");
   return -1;
  }
  VAR_4 = FUNC_9 (VAR_5);
  FUNC_6 ();
 }
 ut8 *VAR_6 = FUNC_1 (1, FUNC_10 (VAR_4));
 if (!VAR_6) {
  FUNC_3 (VAR_4);
  return -1;
 }
 FUNC_8 ((char *)VAR_6);
 int VAR_7 = FUNC_7 (VAR_4, VAR_6);
 if (VAR_7 > 0) {
  FUNC_4 (VAR_2, VAR_6, FUNC_0 (VAR_3, VAR_7));
  FUNC_3 (VAR_6);
  FUNC_3 (VAR_4);
  return VAR_3;
 } else {

 }
 FUNC_3 (VAR_6);
 FUNC_3 (VAR_4);
 return -1;
}
