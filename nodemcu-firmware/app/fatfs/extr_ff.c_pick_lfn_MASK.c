
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int UINT ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int FUNC_0 (int*) ;

__attribute__((used)) static int FUNC_1 (
 WCHAR* VAR_5,
 BYTE* VAR_6
)
{
 UINT VAR_7, VAR_8;
 WCHAR VAR_9, VAR_10;


 if (FUNC_0(VAR_6 + VAR_1) != 0) return 0;

 VAR_7 = ((VAR_6[VAR_2] & ~VAR_3) - 1) * 13;

 for (VAR_9 = 1, VAR_8 = 0; VAR_8 < 13; VAR_8++) {
  VAR_10 = FUNC_0(VAR_6 + VAR_4[VAR_8]);
  if (VAR_9 != 0) {
   if (VAR_7 >= VAR_0) return 0;
   VAR_5[VAR_7++] = VAR_9 = VAR_10;
  } else {
   if (VAR_10 != 0xFFFF) return 0;
  }
 }

 if (VAR_6[VAR_2] & VAR_3) {
  if (VAR_7 >= VAR_0) return 0;
  VAR_5[VAR_7] = 0;
 }

 return 1;
}
