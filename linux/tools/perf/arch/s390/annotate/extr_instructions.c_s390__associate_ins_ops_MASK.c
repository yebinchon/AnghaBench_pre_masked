
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ins_ops {int dummy; } ;
struct arch {int dummy; } ;


 int FUNC_0 (struct arch*,char const*,struct ins_ops*) ;
 struct ins_ops VAR_0 ;
 struct ins_ops VAR_1 ;
 struct ins_ops VAR_2 ;
 struct ins_ops VAR_3 ;
 scalar_t__ FUNC_1 (char const*,char) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (char const*,char*,int) ;

__attribute__((used)) static struct ins_ops *FUNC_4(struct arch *VAR_4, const char *VAR_5)
{
 struct ins_ops *VAR_6 = ((void*)0);


 if (FUNC_1(VAR_5, 'j') ||
     !FUNC_3(VAR_5, "bct", 3) ||
     !FUNC_3(VAR_5, "br", 2))
  VAR_6 = &VAR_0;

 if (!FUNC_2(VAR_5, "bras") ||
     !FUNC_2(VAR_5, "brasl") ||
     !FUNC_2(VAR_5, "basr"))
  VAR_6 = &VAR_2;
 if (!FUNC_2(VAR_5, "br"))
  VAR_6 = &VAR_1;

 if (!FUNC_2(VAR_5, "lrl") ||
     !FUNC_2(VAR_5, "lgrl") ||
     !FUNC_2(VAR_5, "lgfrl") ||
     !FUNC_2(VAR_5, "llgfrl") ||
     !FUNC_2(VAR_5, "strl") ||
     !FUNC_2(VAR_5, "stgrl"))
  VAR_6 = &VAR_3;

 if (VAR_6)
  FUNC_0(VAR_4, VAR_5, VAR_6);
 return VAR_6;
}
