
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dwFlags; } ;
struct TYPE_7__ {TYPE_1__ hdr; } ;
typedef TYPE_2__ ftp_session_t ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static BOOL FUNC_2(ftp_session_t *VAR_3)
{
    if (VAR_3->hdr.dwFlags & VAR_1)
    {
        if (!FUNC_0(VAR_3))
            return VAR_0;
    }
    else
    {
 if (!FUNC_1(VAR_3))
            return VAR_0;
    }
    return VAR_2;
}
