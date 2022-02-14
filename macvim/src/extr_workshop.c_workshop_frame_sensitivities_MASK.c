
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sense; int * verb; } ;
typedef TYPE_1__ VerbSense ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int *,int ) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*) ;

void
FUNC_10(
 VerbSense *VAR_4)
{
    VerbSense *VAR_5;
    char *VAR_6;
    int VAR_7;
    int VAR_8;
    char VAR_9[4096];
    for (VAR_5 = VAR_4; VAR_5->verb != ((void*)0); VAR_5++)
    {
 VAR_7 = 0;
 FUNC_6(VAR_9, "amenu");
 FUNC_5(VAR_9, " ");
 FUNC_5(VAR_9, VAR_5->sense ? "enable" : "disable");
 FUNC_5(VAR_9, " ");
 VAR_8 = FUNC_7(VAR_9);
 while ((VAR_6 = FUNC_4(VAR_5->verb, VAR_7++)) != ((void*)0))
 {
     FUNC_6(&VAR_9[VAR_8], VAR_6);
     FUNC_1(VAR_9, VAR_0);
 }
    }
    FUNC_3(0);
    FUNC_2();
}
