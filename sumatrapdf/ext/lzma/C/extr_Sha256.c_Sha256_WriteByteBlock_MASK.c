
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_3__ {int state; scalar_t__* buffer; } ;
typedef TYPE_1__ CSha256 ;


 int FUNC_0 (int ,int*) ;

__attribute__((used)) static void FUNC_1(CSha256 *VAR_0)
{
  UInt32 VAR_1[16];
  unsigned VAR_2;
  for (VAR_2 = 0; VAR_2 < 16; VAR_2++)
    VAR_1[VAR_2] =
      ((UInt32)(VAR_0->buffer[VAR_2 * 4 ]) << 24) +
      ((UInt32)(VAR_0->buffer[VAR_2 * 4 + 1]) << 16) +
      ((UInt32)(VAR_0->buffer[VAR_2 * 4 + 2]) << 8) +
      ((UInt32)(VAR_0->buffer[VAR_2 * 4 + 3]));
  FUNC_0(VAR_0->state, VAR_1);
}
