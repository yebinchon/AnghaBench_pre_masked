
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int BYTE ;



__attribute__((used)) static BYTE FUNC_0 (
 const BYTE* VAR_0
)
{
 BYTE VAR_1 = 0;
 UINT VAR_2 = 11;

 do {
  VAR_1 = (VAR_1 >> 1) + (VAR_1 << 7) + *VAR_0++;
 } while (--VAR_2);
 return VAR_1;
}
