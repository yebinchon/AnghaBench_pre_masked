
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; } ;
struct text_node {TYPE_2__* leaf; TYPE_1__ str; } ;
struct TYPE_4__ {char* value; } ;


 struct text_node* FUNC_0 (struct text_node*,char const*) ;

__attribute__((used)) static inline bool FUNC_1(const char *VAR_0, const char **VAR_1,
        struct text_node *VAR_2)
{
 struct text_node *VAR_3;
 char VAR_4;

 if (!VAR_2)
  return 0;

 VAR_3 = FUNC_0(VAR_2, VAR_0);
 if (!VAR_3)
  return 0;

 VAR_0 += VAR_3->str.len;
 VAR_4 = *VAR_0;
 if (VAR_4)
  return FUNC_1(VAR_0, VAR_1, VAR_3);

 if (!VAR_3->leaf)
  return 0;

 *VAR_1 = VAR_3->leaf->value;
 return 1;
}
