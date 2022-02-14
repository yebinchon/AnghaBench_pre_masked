
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_6__ {int * file; } ;
struct TYPE_7__ {int count; TYPE_3__* entries; TYPE_1__ super; } ;
typedef TYPE_2__ fz_tar_archive ;
typedef int fz_stream ;
typedef int fz_context ;
struct TYPE_8__ {int offset; int size; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int *,int *,unsigned char*,int) ;
 char FUNC_1 (int *,int *) ;
 TYPE_3__* FUNC_2 (int *,TYPE_3__*,int,int ) ;
 int FUNC_3 (int *,int *,int,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int ,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_10(fz_context *VAR_4, fz_tar_archive *VAR_5)
{
 fz_stream *VAR_6 = VAR_5->super.file;
 char VAR_7[100];
 char VAR_8[12];
 char VAR_9;
 int64_t VAR_10, VAR_11, VAR_12;
 size_t VAR_13;

 VAR_5->count = 0;

 FUNC_3(VAR_4, VAR_6, 0, VAR_2);

 while (1)
 {
  VAR_10 = FUNC_5(VAR_4, VAR_6);
  VAR_13 = FUNC_0(VAR_4, VAR_6, (unsigned char *) VAR_7, FUNC_7(VAR_7));
  if (VAR_13 < FUNC_7(VAR_7))
   FUNC_6(VAR_4, VAR_0, "premature end of data in tar entry name");
  VAR_7[FUNC_7(VAR_7) - 1] = '\0';

  if (FUNC_9(VAR_7) == 0)
   break;

  FUNC_3(VAR_4, VAR_6, 24, 1);
  VAR_13 = FUNC_0(VAR_4, VAR_6, (unsigned char *) VAR_8, FUNC_7(VAR_8));
  if (VAR_13 < FUNC_7(VAR_8))
   FUNC_6(VAR_4, VAR_0, "premature end of data in tar entry size");
  VAR_8[FUNC_7(VAR_8) - 1] = '\0';
  VAR_12 = FUNC_8(VAR_8);
  if (VAR_12 > VAR_1)
   FUNC_6(VAR_4, VAR_0, "tar archive entry too large");

  FUNC_3(VAR_4, VAR_6, 20, 1);
  VAR_9 = FUNC_1(VAR_4, VAR_6);

  FUNC_3(VAR_4, VAR_6, 355, 1);
  VAR_11 = (VAR_12 + 511) / 512;
  FUNC_3(VAR_4, VAR_6, VAR_11 * 512, 1);

  if (VAR_9 != '0' && VAR_9 != '\0')
   continue;

  VAR_5->entries = FUNC_2(VAR_4, VAR_5->entries, VAR_5->count + 1, VAR_3);

  VAR_5->entries[VAR_5->count].name = FUNC_4(VAR_4, VAR_7);
  VAR_5->entries[VAR_5->count].offset = VAR_10;
  VAR_5->entries[VAR_5->count].size = VAR_12;

  VAR_5->count++;
 }
}
