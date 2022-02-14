
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int BYTE ;



__attribute__((used)) static
int FUNC_0 (const void* VAR_0, const void* VAR_1, UINT VAR_2) {
 const BYTE *VAR_3 = (const BYTE *)VAR_0, *VAR_4 = (const BYTE *)VAR_1;
 int VAR_5 = 0;

 while (VAR_2-- && (VAR_5 = *VAR_3++ - *VAR_4++) == 0) ;
 return VAR_5;
}
