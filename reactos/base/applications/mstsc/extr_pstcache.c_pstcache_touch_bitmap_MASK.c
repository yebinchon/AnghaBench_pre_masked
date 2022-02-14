
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8 ;
typedef int uint32 ;
typedef int uint16 ;
typedef int stamp ;
typedef int CELLHEADER ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int *,int) ;

void
FUNC_3(uint8 VAR_4, uint16 VAR_5, uint32 VAR_6)
{
 int VAR_7;

 if (!FUNC_0(VAR_4) || VAR_5 >= VAR_0)
  return;

 VAR_7 = VAR_3[VAR_4];
 FUNC_1(VAR_7, 12 + VAR_5 * (VAR_2 * VAR_1 + sizeof(CELLHEADER)));
 FUNC_2(VAR_7, &VAR_6, sizeof(VAR_6));
}
