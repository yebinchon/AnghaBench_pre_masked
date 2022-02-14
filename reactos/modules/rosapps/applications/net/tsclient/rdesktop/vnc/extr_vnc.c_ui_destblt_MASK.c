
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ data; } ;
typedef TYPE_1__ vncBuffer ;
typedef int uint8 ;


 int VAR_0 ;
 int FUNC_0 (int,int,int,int,int) ;
 int FUNC_1 (char*,int,int,int,int,int) ;
 TYPE_1__* FUNC_2 (int ,int,int,int,int) ;

void
FUNC_3(uint8 VAR_1,
               int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;
 vncBuffer *VAR_7;

 switch (VAR_1)
 {
  case 0:
  case 15:
   FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, 0xff);
   break;
  case 5:
   VAR_7 = FUNC_2(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5);
   for (VAR_6 = 0; VAR_6 < VAR_4 * VAR_5; VAR_6++)
    ((char *) (VAR_7->data))[VAR_6] = !((char *) (VAR_7->data))[VAR_6];
   break;
  default:
   FUNC_1("ui_destblt: opcode=%d %d,%d %dx%d\n", VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 }
}
