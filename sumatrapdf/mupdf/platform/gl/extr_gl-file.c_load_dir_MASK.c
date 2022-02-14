
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dirent {char* d_name; } ;
struct TYPE_5__ {char* curdir; int selected; size_t count; TYPE_1__* files; scalar_t__ (* filter ) (char*) ;int input_dir; } ;
struct TYPE_4__ {int is_dir; int name; } ;
typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int,char*,char*,char*) ;
 int FUNC_3 (int ,char*,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int * FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*,size_t,int,int ) ;
 struct dirent* FUNC_7 (int *) ;
 int FUNC_8 (char const*,char*) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 (char*) ;
 int FUNC_11 (int *,char*) ;

__attribute__((used)) static void FUNC_12(const char *VAR_5)
{
 char VAR_6[VAR_1];
 DIR *VAR_7;
 struct dirent *VAR_8;

 FUNC_8(VAR_5, VAR_4.curdir);
 if (!FUNC_1(VAR_3, VAR_4.curdir))
  return;

 FUNC_11(&VAR_4.input_dir, VAR_4.curdir);

 VAR_4.selected = -1;
 VAR_4.count = 0;
 VAR_7 = FUNC_5(VAR_4.curdir);
 if (!VAR_7)
 {
  VAR_4.files[VAR_4.count].is_dir = 1;
  FUNC_3(VAR_4.files[VAR_4.count].name, "..", VAR_0);
  ++VAR_4.count;
 }
 else
 {
  while ((VAR_8 = FUNC_7(VAR_7)) && VAR_4.count < (int)FUNC_4(VAR_4.files))
  {

   if (VAR_8->d_name[0] == '.' && FUNC_9(VAR_8->d_name, ".") && FUNC_9(VAR_8->d_name, ".."))
    continue;
   FUNC_2(VAR_6, sizeof VAR_6, "%s/%s", VAR_4.curdir, VAR_8->d_name);
   VAR_4.files[VAR_4.count].is_dir = FUNC_1(VAR_3, VAR_6);
   if (VAR_4.files[VAR_4.count].is_dir || !VAR_4.filter || VAR_4.filter(VAR_6))
   {
    FUNC_3(VAR_4.files[VAR_4.count].name, VAR_8->d_name, VAR_0);
    ++VAR_4.count;
   }
  }
  FUNC_0(VAR_7);
 }

 FUNC_6(VAR_4.files, VAR_4.count, sizeof VAR_4.files[0], VAR_2);
}
