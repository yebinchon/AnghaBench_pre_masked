
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mic_info {int id; scalar_t__ name; struct mic_info* next; } ;
struct dirent {int * d_name; } ;
typedef int DIR ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct mic_info* FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 struct mic_info VAR_1 ;
 int FUNC_4 (char*,scalar_t__,int ) ;
 int * FUNC_5 (int ) ;
 struct dirent* FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__,int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,char*,int) ;

__attribute__((used)) static int
FUNC_10(void)
{
 struct mic_info *VAR_2 = &VAR_1;
 struct dirent *VAR_3;
 DIR *VAR_4;
 int VAR_5 = 0;

 VAR_4 = FUNC_5(VAR_0);
 if (!VAR_4)
  return 0;

 while ((VAR_3 = FUNC_6(VAR_4)) != ((void*)0)) {
  if (!FUNC_9(VAR_3->d_name, "mic", 3)) {
   VAR_2->next = FUNC_1(1, sizeof(struct mic_info));
   if (VAR_2->next) {
    VAR_2 = VAR_2->next;
    VAR_2->id = FUNC_0(&VAR_3->d_name[3]);
    VAR_2->name = FUNC_3(FUNC_8(VAR_3->d_name) + 16);
    if (VAR_2->name)
     FUNC_7(VAR_2->name, VAR_3->d_name);
    FUNC_4("MIC name %s id %d\n", VAR_2->name,
     VAR_2->id);
    VAR_5++;
   }
  }
 }

 FUNC_2(VAR_4);
 return VAR_5;
}
