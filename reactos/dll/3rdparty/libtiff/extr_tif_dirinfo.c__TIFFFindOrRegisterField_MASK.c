
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int TIFFField ;
typedef int TIFFDataType ;
typedef int TIFF ;


 int * FUNC_0 (int *,int ,int ) ;
 int * FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int const*,int) ;

const TIFFField*
FUNC_3(TIFF *VAR_0, uint32 VAR_1, TIFFDataType VAR_2)

{
 const TIFFField *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3 == ((void*)0)) {
  VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
  if (!FUNC_2(VAR_0, VAR_3, 1))
   return ((void*)0);
 }

 return VAR_3;
}
