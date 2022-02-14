
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cab_ULONG ;
typedef int ULONG ;
typedef int UINT ;
typedef int BYTE ;



__attribute__((used)) static cab_ULONG FUNC_0( const void *VAR_0, UINT VAR_1, cab_ULONG VAR_2 )
{
  cab_ULONG VAR_3;
  cab_ULONG VAR_4;
  int VAR_5;
  const BYTE *VAR_6;

  VAR_3 = VAR_2;
  VAR_5 = VAR_1 / 4;
  VAR_6 = VAR_0;

  while (VAR_5-- > 0) {
    VAR_4 = *VAR_6++;
    VAR_4 |= (((cab_ULONG)(*VAR_6++)) << 8);
    VAR_4 |= (((cab_ULONG)(*VAR_6++)) << 16);
    VAR_4 |= (((cab_ULONG)(*VAR_6++)) << 24);
    VAR_3 ^= VAR_4;
  }

  VAR_4 = 0;
  switch (VAR_1 % 4) {
    case 3:
      VAR_4 |= (((ULONG)(*VAR_6++)) << 16);

    case 2:
      VAR_4 |= (((ULONG)(*VAR_6++)) << 8);

    case 1:
      VAR_4 |= *VAR_6;

    default:
      break;
  }
  VAR_3 ^= VAR_4;

  return VAR_3;
}
