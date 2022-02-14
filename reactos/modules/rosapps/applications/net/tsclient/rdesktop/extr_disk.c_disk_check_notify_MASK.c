
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct fileinfo {int notify; int info_class; int pdir; } ;
struct TYPE_4__ {struct fileinfo* fileinfo; } ;
typedef TYPE_1__ RDPCLIENT ;
typedef scalar_t__ NTSTATUS ;
typedef size_t NTHANDLE ;
typedef int NOTIFY ;


 scalar_t__ FUNC_0 (TYPE_1__*,size_t,int ,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *,int) ;

NTSTATUS
FUNC_3(RDPCLIENT * VAR_3, NTHANDLE VAR_4)
{
 struct fileinfo *VAR_5;
 NTSTATUS VAR_6 = VAR_2;

 NOTIFY VAR_7;

 VAR_5 = &(VAR_3->fileinfo[VAR_4]);
 if (!VAR_5->pdir)
  return VAR_0;



 VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5->info_class, &VAR_7);

 if (VAR_6 != VAR_2)
  return VAR_6;

 if (FUNC_1(&VAR_5->notify, &VAR_7, sizeof(NOTIFY)))
 {

  FUNC_2(&VAR_5->notify, &VAR_7, sizeof(NOTIFY));
  VAR_6 = VAR_1;
 }

 return VAR_6;


}
