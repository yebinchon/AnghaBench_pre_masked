
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
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char*,int) ;

__attribute__((used)) static struct ins_ops *FUNC_4(struct arch *VAR_3, const char *VAR_4)
{
 int VAR_5;
 struct ins_ops *VAR_6;





 if (VAR_4[0] != 'b' ||
     !FUNC_3(VAR_4, "bcd", 3) ||
     !FUNC_3(VAR_4, "brinc", 5) ||
     !FUNC_3(VAR_4, "bper", 4))
  return ((void*)0);

 VAR_6 = &VAR_1;

 VAR_5 = FUNC_2(VAR_4) - 1;
 if (VAR_5 < 0)
  return ((void*)0);


 if (VAR_4[VAR_5] == '+' || VAR_4[VAR_5] == '-')
  VAR_5--;

 if (VAR_4[VAR_5] == 'l' || (VAR_4[VAR_5] == 'a' && VAR_4[VAR_5-1] == 'l')) {






  if (FUNC_1(VAR_4, "bnl") && FUNC_1(VAR_4, "bnl+") &&
      FUNC_1(VAR_4, "bnl-") && FUNC_1(VAR_4, "bnla") &&
      FUNC_1(VAR_4, "bnla+") && FUNC_1(VAR_4, "bnla-"))
   VAR_6 = &VAR_0;
 }
 if (VAR_4[VAR_5] == 'r' && VAR_4[VAR_5-1] == 'l')




  VAR_6 = &VAR_2;

 FUNC_0(VAR_3, VAR_4, VAR_6);
 return VAR_6;
}
