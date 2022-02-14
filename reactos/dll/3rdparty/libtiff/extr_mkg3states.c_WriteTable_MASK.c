
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int State; int Width; scalar_t__ Param; } ;
typedef TYPE_1__ TIFFFaxTabEnt ;
typedef int FILE ;


 char* VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;

void
FUNC_1(FILE* VAR_5, const TIFFFaxTabEnt* VAR_6, int VAR_7, const char* VAR_8)
{
    int VAR_9;
    char* VAR_10;

    FUNC_0(VAR_5, "%s %s TIFFFaxTabEnt %s[%d] = {",
 VAR_4, VAR_0, VAR_8, VAR_7);
    if (VAR_1) {
 VAR_10 = "\n";
 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
     FUNC_0(VAR_5, "%s%s%d,%d,%d%s",
  VAR_10, VAR_3, VAR_6->State, VAR_6->Width, (int) VAR_6->Param, VAR_2);
     if (((VAR_9+1) % 10) == 0)
      VAR_10 = ",\n";
     else
      VAR_10 = ",";
     VAR_6++;
 }
    } else {
 VAR_10 = "\n ";
 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
     FUNC_0(VAR_5, "%s%s%3d,%3d,%4d%s",
  VAR_10, VAR_3, VAR_6->State, VAR_6->Width, (int) VAR_6->Param, VAR_2);
     if (((VAR_9+1) % 6) == 0)
      VAR_10 = ",\n ";
     else
      VAR_10 = ",";
     VAR_6++;
 }
    }
    FUNC_0(VAR_5, "\n};\n");
}
