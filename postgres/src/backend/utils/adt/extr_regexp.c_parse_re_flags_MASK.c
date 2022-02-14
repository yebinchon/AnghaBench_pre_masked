
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int text ;
struct TYPE_3__ {int cflags; int glob; } ;
typedef TYPE_1__ pg_re_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char) ;

__attribute__((used)) static void
FUNC_5(pg_re_flags *VAR_10, text *VAR_11)
{

 VAR_10->cflags = VAR_2;
 VAR_10->glob = 0;

 if (VAR_11)
 {
  char *VAR_12 = FUNC_0(VAR_11);
  int VAR_13 = FUNC_1(VAR_11);
  int VAR_14;

  for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++)
  {
   switch (VAR_12[VAR_14])
   {
    case 'g':
     VAR_10->glob = 1;
     break;
    case 'b':
     VAR_10->cflags &= ~(VAR_2 | VAR_4 | VAR_9);
     break;
    case 'c':
     VAR_10->cflags &= ~VAR_5;
     break;
    case 'e':
     VAR_10->cflags |= VAR_4;
     VAR_10->cflags &= ~(VAR_2 | VAR_9);
     break;
    case 'i':
     VAR_10->cflags |= VAR_5;
     break;
    case 'm':
    case 'n':
     VAR_10->cflags |= VAR_6;
     break;
    case 'p':
     VAR_10->cflags |= VAR_8;
     VAR_10->cflags &= ~VAR_7;
     break;
    case 'q':
     VAR_10->cflags |= VAR_9;
     VAR_10->cflags &= ~(VAR_2 | VAR_4);
     break;
    case 's':
     VAR_10->cflags &= ~VAR_6;
     break;
    case 't':
     VAR_10->cflags &= ~VAR_3;
     break;
    case 'w':
     VAR_10->cflags &= ~VAR_8;
     VAR_10->cflags |= VAR_7;
     break;
    case 'x':
     VAR_10->cflags |= VAR_3;
     break;
    default:
     FUNC_2(VAR_1,
       (FUNC_3(VAR_0),
        FUNC_4("invalid regular expression option: \"%c\"",
         VAR_12[VAR_14])));
     break;
   }
  }
 }
}
