
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fpo_data_list; } ;
typedef char SFPO_DATA_V2 ;
typedef TYPE_1__ SFPONewStream ;
typedef int R_STREAM_FILE ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,int,int*,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int*) ;

void FUNC_7(void *VAR_0, R_STREAM_FILE *VAR_1)
{
 int VAR_2;
 char *VAR_3 = 0, *VAR_4 = 0;
 int VAR_5 = 0, VAR_6 = 0;
 SFPO_DATA_V2 *VAR_7 = 0;
 SFPONewStream *VAR_8 = 0;

 FUNC_6 (VAR_1, &VAR_2);
 VAR_3 = (char *) FUNC_1 (VAR_2);
 if (!VAR_3) {
  return;
 }
 FUNC_5 (VAR_1, VAR_3);

 VAR_8 = (SFPONewStream *) VAR_0;
 VAR_8->fpo_data_list = FUNC_4 ();
 VAR_4 = VAR_3;
 while (VAR_6 < VAR_2) {
  VAR_7 = (SFPO_DATA_V2 *) FUNC_1 (sizeof(SFPO_DATA_V2));
  if (!VAR_7) {
   FUNC_0 (VAR_3);
   return;
  }
  VAR_5 = FUNC_2 (VAR_4, VAR_2, &VAR_6, VAR_7);
  VAR_4 += VAR_5;

  if (!VAR_5) {
   FUNC_0 (VAR_7);
   break;
  }

  FUNC_3 (VAR_8->fpo_data_list, VAR_7);
 }

 FUNC_0 (VAR_3);
}
