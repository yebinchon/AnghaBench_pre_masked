
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {unsigned int weak; int is_static; struct symbol* next; int name; } ;


 struct symbol* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct symbol*,int ,int) ;
 int FUNC_3 (int ,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static struct symbol *FUNC_5(const char *VAR_0, unsigned int VAR_1,
       struct symbol *VAR_2)
{
 struct symbol *VAR_3 = FUNC_0(FUNC_1(sizeof(*VAR_3) + FUNC_4(VAR_0) + 1));

 FUNC_2(VAR_3, 0, sizeof(*VAR_3));
 FUNC_3(VAR_3->name, VAR_0);
 VAR_3->weak = VAR_1;
 VAR_3->next = VAR_2;
 VAR_3->is_static = 1;
 return VAR_3;
}
