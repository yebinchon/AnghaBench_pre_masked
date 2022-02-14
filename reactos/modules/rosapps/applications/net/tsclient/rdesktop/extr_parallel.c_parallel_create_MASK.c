
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32 ;
struct TYPE_5__ {TYPE_1__* rdpdr_device; } ;
struct TYPE_4__ {int handle; int local_path; } ;
typedef TYPE_2__ RDPCLIENT ;
typedef int NTSTATUS ;
typedef int NTHANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static NTSTATUS
FUNC_4(RDPCLIENT * VAR_6, uint32 VAR_7, uint32 VAR_8, uint32 VAR_9, uint32 VAR_10,
  uint32 VAR_11, char *VAR_12, NTHANDLE * VAR_13)
{
 int VAR_14;

 VAR_14 = FUNC_2(VAR_6->rdpdr_device[VAR_7].local_path, VAR_3);
 if (VAR_14 == -1)
 {
  FUNC_3("open");
  return VAR_4;
 }


 if (FUNC_0(VAR_14, VAR_0, VAR_2) == -1)
  FUNC_3("fcntl");






 VAR_6->rdpdr_device[VAR_7].handle = VAR_14;

 *VAR_13 = VAR_14;

 return VAR_5;
}
