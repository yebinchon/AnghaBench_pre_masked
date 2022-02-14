
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ut64 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_7__ {int* data; int object; } ;
struct TYPE_6__ {int Offset; int Size; } ;
typedef TYPE_1__* PSTREAM_HEADER ;
typedef TYPE_2__ PE ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (TYPE_2__*,int const*,int) ;
 int FUNC_1 (int,int ,char*) ;
 int FUNC_2 (char*,int ,char*,int) ;
 int FUNC_3 (char*,char*,int,int,int,int const,int const,int const,int const,int const,int const,int const,int const) ;

void FUNC_4( PE* VAR_0, ut64 VAR_1, PSTREAM_HEADER VAR_2) {

 char VAR_3[37];
 int VAR_4 = 0;

 const uint8_t* VAR_5 = VAR_0->data + VAR_1 + VAR_2->Offset;
 DWORD VAR_6 = VAR_2->Size;



 while (VAR_6 >= 16 && FUNC_0(VAR_0, VAR_5, 16)) {
  FUNC_3(VAR_3, "%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x",
    *(uint32_t*) VAR_5,
    *(uint16_t*) (VAR_5 + 4),
    *(uint16_t*) (VAR_5 + 6),
    *(VAR_5 + 8),
    *(VAR_5 + 9),
    *(VAR_5 + 10),
    *(VAR_5 + 11),
    *(VAR_5 + 12),
    *(VAR_5 + 13),
    *(VAR_5 + 14),
    *(VAR_5 + 15));
  VAR_3[(16 * 2) + 4] = '\0';
  FUNC_2 (VAR_3, VAR_0->object, "guids[%i]", VAR_4);
  VAR_4++;
  VAR_6 -= 16;
 }
 FUNC_1(VAR_4, VAR_0->object, "number_of_guids");
}
