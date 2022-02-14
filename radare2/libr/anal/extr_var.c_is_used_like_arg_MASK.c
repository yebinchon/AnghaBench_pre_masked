
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* cur; } ;
struct TYPE_11__ {int type; TYPE_2__** src; TYPE_2__* dst; } ;
struct TYPE_10__ {int memref; } ;
struct TYPE_9__ {char const* arch; } ;
typedef TYPE_2__ RAnalValue ;
typedef TYPE_3__ RAnalOp ;
typedef TYPE_4__ RAnal ;


 int VAR_0 ;





 int VAR_1 ;

 int FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*,TYPE_4__*,TYPE_3__*) ;

__attribute__((used)) static bool FUNC_2(const char *VAR_2, const char *VAR_3, const char *VAR_4, RAnalOp *VAR_5, RAnal *VAR_6) {

 RAnalValue *VAR_7 = VAR_5->dst;
 RAnalValue *VAR_8 = VAR_5->src[0];
 switch (VAR_5->type) {
 case 129:
  return 0;
 case 130:
  return (FUNC_1 (VAR_2, VAR_6, VAR_5)) || (VAR_4 && VAR_2 && !strcmp (VAR_4, VAR_2) && VAR_7->memref);
 case 133:
  if (VAR_4 && VAR_2 && !FUNC_0 (VAR_4, VAR_2)) {
   return 0;
  }
  if (FUNC_1 (VAR_2, VAR_6, VAR_5)) {
   return 1;
  }
  return 0;
 case 132:
 case 131:
  if (FUNC_1 (VAR_2, VAR_6, VAR_5)) {
   return 1;
  }
  if (VAR_4 && VAR_2 && !FUNC_0 (VAR_4, VAR_2)) {
   return 0;
  }
      return 0;
 case 128:
  if (VAR_3 && VAR_4 && !FUNC_0 (VAR_3, VAR_4) && !VAR_8->memref && !VAR_7->memref) {
   return 0;
  }

 default:
  if ((VAR_5->type == VAR_0 || VAR_5->type == VAR_1) && VAR_6->cur->arch && "arm" && !FUNC_0 (VAR_6->cur->arch, "arm")) {
   if (VAR_4 && VAR_2 && !FUNC_0 (VAR_4, VAR_2)) {
    return 0;
   }
   if (FUNC_1 (VAR_2, VAR_6, VAR_5)) {
    return 1;
   }
  }
  return ((VAR_4 && VAR_2 && !FUNC_0 (VAR_4, VAR_2)) || (FUNC_1 (VAR_2, VAR_6, VAR_5)));
 }
}
