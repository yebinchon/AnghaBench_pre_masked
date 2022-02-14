
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t num; struct gl_parser_attrib* array; } ;
struct gl_shader_parser {char* input_prefix; char* output_prefix; int gl_string; TYPE_1__ attribs; } ;
struct TYPE_4__ {int array; } ;
struct gl_parser_attrib {TYPE_2__ name; scalar_t__ input; } ;
struct dstr {int array; int member_0; } ;


 int FUNC_0 (TYPE_2__*,struct dstr*) ;
 int FUNC_1 (struct dstr*,char*,char const*,unsigned int) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct gl_shader_parser *VAR_0)
{
 size_t VAR_1 = 0, VAR_2 = 0, VAR_3 = 0;

 for (VAR_1 = 0; VAR_1 < VAR_0->attribs.num; VAR_1++) {
  struct gl_parser_attrib *VAR_4 = VAR_0->attribs.array + VAR_1;
  struct dstr VAR_5 = {0};
  const char *VAR_6;
  size_t VAR_7;

  if (VAR_4->input) {
   VAR_6 = VAR_0->input_prefix;
   VAR_7 = VAR_2++;
  } else {
   VAR_6 = VAR_0->output_prefix;
   VAR_7 = VAR_3++;
  }

  FUNC_1(&VAR_5, "%s%u", VAR_6, (unsigned int)VAR_7);
  FUNC_2(&VAR_0->gl_string, VAR_4->name.array,
        VAR_5.array);
  FUNC_0(&VAR_4->name, &VAR_5);
 }
}
