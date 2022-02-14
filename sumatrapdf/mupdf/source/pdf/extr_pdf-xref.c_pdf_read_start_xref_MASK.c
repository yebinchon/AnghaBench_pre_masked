
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int startxref; int file; scalar_t__ file_size; } ;
typedef TYPE_1__ pdf_document ;
typedef scalar_t__ int64_t ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 size_t FUNC_1 (int *,int ,unsigned char*,int) ;
 int FUNC_2 (int *,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,char*) ;
 scalar_t__ FUNC_5 (unsigned char) ;
 scalar_t__ FUNC_6 (unsigned char) ;
 scalar_t__ FUNC_7 (unsigned char*,char*,int) ;

__attribute__((used)) static void
FUNC_8(fz_context *VAR_4, pdf_document *VAR_5)
{
 unsigned char VAR_6[1024];
 size_t VAR_7, VAR_8;
 int64_t VAR_9;

 FUNC_2(VAR_4, VAR_5->file, 0, VAR_2);

 VAR_5->file_size = FUNC_3(VAR_4, VAR_5->file);

 VAR_9 = FUNC_0(0, VAR_5->file_size - (int64_t)sizeof VAR_6);
 FUNC_2(VAR_4, VAR_5->file, VAR_9, VAR_3);

 VAR_8 = FUNC_1(VAR_4, VAR_5->file, VAR_6, sizeof VAR_6);
 if (VAR_8 < 9)
  FUNC_4(VAR_4, VAR_0, "cannot find startxref");

 VAR_7 = VAR_8 - 9;
 do
 {
  if (FUNC_7(VAR_6 + VAR_7, "startxref", 9) == 0)
  {
   VAR_7 += 9;
   while (VAR_7 < VAR_8 && FUNC_6(VAR_6[VAR_7]))
    VAR_7 ++;
   VAR_5->startxref = 0;
   while (VAR_7 < VAR_8 && FUNC_5(VAR_6[VAR_7]))
   {
    if (VAR_5->startxref >= VAR_1/10)
     FUNC_4(VAR_4, VAR_0, "startxref too large");
    VAR_5->startxref = VAR_5->startxref * 10 + (VAR_6[VAR_7++] - '0');
   }
   if (VAR_5->startxref != 0)
    return;
   break;
  }
 } while (VAR_7-- > 0);

 FUNC_4(VAR_4, VAR_0, "cannot find startxref");
}
