
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int USHORT ;
struct TYPE_4__ {int red; int green; int blue; } ;
struct TYPE_5__ {int NextStep; int RepeatInterval; int OnTimeSteps; int OffTimeSteps; int AudioByte; TYPE_1__ color; } ;
typedef TYPE_2__* PCBUSYLIGHT_COMMAND_STEP ;
typedef int* PBYTE ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int*) ;
 int FUNC_2 (char*,int) ;
 int VAR_3 ;
 int FUNC_3 (int,int) ;

BOOL FUNC_4(PCBUSYLIGHT_COMMAND_STEP VAR_4, DWORD VAR_5, PBYTE *VAR_6, DWORD *VAR_7)
{
 BOOL VAR_8 = VAR_1;
 DWORD VAR_9;
 USHORT VAR_10;

 *VAR_7 = VAR_0;
 if((*VAR_6 = (PBYTE) FUNC_0(VAR_2, *VAR_7)))
 {
  if(VAR_5 >=7)
   FUNC_2(L"count=%u (max is 7)\n", VAR_5);
  for(VAR_9 = 0; VAR_9 < FUNC_3(VAR_5, 7); VAR_9++)
  {
   (*VAR_6)[VAR_9 * 8 + 1] = (VAR_4[VAR_9].NextStep & 0xf0) ? VAR_4[VAR_9].NextStep : (VAR_4[VAR_9].NextStep | 0x10);
   (*VAR_6)[VAR_9 * 8 + 2] = VAR_4[VAR_9].RepeatInterval;

   (*VAR_6)[VAR_9 * 8 + 3] = VAR_4[VAR_9].color.red;
   (*VAR_6)[VAR_9 * 8 + 4] = VAR_4[VAR_9].color.green;
   (*VAR_6)[VAR_9 * 8 + 5] = VAR_4[VAR_9].color.blue;

   (*VAR_6)[VAR_9 * 8 + 6] = VAR_4[VAR_9].OnTimeSteps;
   (*VAR_6)[VAR_9 * 8 + 7] = VAR_4[VAR_9].OffTimeSteps;
   (*VAR_6)[VAR_9 * 8 + 8] = VAR_4[VAR_9].AudioByte;
  }
  (*VAR_6)[57] = 4;
  (*VAR_6)[58] = 4;
  (*VAR_6)[59] = 85;

  (*VAR_6)[60] = (*VAR_6)[61] = (*VAR_6)[62] = 0xff;

  for(VAR_9 = 1, VAR_10 = 0; VAR_9 < (*VAR_7 - 2); VAR_9++)
   VAR_10 += (*VAR_6)[VAR_9];
  (*VAR_6)[63] = (BYTE) (VAR_10 / 256);
  (*VAR_6)[64] = (BYTE) (VAR_10 % 256);

  VAR_8 = VAR_3;
  if(!VAR_8)
  {
   *VAR_6 = (PBYTE) FUNC_1(*VAR_6);
   *VAR_7 = 0;
  }
 }
 return VAR_8;
}
