
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
typedef int TimeStamp ;
struct TYPE_3__ {int out_buf; int ctxt; int in_buf; int cred; } ;
typedef TYPE_1__ SspiData ;
typedef scalar_t__ SECURITY_STATUS ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int ,int ,int *,int ,int *,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static SECURITY_STATUS FUNC_3(SspiData *VAR_4, BOOL VAR_5, ULONG VAR_6)
{
    SECURITY_STATUS VAR_7;
    ULONG VAR_8;
    TimeStamp VAR_9;

    FUNC_2("Running the server the %s time\n", VAR_5?"first":"second");

    VAR_7 = FUNC_0(&VAR_4->cred, VAR_5?((void*)0):&VAR_4->ctxt,
            VAR_4->in_buf, 0, VAR_6, &VAR_4->ctxt,
            VAR_4->out_buf, &VAR_8, &VAR_9);

    if(VAR_7 == VAR_1 || VAR_7 == VAR_2)
    {
        FUNC_1(&VAR_4->ctxt, VAR_4->out_buf);
        if(VAR_7 == VAR_1)
            VAR_7 = VAR_3;
        else if(VAR_7 == VAR_2)
            VAR_7 = VAR_0;
    }

    return VAR_7;
}
