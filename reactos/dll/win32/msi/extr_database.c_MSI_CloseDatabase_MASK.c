
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_5__ {scalar_t__ tempfolder; scalar_t__ deletefile; int storage; scalar_t__ strings; scalar_t__ path; } ;
typedef int MSIOBJECTHDR ;
typedef TYPE_1__ MSIDATABASE ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static VOID FUNC_7( MSIOBJECTHDR *VAR_0 )
{
    MSIDATABASE *VAR_1 = (MSIDATABASE *) VAR_0;

    FUNC_6(VAR_1->path);
    FUNC_3( VAR_1 );
    FUNC_2( VAR_1 );
    FUNC_4( VAR_1 );
    if (VAR_1->strings) FUNC_5( VAR_1->strings );
    FUNC_1( VAR_1->storage );
    if (VAR_1->deletefile)
    {
        FUNC_0( VAR_1->deletefile );
        FUNC_6( VAR_1->deletefile );
    }
    FUNC_6( VAR_1->tempfolder );
}
