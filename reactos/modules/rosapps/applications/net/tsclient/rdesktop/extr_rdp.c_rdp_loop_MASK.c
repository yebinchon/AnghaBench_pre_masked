
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
struct TYPE_13__ {scalar_t__ next_packet; } ;
struct TYPE_12__ {scalar_t__ end; } ;
typedef TYPE_1__* STREAM ;
typedef TYPE_2__ RDPCLIENT ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;




 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (TYPE_2__*,int*) ;
 int FUNC_5 (char*,int) ;

BOOL
FUNC_6(RDPCLIENT * VAR_2, BOOL * VAR_3, uint32 * VAR_4)
{
 uint8 VAR_5;
 BOOL VAR_6 = VAR_0;
 BOOL VAR_7 = VAR_1;
 STREAM VAR_8;

 while (VAR_7)
 {
  VAR_8 = FUNC_4(VAR_2, &VAR_5);
  if (VAR_8 == ((void*)0))
   return VAR_0;
  switch (VAR_5)
  {
   case 129:
    if(!FUNC_2(VAR_2, VAR_8))
     return VAR_0;
    *VAR_3 = VAR_0;
    break;
   case 130:
    FUNC_0(("RDP_PDU_DEACTIVATE\n"));
    *VAR_3 = VAR_1;
    break;
   case 128:
    return FUNC_3(VAR_2, VAR_8);
    break;
   case 131:
    VAR_6 = FUNC_1(VAR_2, VAR_8, VAR_4);
    break;
   case 0:
    break;
   default:
    FUNC_5("PDU %d\n", VAR_5);
  }
  if (VAR_6)
   return VAR_0;
  VAR_7 = VAR_2->next_packet < VAR_8->end;
 }
 return VAR_1;
}
