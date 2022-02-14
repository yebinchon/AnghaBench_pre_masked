
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int out; } ;
typedef TYPE_1__ json_writer_t ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char const,int ) ;

__attribute__((used)) static void FUNC_2(json_writer_t *VAR_0, const char *VAR_1)
{
 FUNC_1('"', VAR_0->out);
 for (; *VAR_1; ++VAR_1)
  switch (*VAR_1) {
  case '\t':
   FUNC_0("\\t", VAR_0->out);
   break;
  case '\n':
   FUNC_0("\\n", VAR_0->out);
   break;
  case '\r':
   FUNC_0("\\r", VAR_0->out);
   break;
  case '\f':
   FUNC_0("\\f", VAR_0->out);
   break;
  case '\b':
   FUNC_0("\\b", VAR_0->out);
   break;
  case '\\':
   FUNC_0("\\n", VAR_0->out);
   break;
  case '"':
   FUNC_0("\\\"", VAR_0->out);
   break;
  case '\'':
   FUNC_0("\\\'", VAR_0->out);
   break;
  default:
   FUNC_1(*VAR_1, VAR_0->out);
  }
 FUNC_1('"', VAR_0->out);
}
