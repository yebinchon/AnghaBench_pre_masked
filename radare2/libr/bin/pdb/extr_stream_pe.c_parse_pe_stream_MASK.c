
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sections_hdrs; } ;
typedef TYPE_1__ SPEStream ;
typedef int SIMAGE_SECTION_HEADER ;
typedef int R_STREAM_FILE ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int*) ;

void FUNC_7(void *VAR_0, R_STREAM_FILE *VAR_1)
{
 int VAR_2 = 0;
 char *VAR_3 = 0, *VAR_4 = 0;
 int VAR_5 = 0;
 SIMAGE_SECTION_HEADER *VAR_6 = 0;
 SPEStream *VAR_7 = (SPEStream *) VAR_0;
 int VAR_8 =0;

 FUNC_6 (VAR_1, &VAR_2);
 VAR_3 = (char *) FUNC_1 (VAR_2);
 if (!VAR_3) {
  return;
 }
 FUNC_5 (VAR_1, VAR_3);

 VAR_8 = sizeof (SIMAGE_SECTION_HEADER);
 VAR_4 = VAR_3;
 VAR_7->sections_hdrs = FUNC_4 ();
 while (VAR_5 < VAR_2) {
  VAR_6 = (SIMAGE_SECTION_HEADER *) FUNC_1 (VAR_8);
  if (!VAR_6) {
   break;
  }
  FUNC_2 (VAR_6, VAR_4, VAR_8);
  VAR_4 += VAR_8;
  FUNC_3 (VAR_7->sections_hdrs, VAR_6);
  VAR_5 += VAR_8;
 }

 FUNC_0 (VAR_3);
}
