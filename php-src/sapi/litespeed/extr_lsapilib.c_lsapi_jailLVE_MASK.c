
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct passwd {int dummy; } ;
typedef int LSAPI_Request ;


 int FUNC_0 (int *,char*,int *) ;
 int FUNC_1 (struct passwd*,char*) ;
 int FUNC_2 (char*,int ,int,char*) ;
 int FUNC_3 (struct passwd*,char*) ;

__attribute__((used)) static int FUNC_4( LSAPI_Request * VAR_0, uid_t VAR_1, struct passwd * VAR_2 )
{
    int VAR_3 = 0;

    char VAR_4[1024] = "";
    VAR_3 = FUNC_1)( VAR_2, VAR_4 );
    if ( VAR_3 < 0 )
    {
        FUNC_2("LSAPI: LVE jail(%d) ressult: %d, error: %s !\n",
                  VAR_1, VAR_3, VAR_4 );
        FUNC_0( VAR_0, "LSAPI: jail() failure.", ((void*)0) );
        return -1;
    }

    return VAR_3;
}
