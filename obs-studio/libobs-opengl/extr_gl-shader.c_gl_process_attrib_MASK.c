
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct shader_attrib {int * name; int index; int type; int member_0; } ;
struct gs_shader {int attribs; } ;
struct TYPE_2__ {scalar_t__ capacity; scalar_t__ len; int * array; } ;
struct gl_parser_attrib {TYPE_1__ name; int mapping; int input; } ;


 int FUNC_0 (int ,struct shader_attrib*) ;
 int FUNC_1 (int ,int *,int *) ;

__attribute__((used)) static inline bool FUNC_2(struct gs_shader *VAR_0,
         struct gl_parser_attrib *VAR_1)
{
 struct shader_attrib VAR_2 = {0};


 if (!VAR_1->input)
  return 1;

 FUNC_1(VAR_1->mapping, &VAR_2.type, &VAR_2.index);
 VAR_2.name = VAR_1->name.array;

 VAR_1->name.array = ((void*)0);
 VAR_1->name.len = 0;
 VAR_1->name.capacity = 0;

 FUNC_0(VAR_0->attribs, &VAR_2);
 return 1;
}
