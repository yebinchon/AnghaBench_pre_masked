
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int num_bits; int code_buffer; scalar_t__ zbuffer; scalar_t__ zbuffer_end; scalar_t__ zout; scalar_t__ zout_end; } ;
typedef TYPE_1__ zbuf ;
typedef int stbi__uint8 ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_6(zbuf *VAR_0)
{
   stbi__uint8 VAR_1[4];
   int VAR_2,VAR_3,VAR_4;
   if (VAR_0->num_bits & 7)
      FUNC_5(VAR_0, VAR_0->num_bits & 7);

   VAR_4 = 0;
   while (VAR_0->num_bits > 0) {
      VAR_1[VAR_4++] = (stbi__uint8) (VAR_0->code_buffer & 255);
      VAR_0->code_buffer >>= 8;
      VAR_0->num_bits -= 8;
   }
   FUNC_0(VAR_0->num_bits == 0);

   while (VAR_4 < 4)
      VAR_1[VAR_4++] = (stbi__uint8) FUNC_4(VAR_0);
   VAR_2 = VAR_1[1] * 256 + VAR_1[0];
   VAR_3 = VAR_1[3] * 256 + VAR_1[2];
   if (VAR_3 != (VAR_2 ^ 0xffff)) return FUNC_1("zlib corrupt","Corrupt PNG");
   if (VAR_0->zbuffer + VAR_2 > VAR_0->zbuffer_end) return FUNC_1("read past buffer","Corrupt PNG");
   if (VAR_0->zout + VAR_2 > VAR_0->zout_end)
      if (!FUNC_2(VAR_0, VAR_2)) return 0;
   FUNC_3(VAR_0->zout, VAR_0->zbuffer, VAR_2);
   VAR_0->zbuffer += VAR_2;
   VAR_0->zout += VAR_2;
   return 1;
}
