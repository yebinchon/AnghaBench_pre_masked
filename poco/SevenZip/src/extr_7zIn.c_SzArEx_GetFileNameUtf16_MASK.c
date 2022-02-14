
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UInt16 ;
struct TYPE_4__ {int * data; } ;
struct TYPE_5__ {size_t* FileNameOffsets; TYPE_1__ FileNames; } ;
typedef TYPE_2__ CSzArEx ;
typedef int Byte ;


 int FUNC_0 (int const*) ;

size_t FUNC_1(const CSzArEx *VAR_0, size_t VAR_1, UInt16 *VAR_2)
{
  size_t VAR_3 = VAR_0->FileNameOffsets[VAR_1 + 1] - VAR_0->FileNameOffsets[VAR_1];
  if (VAR_2 != 0)
  {
    size_t VAR_4;
    const Byte *VAR_5 = VAR_0->FileNames.data + (VAR_0->FileNameOffsets[VAR_1] * 2);
    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
      VAR_2[VAR_4] = FUNC_0(VAR_5 + VAR_4 * 2);
  }
  return VAR_3;
}
