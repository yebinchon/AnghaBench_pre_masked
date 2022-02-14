
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t GLuint ;
typedef scalar_t__ GLubyte ;



void FUNC_0( GLubyte *VAR_0, GLuint VAR_1 )
{
   register GLuint VAR_2, VAR_3, VAR_4;

   for (VAR_2=0;VAR_2<VAR_1;VAR_2++) {
      VAR_4 = (GLuint) VAR_0[VAR_2];
      VAR_3 = ((VAR_4 & 0x01) << 7) |
   ((VAR_4 & 0x02) << 5) |
   ((VAR_4 & 0x04) << 3) |
   ((VAR_4 & 0x08) << 1) |
   ((VAR_4 & 0x10) >> 1) |
   ((VAR_4 & 0x20) >> 3) |
   ((VAR_4 & 0x40) >> 5) |
   ((VAR_4 & 0x80) >> 7);
      VAR_0[VAR_2] = (GLubyte) VAR_3;
   }
}
