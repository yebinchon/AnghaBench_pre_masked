
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct r_magic {int type; int str_flags; int str_range; } ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ RMagic ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*,char*,...) ;

__attribute__((used)) static int FUNC_1(RMagic *VAR_8, struct r_magic *VAR_9) {
 if ((VAR_8->flags & VAR_4) == 0) {
  return 0;
 }

 switch (VAR_9->type) {
 case 133:
 case 132:
  if (VAR_9->str_flags != 0) {
   FUNC_0(VAR_8,
       "no modifiers allowed for 16-bit strings\n");
   return -1;
  }
  break;
 case 128:
 case 131:
  if ((VAR_9->str_flags & VAR_3) != 0) {
   FUNC_0(VAR_8,
       "'/%c' only allowed on regex and search\n",
       VAR_2);
   return -1;
  }
  break;
 case 129:
  if (VAR_9->str_range == 0) {
   FUNC_0(VAR_8,
       "missing range; defaulting to %d\n",
                            VAR_7);
   VAR_9->str_range = VAR_7;
   return -1;
  }
  break;
 case 130:
  if ((VAR_9->str_flags & VAR_5) != 0) {
   FUNC_0(VAR_8, "'/%c' not allowed on regex\n",
       VAR_0);
   return -1;
  }
  if ((VAR_9->str_flags & VAR_6) != 0) {
   FUNC_0(VAR_8, "'/%c' not allowed on regex\n",
       VAR_1);
   return -1;
  }
  break;
 default:
  FUNC_0 (VAR_8, "coding error: m->type=%d\n",
      VAR_9->type);
  return -1;
 }
 return 0;
}
