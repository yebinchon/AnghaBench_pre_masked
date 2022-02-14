
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int db; } ;
typedef TYPE_1__ MSIPACKAGE ;
typedef int INT ;
typedef int HKEY ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;

__attribute__((used)) static const WCHAR *FUNC_2( MSIPACKAGE *VAR_9, INT VAR_10, HKEY *VAR_11 )
{
    const WCHAR *VAR_12;

    switch (VAR_10)
    {
    case -1:
        if (FUNC_1( VAR_9->db, VAR_4, 0 ))
        {
            *VAR_11 = VAR_2;
            VAR_12 = VAR_7;
        }
        else
        {
            *VAR_11 = VAR_1;
            VAR_12 = VAR_6;
        }
        break;
    case 0:
        *VAR_11 = VAR_0;
        VAR_12 = VAR_5;
        break;
    case 1:
        *VAR_11 = VAR_1;
        VAR_12 = VAR_6;
        break;
    case 2:
        *VAR_11 = VAR_2;
        VAR_12 = VAR_7;
        break;
    case 3:
        *VAR_11 = VAR_3;
        VAR_12 = VAR_8;
        break;
    default:
        FUNC_0("Unknown root %i\n", VAR_10);
        return ((void*)0);
    }

    return VAR_12;
}
