
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
struct TYPE_3__ {int printer_fp; } ;
typedef int RDPCLIENT ;
typedef TYPE_1__ PRINTER ;
typedef int NTSTATUS ;
typedef int NTHANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int,int,int ) ;
 TYPE_1__* FUNC_2 (int *,int ) ;

__attribute__((used)) static NTSTATUS
FUNC_3(RDPCLIENT * VAR_2, NTHANDLE VAR_3, uint8 * VAR_4, uint32 VAR_5, uint32 VAR_6, uint32 * VAR_7)
{
 PRINTER *VAR_8;

 VAR_8 = FUNC_2(VAR_2, VAR_3);
 *VAR_7 = VAR_5 * FUNC_1(VAR_4, VAR_5, 1, VAR_8->printer_fp);

 if (FUNC_0(VAR_8->printer_fp))
 {
  *VAR_7 = 0;
  return VAR_0;
 }
 return VAR_1;
}
