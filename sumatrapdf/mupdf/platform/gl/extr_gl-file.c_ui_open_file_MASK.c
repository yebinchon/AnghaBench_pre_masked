
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* text; } ;
struct TYPE_8__ {size_t selected; int count; int list_dir; int curdir; TYPE_1__* files; TYPE_2__ input_dir; } ;
struct TYPE_7__ {scalar_t__ key; int * active; int focus; int gridsize; } ;
struct TYPE_5__ {char const* name; scalar_t__ is_dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 TYPE_4__ VAR_18 ;
 int FUNC_0 (char*,int,char*,int ,char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 TYPE_3__ VAR_19 ;
 scalar_t__ FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ,int) ;
 int FUNC_6 (int ,int ,int ,int,int) ;
 int FUNC_7 (int *,int,int ,int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,TYPE_1__*,char*,int) ;
 int FUNC_10 (int,int ,int,int,int) ;
 int FUNC_11 () ;
 int FUNC_12 () ;

int FUNC_13(char VAR_20[VAR_12])
{
 static int VAR_21 = 0;
 static int VAR_22 = -1;
 int VAR_23, VAR_24 = 0;

 FUNC_10(0, 0, 4, 4, 1);
 {
  FUNC_6(VAR_9, VAR_17, VAR_11, 0, 0);
  FUNC_10(150, 0, 0, 0, 0);
  {
   FUNC_6(VAR_14, VAR_16, VAR_11, 2, 2);
   FUNC_2();
   FUNC_6(VAR_1, VAR_16, VAR_11, 2, 2);
   if (FUNC_4("Cancel") || (!VAR_19.focus && VAR_19.key == VAR_8))
   {
    VAR_20[0] = 0;
    VAR_24 = 1;
   }
  }
  FUNC_11();

  FUNC_6(VAR_14, VAR_16, VAR_11, 2, 2);
  FUNC_10(0, VAR_19.gridsize, 0, 0, 0);
  {
   if (VAR_18.selected >= 0)
   {
    FUNC_6(VAR_13, VAR_10, VAR_3, 0, 0);
    if (FUNC_4("Open") || (!VAR_19.focus && VAR_19.key == VAR_7))
    {
     FUNC_0(VAR_20, VAR_12, "%s/%s", VAR_18.curdir, VAR_18.files[VAR_18.selected].name);
     VAR_24 = 1;
    }
    FUNC_12();
   }
   FUNC_6(VAR_0, VAR_16, VAR_3, 0, 0);
   if (FUNC_5(&VAR_18.input_dir, 0, 1) == VAR_15)
    FUNC_3(VAR_18.input_dir.text);
  }
  FUNC_11();

  FUNC_6(VAR_0, VAR_2, VAR_11, 2, 2);
  FUNC_7(&VAR_18.list_dir, VAR_18.count, 0, 0);
  for (VAR_23 = 0; VAR_23 < VAR_18.count; ++VAR_23)
  {
   const char *VAR_25 = VAR_18.files[VAR_23].name;
   char VAR_26[VAR_12];
   if (VAR_18.files[VAR_23].is_dir)
    FUNC_0(VAR_26, sizeof VAR_26, "%C %s", VAR_6, VAR_25);
   else
    FUNC_0(VAR_26, sizeof VAR_26, "%C %s", VAR_5, VAR_25);
   if (FUNC_9(&VAR_18.list_dir, &VAR_18.files[VAR_23], VAR_26, VAR_23==VAR_18.selected))
   {
    VAR_18.selected = VAR_23;
    if (VAR_18.files[VAR_23].is_dir)
    {
     FUNC_0(VAR_26, sizeof VAR_26, "%s/%s", VAR_18.curdir, VAR_25);
     FUNC_3(VAR_26);
     VAR_19.active = ((void*)0);
     VAR_22 = -1;
    }
    else
    {
     int VAR_27 = FUNC_1(VAR_4);
     if (VAR_23 == VAR_22 && VAR_27 < VAR_21 + 250)
     {
      FUNC_0(VAR_20, VAR_12, "%s/%s", VAR_18.curdir, VAR_25);
      VAR_24 = 1;
     }
     VAR_21 = VAR_27;
     VAR_22 = VAR_23;
    }
   }
  }
  FUNC_8(&VAR_18.list_dir);
 }
 FUNC_11();

 return VAR_24;
}
