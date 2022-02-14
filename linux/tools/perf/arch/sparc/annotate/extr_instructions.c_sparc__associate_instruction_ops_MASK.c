
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ins_ops {int dummy; } ;
struct arch {int dummy; } ;


 int FUNC_0 (struct arch*,char const*,struct ins_ops*) ;
 struct ins_ops VAR_0 ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 struct ins_ops VAR_1 ;
 struct ins_ops VAR_2 ;
 struct ins_ops VAR_3 ;
 int FUNC_4 (char const*,char*) ;

__attribute__((used)) static struct ins_ops *FUNC_5(struct arch *VAR_4, const char *VAR_5)
{
 struct ins_ops *VAR_6 = ((void*)0);

 if (!FUNC_4(VAR_5, "call") ||
     !FUNC_4(VAR_5, "jmp") ||
     !FUNC_4(VAR_5, "jmpl")) {
  VAR_6 = &VAR_0;
 } else if (!FUNC_4(VAR_5, "ret") ||
     !FUNC_4(VAR_5, "retl") ||
     !FUNC_4(VAR_5, "return")) {
  VAR_6 = &VAR_3;
 } else if (!FUNC_4(VAR_5, "mov")) {
  VAR_6 = &VAR_2;
 } else {
  if (VAR_5[0] == 'c' &&
      (VAR_5[1] == 'w' || VAR_5[1] == 'x'))
   VAR_5 += 2;

  if (VAR_5[0] == 'b') {
   const char *VAR_7 = VAR_5 + 1;

   if (VAR_7[0] == 'r') {
    if (FUNC_3(VAR_7 + 1))
     VAR_6 = &VAR_1;
   } else if (FUNC_1(VAR_7)) {
    VAR_6 = &VAR_1;
   }
  } else if (VAR_5[0] == 'f' && VAR_5[1] == 'b') {
   if (FUNC_2(VAR_5 + 2))
    VAR_6 = &VAR_1;
  }
 }

 if (VAR_6)
  FUNC_0(VAR_4, VAR_5, VAR_6);

 return VAR_6;
}
