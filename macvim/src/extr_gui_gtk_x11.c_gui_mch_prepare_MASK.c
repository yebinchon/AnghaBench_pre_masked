
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* name; int flags; } ;
typedef TYPE_1__ cmdline_option_T ;
typedef int char_u ;
typedef int buf ;
struct TYPE_5__ {void* starting; void* dofork; scalar_t__ geom; } ;



 int VAR_0 ;


 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 void* VAR_10 ;
 char* VAR_11 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 char* VAR_12 ;
 TYPE_1__* VAR_13 ;
 char* VAR_14 ;
 char* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 int FUNC_1 (int ) ;
 TYPE_2__ VAR_18 ;
 size_t VAR_19 ;
 char** VAR_20 ;
 scalar_t__ FUNC_2 (int *,int *,int,void*) ;
 int FUNC_3 (char**,char**,int) ;
 char* VAR_21 ;
 char* VAR_22 ;
 char* VAR_23 ;
 int * FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;
 int * FUNC_8 (int *,char) ;
 scalar_t__ FUNC_9 (int *) ;

void
FUNC_10(int *VAR_24, char **VAR_25)
{
    const cmdline_option_T *VAR_26;
    int VAR_27 = 0;
    int VAR_28 = 0;
    VAR_19 = 0;
    VAR_20 = (char **)FUNC_0((unsigned)((*VAR_24 + 1) * sizeof(char *)));

    FUNC_1(VAR_20 != ((void*)0));

    VAR_20[VAR_19++] = VAR_25[VAR_27++];

    while (VAR_27 < *VAR_24)
    {

 if (VAR_25[VAR_27][0] != '-' && VAR_25[VAR_27][0] != '+')
 {
     ++VAR_27;
     continue;
 }


 for (VAR_26 = &VAR_13[0]; VAR_26->name != ((void*)0); ++VAR_26)
 {
     VAR_28 = FUNC_6(VAR_26->name);

     if (FUNC_7(VAR_25[VAR_27], VAR_26->name, VAR_28) == 0)
     {
  if (VAR_25[VAR_27][VAR_28] == '\0')
      break;

  if (VAR_25[VAR_27][VAR_28] == '=' && (VAR_26->flags & VAR_2))
      break;






     }
     else if ((VAR_26->flags & VAR_0)
   && FUNC_5(VAR_25[VAR_27], VAR_26->name + 1) == 0)
     {


  VAR_25[VAR_27] = (char *)VAR_26->name;
  break;
     }
 }
 if (VAR_26->name == ((void*)0))
 {
     ++VAR_27;
     continue;
 }

 if (VAR_26->flags & VAR_1)
 {


     VAR_20[VAR_19++] = VAR_25[VAR_27];
 }
 else
 {
     char *VAR_29 = ((void*)0);



     if (VAR_26->flags & VAR_2)
     {
  if (VAR_25[VAR_27][VAR_28] == '=')
      VAR_29 = &VAR_25[VAR_27][VAR_28 + 1];
  else if (VAR_27 + 1 < *VAR_24 && FUNC_5(VAR_25[VAR_27 + 1], "--") != 0)
      VAR_29 = VAR_25[VAR_27 + 1];
     }


     switch (VAR_26->flags & VAR_3)
     {
  case 129:
      VAR_17 = VAR_10;
      break;
  case 130:
      VAR_17 = VAR_6;
      break;
  case 135:
      VAR_14 = VAR_29;
      break;
  case 133:
      if (VAR_29 != ((void*)0))
   VAR_18.geom = FUNC_9((char_u *)VAR_29);
      break;
  case 136:
      VAR_12 = VAR_29;
      break;
  case 134:
      VAR_15 = VAR_29;
      break;
  case 132:
      VAR_16 = VAR_10;
      break;
  case 128:
      VAR_23 = VAR_29;
      break;






  default:
      break;
     }
 }



 if (VAR_26->flags & VAR_5)
     VAR_18.starting = VAR_10;

 if (VAR_26->flags & VAR_4)
     ++VAR_27;
 else
 {

     if (--*VAR_24 > VAR_27)
     {
  int VAR_30 = 1;


  if ((VAR_26->flags & VAR_2)
   && VAR_25[VAR_27][VAR_28] != '='
   && FUNC_5(VAR_25[VAR_27 + 1], "--") != 0)
  {
      ++VAR_30;
      --*VAR_24;
      if (VAR_26->flags & VAR_1)
   VAR_20[VAR_19++] = VAR_25[VAR_27 + 1];
  }

  if (*VAR_24 > VAR_27)
      FUNC_3(&VAR_25[VAR_27], &VAR_25[VAR_27 + VAR_30],
      (*VAR_24 - VAR_27) * sizeof(char *));
     }
     VAR_25[*VAR_24] = ((void*)0);
 }
    }

    VAR_20[VAR_19] = ((void*)0);
}
