
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
typedef size_t uint16 ;
struct TYPE_16__ {size_t current_format; void* device_open; int * formats; } ;
struct TYPE_18__ {TYPE_1__ rdpsnd; } ;
struct TYPE_17__ {scalar_t__ p; scalar_t__ end; } ;
typedef TYPE_2__* STREAM ;
typedef TYPE_3__ RDPCLIENT ;
typedef void* BOOL ;


 void* VAR_0 ;
 size_t VAR_1 ;





 void* VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,size_t) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_8 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_9 (TYPE_3__*,size_t,int) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int,int) ;
 int FUNC_15 (TYPE_2__*,size_t,int) ;

__attribute__((used)) static void
FUNC_16(RDPCLIENT * VAR_3, STREAM VAR_4)
{
 uint8 VAR_5;
 uint16 VAR_6;
 uint32 VAR_7;
 static uint16 VAR_8, VAR_9;
 static uint8 VAR_10;
 static BOOL VAR_11;






 if (VAR_11)
 {
  if (VAR_9 >= VAR_1)
  {
   FUNC_0("RDPSND: Invalid format index\n");
   return;
  }

  if (!VAR_3->rdpsnd.device_open || (VAR_9 != VAR_3->rdpsnd.current_format))
  {
   if (!VAR_3->rdpsnd.device_open && !FUNC_12())
   {
    FUNC_9(VAR_3, VAR_8, VAR_10);
    return;
   }
   if (!FUNC_13(&VAR_3->rdpsnd.formats[VAR_9]))
   {
    FUNC_9(VAR_3, VAR_8, VAR_10);
    FUNC_11();
    VAR_3->rdpsnd.device_open = VAR_0;
    return;
   }
   VAR_3->rdpsnd.device_open = VAR_2;
   VAR_3->rdpsnd.current_format = VAR_9;
  }

  FUNC_15(VAR_4, VAR_8, VAR_10);
  VAR_11 = VAR_0;
  return;
 }

 FUNC_4(VAR_4, VAR_5);
 FUNC_5(VAR_4, 1);
 FUNC_2(VAR_4, VAR_6);

 switch (VAR_5)
 {
  case 128:
   FUNC_2(VAR_4, VAR_8);
   FUNC_2(VAR_4, VAR_9);
   FUNC_4(VAR_4, VAR_10);
   VAR_11 = VAR_2;
   break;
  case 132:
   FUNC_11();
   VAR_3->rdpsnd.device_open = VAR_0;
   break;
  case 131:
   FUNC_7(VAR_3, VAR_4);
   break;
  case 130:
   FUNC_8(VAR_3, VAR_4);
   break;
  case 129:
   FUNC_3(VAR_4, VAR_7);
   if (VAR_3->rdpsnd.device_open)
   {
    FUNC_14((VAR_7 & 0xffff), (VAR_7 & 0xffff0000) >> 16);
   }
   break;
  default:
   FUNC_10("RDPSND packet type %d\n", VAR_5);
   break;
 }
}
