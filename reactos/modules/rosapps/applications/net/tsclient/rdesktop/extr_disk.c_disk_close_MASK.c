
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct fileinfo {char* path; void* delete_on_close; scalar_t__ pdir; } ;
struct TYPE_4__ {int notify_stamp; struct fileinfo* fileinfo; } ;
typedef TYPE_1__ RDPCLIENT ;
typedef int NTSTATUS ;
typedef size_t NTHANDLE ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,size_t,int ,int ) ;
 scalar_t__ FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*) ;

__attribute__((used)) static NTSTATUS
FUNC_6(RDPCLIENT * VAR_6, NTHANDLE VAR_7)
{
 struct fileinfo *VAR_8;

 VAR_8 = &(VAR_6->fileinfo[VAR_7]);

 VAR_6->notify_stamp = VAR_5;

 FUNC_3(VAR_6, VAR_7, 0, VAR_2);

 if (VAR_8->pdir)
 {
  if (FUNC_1(VAR_8->pdir) < 0)
  {
   FUNC_2("closedir");
   return VAR_3;
  }

  if (VAR_8->delete_on_close)
   if (FUNC_4(VAR_8->path) < 0)
   {
    FUNC_2(VAR_8->path);
    return VAR_1;
   }
  VAR_8->delete_on_close = VAR_0;
 }
 else
 {
  if (FUNC_0(VAR_7) < 0)
  {
   FUNC_2("close");
   return VAR_3;
  }
  if (VAR_8->delete_on_close)
   if (FUNC_5(VAR_8->path) < 0)
   {
    FUNC_2(VAR_8->path);
    return VAR_1;
   }

  VAR_8->delete_on_close = VAR_0;
 }

 return VAR_4;
}
