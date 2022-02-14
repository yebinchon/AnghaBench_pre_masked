
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* name; int lcase; } ;
struct TYPE_5__ {TYPE_1__ dir_ent; int * lfn; } ;
typedef TYPE_2__ DOS_FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (char const*,unsigned char const) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_2(DOS_FILE * VAR_4)
{
    int VAR_5, VAR_6, VAR_7 = 0;
    const char *VAR_8 = VAR_2 ? "*?\\/:" : "*?<>|\"\\/:";
    const unsigned char *VAR_9 = VAR_4->dir_ent.name;
    const unsigned char *VAR_10 = VAR_9 + 8;



    if (FUNC_1((const char *)VAR_9, "EA DATA  SF", 11) == 0 ||
 FUNC_1((const char *)VAR_9, "WP ROOT  SF", 11) == 0)
 return 0;


    if ((VAR_4->lfn == ((void*)0)) && (VAR_4->dir_ent.lcase & VAR_0)) {
 return 1;
    }



    if (VAR_4->dir_ent.lcase & VAR_0)
 return 0;

    for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
 if (VAR_9[VAR_5] < ' ' || VAR_9[VAR_5] == 0x7f)
     return 1;
 if (VAR_9[VAR_5] > 0x7f)
     ++VAR_7;
 if (FUNC_0(VAR_8, VAR_9[VAR_5]))
     return 1;
    }

    VAR_6 = 0;
    for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
 if (VAR_9[VAR_5] == ' ')
     VAR_6 = 1;
 else if (VAR_6)


     return 1;
    }

    VAR_6 = 0;
    for (VAR_5 = 0; VAR_5 < 3; VAR_5++) {
 if (VAR_10[VAR_5] == ' ')
     VAR_6 = 1;
 else if (VAR_6)


     return 1;
    }


    if (VAR_2 && VAR_7)
 return 1;
    return 0;


}
