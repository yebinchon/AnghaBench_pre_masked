
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
typedef scalar_t__ uint32 ;
struct TYPE_3__ {scalar_t__ event_txempty; } ;
typedef TYPE_1__ SERIAL_DEVICE ;
typedef int RDPCLIENT ;
typedef int NTSTATUS ;
typedef int NTHANDLE ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ,int *,scalar_t__) ;

__attribute__((used)) static NTSTATUS
FUNC_3(RDPCLIENT * VAR_1, NTHANDLE VAR_2, uint8 * VAR_3, uint32 VAR_4, uint32 VAR_5, uint32 * VAR_6)
{
 SERIAL_DEVICE *VAR_7;

 VAR_7 = FUNC_1(VAR_1, VAR_2);

 *VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4);

 if (*VAR_6 > 0)
  VAR_7->event_txempty = *VAR_6;

 FUNC_0(("serial_write length %d, offset %d result %d\n", VAR_4, VAR_5, *VAR_6));

 return VAR_0;
}
