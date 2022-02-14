
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* text; } ;
struct TYPE_9__ {int count; int selected; int list_dir; TYPE_2__ input_file; int curdir; TYPE_1__* files; TYPE_2__ input_dir; } ;
struct TYPE_8__ {scalar_t__ key; int * active; int gridsize; int focus; } ;
struct TYPE_6__ {char* name; scalar_t__ is_dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int) ;
 TYPE_5__ VAR_16 ;
 int FUNC_1 (char*,int,char*,int ,char const*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 TYPE_4__ VAR_17 ;
 scalar_t__ FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ,int) ;
 int FUNC_6 (TYPE_2__*,char const*) ;
 int FUNC_7 (int ,int ,int ,int,int) ;
 int FUNC_8 (int *,int,int ,int ) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,TYPE_1__*,char*,int) ;
 int FUNC_11 (int,int ,int,int,int) ;
 int FUNC_12 () ;
 int FUNC_13 () ;

int FUNC_14(char VAR_18[VAR_10], void (*VAR_19)(void))
{
 int VAR_20, VAR_21 = 0;

 FUNC_11(0, 0, 4, 4, 1);
 {
  FUNC_7(VAR_7, VAR_15, VAR_9, 0, 0);
  FUNC_11(150, 0, 0, 0, 0);
  {
   FUNC_7(VAR_12, VAR_14, VAR_9, 2, 2);
   FUNC_2();
   if (VAR_19)
   {
    FUNC_13();
    VAR_19();
   }
   FUNC_7(VAR_1, VAR_14, VAR_9, 2, 2);
   if (FUNC_4("Cancel") || (!VAR_17.focus && VAR_17.key == VAR_6))
   {
    VAR_18[0] = 0;
    VAR_21 = 1;
   }
  }
  FUNC_12();

  FUNC_7(VAR_12, VAR_14, VAR_9, 2, 2);
  if (FUNC_5(&VAR_16.input_dir, 0, 1) == VAR_13)
   FUNC_3(VAR_16.input_dir.text);

  FUNC_7(VAR_12, VAR_14, VAR_9, 2, 2);
  FUNC_11(0, VAR_17.gridsize, 0, 0, 0);
  {
   FUNC_7(VAR_11, VAR_8, VAR_3, 0, 0);
   if (FUNC_4("Save"))
   {
    FUNC_1(VAR_18, VAR_10, "%s/%s", VAR_16.curdir, VAR_16.input_file.text);
    VAR_21 = 1;
   }
   FUNC_13();
   if (FUNC_4("\xe2\x9e\x95"))
    FUNC_0(1);
   if (FUNC_4("\xe2\x9e\x96"))
    FUNC_0(-1);
   FUNC_13();
   FUNC_7(VAR_0, VAR_14, VAR_3, 0, 0);
   FUNC_5(&VAR_16.input_file, 0, 1);
  }
  FUNC_12();

  FUNC_7(VAR_0, VAR_2, VAR_9, 2, 2);
  FUNC_8(&VAR_16.list_dir, VAR_16.count, 0, 0);
  for (VAR_20 = 0; VAR_20 < VAR_16.count; ++VAR_20)
  {
   const char *VAR_22 = VAR_16.files[VAR_20].name;
   char VAR_23[VAR_10];
   if (VAR_16.files[VAR_20].is_dir)
    FUNC_1(VAR_23, sizeof VAR_23, "%C %s", VAR_5, VAR_22);
   else
    FUNC_1(VAR_23, sizeof VAR_23, "%C %s", VAR_4, VAR_22);
   if (FUNC_10(&VAR_16.list_dir, &VAR_16.files[VAR_20], VAR_23, VAR_20==VAR_16.selected))
   {
    VAR_16.selected = VAR_20;
    if (VAR_16.files[VAR_20].is_dir)
    {
     FUNC_1(VAR_23, sizeof VAR_23, "%s/%s", VAR_16.curdir, VAR_22);
     FUNC_3(VAR_23);
     VAR_17.active = ((void*)0);
    }
    else
    {
     FUNC_6(&VAR_16.input_file, VAR_22);
    }
   }
  }
  FUNC_9(&VAR_16.list_dir);
 }
 FUNC_12();

 return VAR_21;
}
