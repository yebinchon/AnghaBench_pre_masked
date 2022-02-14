
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct gs_zstencil_buffer {int format; int buffer; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static bool FUNC_4(struct gs_zstencil_buffer *VAR_1, uint32_t VAR_2,
        uint32_t VAR_3)
{
 FUNC_0(1, &VAR_1->buffer);
 if (!FUNC_3("glGenRenderbuffers"))
  return 0;

 if (!FUNC_2(VAR_0, VAR_1->buffer))
  return 0;

 FUNC_1(VAR_0, VAR_1->format, VAR_2, VAR_3);
 if (!FUNC_3("glRenderbufferStorage"))
  return 0;

 FUNC_2(VAR_0, 0);
 return 1;
}
