
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_4__ {int offset; int num; } ;
typedef TYPE_1__ RCore ;
typedef int PJ ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,char*) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (int ,char const*) ;

__attribute__((used)) static void FUNC_10(RCore *VAR_12, const char *VAR_13, int VAR_14) {
 ut64 VAR_15, VAR_16;
 if (!VAR_13 || !*VAR_13) {
  VAR_15 = VAR_12->offset;
 } else {
  VAR_15 = FUNC_9 (VAR_12->num, VAR_13);
 }
 VAR_16 = FUNC_8 (VAR_12, VAR_15);
 switch (VAR_14) {
 case 'j': {
  PJ *VAR_17 = FUNC_3 ();
  if (!VAR_17) {
   return;
  }
  FUNC_4 (VAR_17);
  if (VAR_16 & VAR_6)
   FUNC_2 (VAR_17, "program", "true");
  if (VAR_16 & VAR_5)
   FUNC_2 (VAR_17, "library", "true");
  if (VAR_16 & VAR_1)
   FUNC_2 (VAR_17, "exec", "true");
  if (VAR_16 & VAR_7)
   FUNC_2 (VAR_17, "read", "true");
  if (VAR_16 & VAR_11)
   FUNC_2 (VAR_17, "write", "true");
  if (VAR_16 & VAR_2)
   FUNC_2 (VAR_17, "flag", "true");
  if (VAR_16 & VAR_3)
   FUNC_2 (VAR_17, "func", "true");
  if (VAR_16 & VAR_10)
   FUNC_2 (VAR_17, "stack", "true");
  if (VAR_16 & VAR_4)
   FUNC_2 (VAR_17, "heap", "true");
  if (VAR_16 & VAR_8)
   FUNC_2 (VAR_17, "reg", "true");
  if (VAR_16 & VAR_0)
   FUNC_2 (VAR_17, "ascii", "true");
  if (VAR_16 & VAR_9)
   FUNC_2 (VAR_17, "sequence", "true");
  FUNC_0 (VAR_17);
  FUNC_7 (FUNC_5 (VAR_17));
  FUNC_1 (VAR_17);
  }
  break;
 default:
  if (VAR_16 & VAR_6)
   FUNC_6 ("program\n");
  if (VAR_16 & VAR_5)
   FUNC_6 ("library\n");
  if (VAR_16 & VAR_1)
   FUNC_6 ("exec\n");
  if (VAR_16 & VAR_7)
   FUNC_6 ("read\n");
  if (VAR_16 & VAR_11)
   FUNC_6 ("write\n");
  if (VAR_16 & VAR_2)
   FUNC_6 ("flag\n");
  if (VAR_16 & VAR_3)
   FUNC_6 ("func\n");
  if (VAR_16 & VAR_10)
   FUNC_6 ("stack\n");
  if (VAR_16 & VAR_4)
   FUNC_6 ("heap\n");
  if (VAR_16 & VAR_8)
   FUNC_6 ("reg\n");
  if (VAR_16 & VAR_0)
   FUNC_6 ("ascii\n");
  if (VAR_16 & VAR_9)
   FUNC_6 ("sequence\n");
  break;
 }
}
