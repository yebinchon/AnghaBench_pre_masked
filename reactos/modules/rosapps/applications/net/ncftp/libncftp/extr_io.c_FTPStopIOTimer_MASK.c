
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* progress ) (TYPE_1__* const,int ) ;scalar_t__ nextProgressUpdate; } ;
typedef int (* FTPProgressMeterProc ) (TYPE_1__* const,int ) ;
typedef TYPE_1__* FTPCIPtr ;


 int FUNC_0 (TYPE_1__* const) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__* const,int ) ;

void
FUNC_2(const FTPCIPtr VAR_1)
{
 VAR_1->nextProgressUpdate = 0;
 FUNC_0(VAR_1);
 if (VAR_1->progress != (FTPProgressMeterProc) 0)
  (*VAR_1->progress)(VAR_1, VAR_0);
}
