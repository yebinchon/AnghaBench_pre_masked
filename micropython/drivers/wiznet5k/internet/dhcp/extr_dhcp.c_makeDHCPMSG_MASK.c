
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int* OPT; scalar_t__* file; scalar_t__* sname; void** chaddr; scalar_t__* giaddr; scalar_t__* siaddr; scalar_t__* yiaddr; scalar_t__* ciaddr; int flags; int secs; int xid; int hops; int hlen; int htype; int op; } ;


 int VAR_0 ;
 void** VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int*) ;
 TYPE_1__* VAR_9 ;

void FUNC_1(void)
{
   uint8_t VAR_10[6];
   uint8_t* VAR_11;
   uint8_t VAR_12;
   FUNC_0(VAR_10);
 VAR_9->op = VAR_0;
 VAR_9->htype = VAR_5;
 VAR_9->hlen = VAR_3;
 VAR_9->hops = VAR_4;
 VAR_11 = (uint8_t*)(&VAR_9->xid);
 *(VAR_11+0) = (uint8_t)((VAR_7 & 0xFF000000) >> 24);
 *(VAR_11+1) = (uint8_t)((VAR_7 & 0x00FF0000) >> 16);
   *(VAR_11+2) = (uint8_t)((VAR_7 & 0x0000FF00) >> 8);
 *(VAR_11+3) = (uint8_t)((VAR_7 & 0x000000FF) >> 0);
 VAR_9->secs = VAR_6;
 VAR_11 = (uint8_t*)(&VAR_9->flags);
 *(VAR_11+0) = (uint8_t)((VAR_2 & 0xFF00) >> 8);
 *(VAR_11+1) = (uint8_t)((VAR_2 & 0x00FF) >> 0);

 VAR_9->ciaddr[0] = 0;
 VAR_9->ciaddr[1] = 0;
 VAR_9->ciaddr[2] = 0;
 VAR_9->ciaddr[3] = 0;

 VAR_9->yiaddr[0] = 0;
 VAR_9->yiaddr[1] = 0;
 VAR_9->yiaddr[2] = 0;
 VAR_9->yiaddr[3] = 0;

 VAR_9->siaddr[0] = 0;
 VAR_9->siaddr[1] = 0;
 VAR_9->siaddr[2] = 0;
 VAR_9->siaddr[3] = 0;

 VAR_9->giaddr[0] = 0;
 VAR_9->giaddr[1] = 0;
 VAR_9->giaddr[2] = 0;
 VAR_9->giaddr[3] = 0;

 VAR_9->chaddr[0] = VAR_1[0];
 VAR_9->chaddr[1] = VAR_1[1];
 VAR_9->chaddr[2] = VAR_1[2];
 VAR_9->chaddr[3] = VAR_1[3];
 VAR_9->chaddr[4] = VAR_1[4];
 VAR_9->chaddr[5] = VAR_1[5];

 for (VAR_12 = 6; VAR_12 < 16; VAR_12++) VAR_9->chaddr[VAR_12] = 0;
 for (VAR_12 = 0; VAR_12 < 64; VAR_12++) VAR_9->sname[VAR_12] = 0;
 for (VAR_12 = 0; VAR_12 < 128; VAR_12++) VAR_9->file[VAR_12] = 0;


 VAR_9->OPT[0] = (uint8_t)((VAR_8 & 0xFF000000) >> 24);
 VAR_9->OPT[1] = (uint8_t)((VAR_8 & 0x00FF0000) >> 16);
 VAR_9->OPT[2] = (uint8_t)((VAR_8 & 0x0000FF00) >> 8);
 VAR_9->OPT[3] = (uint8_t) (VAR_8 & 0x000000FF) >> 0;
}
