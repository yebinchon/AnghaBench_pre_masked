
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {char* name; unsigned long offset; } ;
struct section {char* name; } ;


 struct symbol* FUNC_0 (struct section*,unsigned long) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,char*,char*,unsigned long) ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static inline char *FUNC_4(struct section *VAR_0, unsigned long VAR_1)
{
 struct symbol *VAR_2;
 char *VAR_3, *VAR_4;
 unsigned long VAR_5;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2) {
  VAR_3 = VAR_2->name;
  VAR_5 = VAR_1 - VAR_2->offset;
 } else {
  VAR_3 = VAR_0->name;
  VAR_5 = VAR_1;
 }

 VAR_4 = FUNC_1(FUNC_3(VAR_3) + 20);

 if (VAR_2)
  FUNC_2(VAR_4, "%s()+0x%lx", VAR_3, VAR_5);
 else
  FUNC_2(VAR_4, "%s+0x%lx", VAR_3, VAR_5);

 return VAR_4;
}
