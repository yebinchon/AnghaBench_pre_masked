
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {char** CurrentDirectories; } ;
struct TYPE_5__ {char CurrentDrive; } ;
struct TYPE_4__ {char NumLocalDrives; } ;
typedef int DirectoryPath ;
typedef int CHAR ;
typedef char BYTE ;
typedef int BOOLEAN ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int ,char*,char,char*) ;

__attribute__((used)) static BOOLEAN FUNC_3(BYTE VAR_6)
{
    CHAR VAR_7[VAR_0 + 1];


    if (VAR_6 >= VAR_4->NumLocalDrives) return VAR_2;

    FUNC_0(VAR_7, sizeof(VAR_7));


    FUNC_2(VAR_7,
             VAR_0,
             "%c:\\%s",
             'A' + VAR_6,
             VAR_1->CurrentDirectories[VAR_6]);


    if (!FUNC_1(VAR_7)) return VAR_2;


    VAR_3->CurrentDrive = VAR_6;


    return VAR_5;
}
