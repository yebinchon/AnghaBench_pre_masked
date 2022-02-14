
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int err_to_str ;
typedef scalar_t__ GLenum ;
__attribute__((used)) static const char *FUNC_0(GLenum VAR_0)
{
 static const struct {
  GLenum error;
  const char *str;
 } VAR_1[] = {
  {
   134,
   "GL_INVALID_ENUM",
  },
  {
   131,
   "GL_INVALID_VALUE",
  },
  {
   132,
   "GL_INVALID_OPERATION",
  },
  {
   133,
   "GL_INVALID_FRAMEBUFFER_OPERATION",
  },
  {
   130,
   "GL_OUT_OF_MEMORY",
  },
  {
   128,
   "GL_STACK_UNDERFLOW",
  },
  {
   129,
   "GL_STACK_OVERFLOW",
  },
 };
 for (size_t VAR_2 = 0; VAR_2 < sizeof(VAR_1) / sizeof(*VAR_1); VAR_2++) {
  if (VAR_1[VAR_2].error == VAR_0)
   return VAR_1[VAR_2].str;
 }
 return "Unknown";
}
