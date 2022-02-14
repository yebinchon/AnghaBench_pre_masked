
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {char** CurrentDirectories; } ;
struct TYPE_5__ {size_t CurrentDrive; void* LastErrorCode; } ;
struct TYPE_4__ {size_t NumLocalDrives; } ;
typedef char* LPSTR ;
typedef int DosDirectory ;
typedef int DWORD ;
typedef int CurrentDirectory ;
typedef int CHAR ;
typedef size_t BYTE ;
typedef int BOOLEAN ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *,int) ;
 int VAR_5 ;
 void* FUNC_4 (int ) ;
 int VAR_6 ;
 size_t FUNC_5 (char) ;
 TYPE_2__* VAR_7 ;
 int FUNC_6 (char*) ;
 TYPE_1__* VAR_8 ;
 int VAR_9 ;
 char* FUNC_7 (int *,char) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*,int) ;

__attribute__((used)) static BOOLEAN FUNC_10(LPSTR VAR_10)
{
    BYTE VAR_11;
    DWORD VAR_12;
    LPSTR VAR_13;
    CHAR VAR_14[VAR_6];
    CHAR VAR_15[VAR_0];


    if (FUNC_8(VAR_10) >= VAR_0)
    {
        VAR_7->LastErrorCode = VAR_2;
        return VAR_3;
    }


    if (FUNC_8(VAR_10) >= 2 && VAR_10[1] == ':')
    {

        VAR_11 = FUNC_5(VAR_10[0]) - 'A';


        if (VAR_11 >= VAR_8->NumLocalDrives)
        {
            VAR_7->LastErrorCode = VAR_2;
            return VAR_3;
        }
    }
    else
    {

        VAR_11 = VAR_7->CurrentDrive;
    }


    VAR_12 = FUNC_1(VAR_10);


    if ((VAR_12 == VAR_5) ||
       !(VAR_12 & VAR_4))
    {
        VAR_7->LastErrorCode = VAR_2;
        return VAR_3;
    }


    if (VAR_11 == VAR_7->CurrentDrive)
    {

        if (!FUNC_6(VAR_10))
        {
            VAR_7->LastErrorCode = FUNC_4(FUNC_2());
            return VAR_3;
        }
    }


    if (!FUNC_0(sizeof(VAR_14), VAR_14))
    {

        return VAR_3;
    }


    if (!FUNC_3(VAR_14, VAR_15, sizeof(VAR_15)))
    {

        return VAR_3;
    }


    VAR_13 = FUNC_7(VAR_15, '\\');
    if (VAR_13 != ((void*)0))
    {
        VAR_13++;
        FUNC_9(VAR_1->CurrentDirectories[VAR_11], VAR_13, VAR_0);
    }
    else
    {
        VAR_1->CurrentDirectories[VAR_11][0] = '\0';
    }


    return VAR_9;
}
