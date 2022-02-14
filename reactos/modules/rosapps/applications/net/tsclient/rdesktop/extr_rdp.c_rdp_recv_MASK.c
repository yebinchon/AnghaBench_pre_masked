
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint16 ;
struct TYPE_12__ {int packetno; } ;
struct TYPE_14__ {int * next_packet; TYPE_1__ rdp; } ;
struct TYPE_13__ {int * p; int * end; } ;
typedef TYPE_2__* STREAM ;
typedef TYPE_3__ RDPCLIENT ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_5 (TYPE_3__*,int*) ;

__attribute__((used)) static STREAM
FUNC_6(RDPCLIENT * VAR_0, uint8 * VAR_1)
{
 static STREAM VAR_2;
 uint16 VAR_3, VAR_4;
 uint8 VAR_5;

 if ((VAR_2 == ((void*)0)) || (VAR_0->next_packet >= VAR_2->end) || (VAR_0->next_packet == ((void*)0)))
 {
  VAR_2 = FUNC_5(VAR_0, &VAR_5);
  if (VAR_2 == ((void*)0))
   return ((void*)0);
  if (VAR_5 == 0xff)
  {
   VAR_0->next_packet = VAR_2->end;
   *VAR_1 = 0;
   return VAR_2;
  }
  else if (VAR_5 != 3)
  {

   if(!FUNC_4(VAR_0, VAR_2))
    return ((void*)0);
   *VAR_1 = 0;
   return VAR_2;
  }

  VAR_0->next_packet = VAR_2->p;
 }
 else
 {
  VAR_2->p = VAR_0->next_packet;
 }

 FUNC_2(VAR_2, VAR_3);

 if (VAR_3 == 0x8000)
 {
  VAR_0->next_packet += 8;
  *VAR_1 = 0;
  return VAR_2;
 }
 FUNC_2(VAR_2, VAR_4);
 FUNC_3(VAR_2, 2);
 *VAR_1 = VAR_4 & 0xf;






 VAR_0->next_packet += VAR_3;
 return VAR_2;
}
