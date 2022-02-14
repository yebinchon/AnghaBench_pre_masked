
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ep_param {char* type; char* name; int is_property; int is_const; int is_uniform; int is_texture; int written; int writeorder; int annotations; int properties; int default_val; scalar_t__ array_count; } ;


 scalar_t__ FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct ep_param *VAR_0, char *VAR_1, char *VAR_2,
     bool VAR_3, bool VAR_4,
     bool VAR_5)
{
 VAR_0->type = VAR_1;
 VAR_0->name = VAR_2;
 VAR_0->is_property = VAR_3;
 VAR_0->is_const = VAR_4;
 VAR_0->is_uniform = VAR_5;
 VAR_0->is_texture = (FUNC_0(VAR_0->type, "texture", 7) == 0);
 VAR_0->written = 0;
 VAR_0->writeorder = 0;
 VAR_0->array_count = 0;
 FUNC_1(VAR_0->default_val);
 FUNC_1(VAR_0->properties);
 FUNC_1(VAR_0->annotations);
}
