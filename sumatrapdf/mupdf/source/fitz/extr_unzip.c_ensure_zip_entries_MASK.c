
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {int * file; } ;
struct TYPE_6__ {TYPE_1__ super; } ;
typedef TYPE_2__ fz_zip_archive ;
typedef int fz_stream ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (size_t,int) ;
 size_t FUNC_1 (int *,int *,unsigned char*,int) ;
 int FUNC_2 (int *,int *,int ,int ) ;
 size_t FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (unsigned char*,char*,int) ;
 int FUNC_6 (int *,TYPE_2__*,size_t) ;

__attribute__((used)) static void FUNC_7(fz_context *VAR_2, fz_zip_archive *VAR_3)
{
 fz_stream *VAR_4 = VAR_3->super.file;
 unsigned char VAR_5[512];
 size_t VAR_6, VAR_7, VAR_8;
 size_t VAR_9, VAR_10;

 FUNC_2(VAR_2, VAR_4, 0, VAR_1);
 VAR_6 = FUNC_3(VAR_2, VAR_4);

 VAR_8 = FUNC_0(VAR_6, 0xFFFF + sizeof VAR_5);
 VAR_7 = FUNC_0(VAR_8, sizeof VAR_5);

 while (VAR_7 <= VAR_8)
 {
  FUNC_2(VAR_2, VAR_4, (int64_t)(VAR_6 - VAR_7), 0);
  VAR_10 = FUNC_1(VAR_2, VAR_4, VAR_5, sizeof VAR_5);
  if (VAR_10 < 4)
   break;
  for (VAR_9 = VAR_10 - 4; VAR_9 > 0; VAR_9--)
   if (!FUNC_5(VAR_5 + VAR_9, "PK\5\6", 4))
   {
    FUNC_6(VAR_2, VAR_3, VAR_6 - VAR_7 + VAR_9);
    return;
   }
  VAR_7 += sizeof VAR_5 - 4;
 }

 FUNC_4(VAR_2, VAR_0, "cannot find end of central directory");
}
