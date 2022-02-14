
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
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static struct ins_ops *FUNC_2(struct arch *VAR_3,
            const char *VAR_4)
{
 struct ins_ops *VAR_5 = ((void*)0);


 if (!FUNC_1(VAR_4, "bt") ||
     !FUNC_1(VAR_4, "bf") ||
     !FUNC_1(VAR_4, "bez") ||
     !FUNC_1(VAR_4, "bnez") ||
     !FUNC_1(VAR_4, "bnezad") ||
     !FUNC_1(VAR_4, "bhsz") ||
     !FUNC_1(VAR_4, "bhz") ||
     !FUNC_1(VAR_4, "blsz") ||
     !FUNC_1(VAR_4, "blz") ||
     !FUNC_1(VAR_4, "br") ||
     !FUNC_1(VAR_4, "jmpi") ||
     !FUNC_1(VAR_4, "jmp"))
  VAR_5 = &VAR_1;


 if (!FUNC_1(VAR_4, "bsr") ||
     !FUNC_1(VAR_4, "jsri") ||
     !FUNC_1(VAR_4, "jsr"))
  VAR_5 = &VAR_0;


 if (!FUNC_1(VAR_4, "rts"))
  VAR_5 = &VAR_2;

 if (VAR_5)
  FUNC_0(VAR_3, VAR_4, VAR_5);
 return VAR_5;
}
