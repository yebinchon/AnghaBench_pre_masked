
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bm ;
struct TYPE_3__ {int bmWidth; int bmHeight; } ;
typedef int HBITMAP ;
typedef TYPE_1__ BITMAP ;


 int FUNC_0 (int ,int,TYPE_1__*) ;
 int FUNC_1 (int,char*,int,int) ;

__attribute__((used)) static void FUNC_2( HBITMAP VAR_0, int VAR_1, int VAR_2 )
{
    BITMAP VAR_3;

    FUNC_0( VAR_0, sizeof(VAR_3), &VAR_3 );
    FUNC_1( VAR_3.bmWidth == VAR_1, "got %d expect %d\n", VAR_3.bmWidth, VAR_1 );
    FUNC_1( VAR_3.bmHeight == VAR_2, "got %d expect %d\n", VAR_3.bmHeight, VAR_2 );
}
