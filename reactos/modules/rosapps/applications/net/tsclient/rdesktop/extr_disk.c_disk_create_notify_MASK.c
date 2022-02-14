
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct fileinfo {int info_class; int notify; } ;
struct TYPE_4__ {struct fileinfo* fileinfo; } ;
typedef TYPE_1__ RDPCLIENT ;
typedef scalar_t__ NTSTATUS ;
typedef size_t NTHANDLE ;


 scalar_t__ FUNC_0 (TYPE_1__*,size_t,int,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

NTSTATUS
FUNC_1(RDPCLIENT * VAR_2, NTHANDLE VAR_3, uint32 VAR_4)
{

 struct fileinfo *VAR_5;
 NTSTATUS VAR_6 = VAR_0;



 VAR_5 = &(VAR_2->fileinfo[VAR_3]);
 VAR_5->info_class = VAR_4;

 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4, &VAR_5->notify);

 if (VAR_4 & 0x1000)
 {
  if (VAR_6 == VAR_0)
   return VAR_1;
 }




 return VAR_6;

}
