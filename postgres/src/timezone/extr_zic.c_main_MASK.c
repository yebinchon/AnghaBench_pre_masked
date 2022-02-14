
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ptrdiff_t ;
struct TYPE_5__ {char* l_filename; int l_linenum; char* l_from; char* l_to; } ;
struct TYPE_4__ {int * z_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_9 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int *,int *) ;
 char* VAR_10 ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (char*,...) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,char*,...) ;
 int FUNC_12 (int,char**,char*) ;
 int FUNC_13 (char*) ;
 char* VAR_12 ;
 char* VAR_13 ;
 TYPE_3__* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 char* VAR_18 ;
 int VAR_19 ;
 int FUNC_14 (TYPE_1__*,int) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_15 (char*,char*) ;
 char* VAR_22 ;
 char* VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ FUNC_16 (char*,char*) ;
 void* FUNC_17 (char*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (char*) ;
 char* VAR_26 ;
 int FUNC_20 (int) ;
 int FUNC_21 (int ,int) ;
 int FUNC_22 (char*) ;
 scalar_t__ VAR_27 ;
 char* VAR_28 ;
 int VAR_29 ;
 TYPE_1__* VAR_30 ;

int
FUNC_23(int VAR_31, char **VAR_32)
{
 int VAR_33,
    VAR_34;
 ptrdiff_t VAR_35,
    VAR_36;
 bool VAR_37 = 0;


 FUNC_20(FUNC_20(VAR_4 | VAR_5) | (VAR_4 | VAR_5));

 VAR_22 = VAR_32[0];
 if (FUNC_0(VAR_29) <64)
 {
  FUNC_11(VAR_24, "%s: %s\n", VAR_22,
    FUNC_1("wild compilation-time specification of zic_t"));
  return VAR_1;
 }
 for (VAR_34 = 1; VAR_34 < VAR_31; VAR_34++)
  if (FUNC_16(VAR_32[VAR_34], "--version") == 0)
  {
   FUNC_15("zic %s\n", VAR_3);
   FUNC_5(VAR_25, ((void*)0), ((void*)0));
   return VAR_2;
  }
  else if (FUNC_16(VAR_32[VAR_34], "--help") == 0)
  {
   FUNC_21(VAR_25, VAR_2);
  }
 while ((VAR_33 = FUNC_12(VAR_31, VAR_32, "b:d:l:L:p:Pr:st:vy:")) != VAR_0 && VAR_33 != -1)
  switch (VAR_33)
  {
   default:
    FUNC_21(VAR_24, VAR_1);
   case 'b':
    if (FUNC_16(VAR_18, "slim") == 0)
    {
     if (0 < VAR_9)
      FUNC_8(FUNC_1("incompatible -b options"));
     VAR_9 = -1;
    }
    else if (FUNC_16(VAR_18, "fat") == 0)
    {
     if (VAR_9 < 0)
      FUNC_8(FUNC_1("incompatible -b options"));
     VAR_9 = 1;
    }
    else
     FUNC_8(FUNC_1("invalid option: -b '%s'"), VAR_18);
    break;
   case 'd':
    if (VAR_10 == ((void*)0))
     VAR_10 = FUNC_17(VAR_18);
    else
    {
     FUNC_11(VAR_24,
       FUNC_1("%s: More than one -d option specified\n"),
       VAR_22);
     return VAR_1;
    }
    break;
   case 'l':
    if (VAR_12 == ((void*)0))
     VAR_12 = FUNC_17(VAR_18);
    else
    {
     FUNC_11(VAR_24,
       FUNC_1("%s: More than one -l option specified\n"),
       VAR_22);
     return VAR_1;
    }
    break;
   case 'p':
    if (VAR_23 == ((void*)0))
     VAR_23 = FUNC_17(VAR_18);
    else
    {
     FUNC_11(VAR_24,
       FUNC_1("%s: More than one -p option specified\n"),
       VAR_22);
     return VAR_1;
    }
    break;
   case 't':
    if (VAR_26 != ((void*)0))
    {
     FUNC_11(VAR_24,
       FUNC_1("%s: More than one -t option"
         " specified\n"),
       VAR_22);
     return VAR_1;
    }
    VAR_26 = VAR_18;
    break;
   case 'y':
    if (VAR_28 == ((void*)0))
    {
     FUNC_22(FUNC_1("-y is obsolescent"));
     VAR_28 = FUNC_17(VAR_18);
    }
    else
    {
     FUNC_11(VAR_24,
       FUNC_1("%s: More than one -y option specified\n"),
       VAR_22);
     return VAR_1;
    }
    break;
   case 'L':
    if (VAR_13 == ((void*)0))
     VAR_13 = FUNC_17(VAR_18);
    else
    {
     FUNC_11(VAR_24,
       FUNC_1("%s: More than one -L option specified\n"),
       VAR_22);
     return VAR_1;
    }
    break;
   case 'v':
    VAR_16 = 1;
    break;
   case 'P':
    VAR_20 = 1;
    VAR_21 = FUNC_18(((void*)0));
    break;
   case 'r':
    if (VAR_37)
    {
     FUNC_11(VAR_24,
       FUNC_1("%s: More than one -r option specified\n"),
       VAR_22);
     return VAR_1;
    }
    if (!FUNC_19(VAR_18))
    {
     FUNC_11(VAR_24,
       FUNC_1("%s: invalid time range: %s\n"),
       VAR_22, VAR_18);
     return VAR_1;
    }
    VAR_37 = 1;
    break;
   case 's':
    FUNC_22(FUNC_1("-s ignored"));
    break;
  }
 if (VAR_19 == VAR_31 - 1 && FUNC_16(VAR_32[VAR_19], "=") == 0)
  FUNC_21(VAR_24, VAR_1);
 if (VAR_9 == 0)
  VAR_9 = FUNC_16(VAR_8, "slim") == 0 ? -1 : 1;
 if (VAR_10 == ((void*)0))
  VAR_10 = "data";
 if (VAR_26 == ((void*)0))
  VAR_26 = VAR_6;
 if (VAR_28 == ((void*)0))
  VAR_28 = "yearistype";

 if (VAR_19 < VAR_31 && VAR_13 != ((void*)0))
 {
  FUNC_13(VAR_13);
  FUNC_2();
 }

 for (VAR_34 = VAR_19; VAR_34 < VAR_31; VAR_34++)
  FUNC_13(VAR_32[VAR_34]);
 if (VAR_11)
  return VAR_1;
 FUNC_3();
 FUNC_4(VAR_10);
 for (VAR_35 = 0; VAR_35 < VAR_17; VAR_35 = VAR_36)
 {



  for (VAR_36 = VAR_35 + 1; VAR_36 < VAR_17 && VAR_30[VAR_36].z_name == ((void*)0); ++VAR_36)
   continue;
  FUNC_14(&VAR_30[VAR_35], VAR_36 - VAR_35);
 }




 for (VAR_35 = 0; VAR_35 < VAR_15; ++VAR_35)
 {
  FUNC_7(VAR_14[VAR_35].l_filename, VAR_14[VAR_35].l_linenum);
  FUNC_6(VAR_14[VAR_35].l_from, VAR_14[VAR_35].l_to, 0);
  if (VAR_16)
   for (VAR_36 = 0; VAR_36 < VAR_15; ++VAR_36)
    if (FUNC_16(VAR_14[VAR_35].l_to,
         VAR_14[VAR_36].l_from) == 0)
     FUNC_22(FUNC_1("link to link"));
 }
 if (VAR_12 != ((void*)0))
 {
  FUNC_7(FUNC_1("command line"), 1);
  FUNC_6(VAR_12, VAR_26, 1);
 }
 if (VAR_23 != ((void*)0))
 {
  FUNC_7(FUNC_1("command line"), 1);
  FUNC_6(VAR_23, VAR_7, 1);
 }
 if (VAR_27 && (FUNC_10(VAR_24) || FUNC_9(VAR_24) != 0))
  return VAR_1;
 return VAR_11 ? VAR_1 : VAR_2;
}
