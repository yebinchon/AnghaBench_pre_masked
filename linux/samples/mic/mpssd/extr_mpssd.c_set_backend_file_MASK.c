
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * backend_file; } ;
struct mic_info {int id; TYPE_1__ mic_virtblk; int name; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 int * FUNC_3 (scalar_t__) ;
 char* VAR_1 ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (char*,int,char*,char*,int) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*,char*,scalar_t__) ;
 char* VAR_2 ;

__attribute__((used)) static bool
FUNC_10(struct mic_info *VAR_3)
{
 FILE *VAR_4;
 char VAR_5[VAR_0], *VAR_6, *VAR_7, *VAR_8;

 FUNC_5(VAR_5, VAR_0, "%s/mpssd%03d.conf", VAR_1, VAR_3->id);
 VAR_4 = FUNC_2(VAR_5, "r");
 if (VAR_4 == ((void*)0))
  return 0;
 do {
  VAR_6 = FUNC_1(VAR_5, VAR_0, VAR_4);
  if (VAR_6 == ((void*)0))
   break;
  if (*VAR_6 == '#')
   continue;
  VAR_8 = FUNC_6(VAR_6, '\n');
  if (VAR_8)
   *VAR_8 = '\0';
 } while (FUNC_9(VAR_6, VAR_2, FUNC_8(VAR_2)) != 0);
 FUNC_0(VAR_4);
 if (VAR_6 == ((void*)0))
  return 0;
 VAR_7 = FUNC_6(VAR_6, '=');
 if (VAR_7 == ((void*)0))
  return 0;
 VAR_3->mic_virtblk.backend_file = FUNC_3(FUNC_8(VAR_7) + 1);
 if (VAR_3->mic_virtblk.backend_file == ((void*)0)) {
  FUNC_4("%s %d can't allocate memory\n", VAR_3->name, VAR_3->id);
  return 0;
 }
 FUNC_7(VAR_3->mic_virtblk.backend_file, VAR_7 + 1);
 return 1;
}
