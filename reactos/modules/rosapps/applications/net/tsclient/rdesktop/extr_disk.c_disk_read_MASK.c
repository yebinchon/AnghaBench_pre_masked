
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
struct TYPE_5__ {TYPE_1__* fileinfo; } ;
struct TYPE_4__ {int flags_and_attributes; } ;
typedef TYPE_2__ RDPCLIENT ;
typedef int NTSTATUS ;
typedef size_t NTHANDLE ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (size_t,int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (size_t,int *,int) ;

__attribute__((used)) static NTSTATUS
FUNC_3(RDPCLIENT * VAR_6, NTHANDLE VAR_7, uint8 * VAR_8, uint32 VAR_9, uint32 VAR_10, uint32 * VAR_11)
{
 int VAR_12;
 FUNC_0(VAR_7, VAR_10, VAR_1);

 VAR_12 = FUNC_2(VAR_7, VAR_8, VAR_9);

 if (VAR_12 < 0)
 {
  *VAR_11 = 0;
  switch (VAR_5)
  {
   case 128:



    return VAR_3;
   default:
    FUNC_1("read");
    return VAR_2;
  }
 }

 *VAR_11 = VAR_12;

 return VAR_4;
}
