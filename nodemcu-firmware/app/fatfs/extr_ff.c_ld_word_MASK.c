
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int BYTE ;



__attribute__((used)) static WORD FUNC_0 (const BYTE* VAR_0)
{
 WORD VAR_1;

 VAR_1 = VAR_0[1];
 VAR_1 = VAR_1 << 8 | VAR_0[0];
 return VAR_1;
}
