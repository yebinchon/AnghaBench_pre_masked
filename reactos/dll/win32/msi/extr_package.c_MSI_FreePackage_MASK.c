
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int localfile; scalar_t__ delete_on_close; int log_file; TYPE_1__* db; scalar_t__ dialog; } ;
struct TYPE_5__ {int hdr; } ;
typedef TYPE_2__ MSIPACKAGE ;
typedef int MSIOBJECTHDR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8( MSIOBJECTHDR *VAR_1)
{
    MSIPACKAGE *VAR_2 = (MSIPACKAGE *)VAR_1;

    FUNC_4( VAR_2 );

    if( VAR_2->dialog )
        FUNC_5( VAR_2->dialog );

    FUNC_7( &VAR_2->db->hdr );
    FUNC_3(VAR_2);
    FUNC_0( VAR_2->log_file );

    if (VAR_2->delete_on_close) FUNC_1( VAR_2->localfile );
    FUNC_6( VAR_2->localfile );
    FUNC_2(((void*)0), VAR_0, 0);
}
