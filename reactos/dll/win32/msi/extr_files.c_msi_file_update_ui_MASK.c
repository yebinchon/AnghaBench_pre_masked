
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_11__ {int FileSize; TYPE_1__* Component; int FileName; } ;
struct TYPE_10__ {int hdr; } ;
struct TYPE_9__ {int Directory; } ;
typedef TYPE_2__ MSIRECORD ;
typedef int MSIPACKAGE ;
typedef TYPE_3__ MSIFILE ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (int *,int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int,int ) ;
 int FUNC_3 (TYPE_2__*,int,int ) ;
 int FUNC_4 (int *,int,int ,int ,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6( MSIPACKAGE *VAR_1, MSIFILE *VAR_2, const WCHAR *VAR_3 )
{
    MSIRECORD *VAR_4;

    VAR_4 = FUNC_0( 9 );
    FUNC_3( VAR_4, 1, VAR_2->FileName );
    FUNC_3( VAR_4, 9, VAR_2->Component->Directory );
    FUNC_2( VAR_4, 6, VAR_2->FileSize );
    FUNC_1(VAR_1, VAR_0, VAR_4);
    FUNC_5( &VAR_4->hdr );
    FUNC_4( VAR_1, 2, VAR_2->FileSize, 0, 0 );
}
