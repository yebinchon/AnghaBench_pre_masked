
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ (* binary__fprintf_t ) (int ,int,void*,int *) ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t FUNC_0 (size_t) ;

int FUNC_1(unsigned char *VAR_10, size_t VAR_11,
      size_t VAR_12, binary__fprintf_t VAR_13,
      void *VAR_14, FILE *VAR_15)
{
 size_t VAR_16, VAR_17, VAR_18;
 int VAR_19 = 0;

 if (!VAR_13)
  return 0;

 VAR_12 = FUNC_0(VAR_12);
 VAR_18 = VAR_12 - 1;

 VAR_19 += VAR_13(VAR_3, 0, VAR_14, VAR_15);
 for (VAR_16 = 0; VAR_16 < VAR_11; VAR_16++) {
  if ((VAR_16 & VAR_18) == 0) {
   VAR_19 += VAR_13(VAR_5, -1, VAR_14, VAR_15);
   VAR_19 += VAR_13(VAR_0, VAR_16, VAR_14, VAR_15);
  }

  VAR_19 += VAR_13(VAR_7, VAR_10[VAR_16], VAR_14, VAR_15);

  if (((VAR_16 & VAR_18) == VAR_18) || VAR_16 == VAR_11 - 1) {
   for (VAR_17 = 0; VAR_17 < VAR_18-(VAR_16 & VAR_18); VAR_17++)
    VAR_19 += VAR_13(VAR_8, -1, VAR_14, VAR_15);

   VAR_13(VAR_9, VAR_16, VAR_14, VAR_15);
   for (VAR_17 = VAR_16 & ~VAR_18; VAR_17 <= VAR_16; VAR_17++)
    VAR_19 += VAR_13(VAR_1, VAR_10[VAR_17], VAR_14, VAR_15);
   for (VAR_17 = 0; VAR_17 < VAR_18-(VAR_16 & VAR_18); VAR_17++)
    VAR_19 += VAR_13(VAR_2, VAR_16, VAR_14, VAR_15);
   VAR_19 += VAR_13(VAR_6, -1, VAR_14, VAR_15);
  }
 }
 VAR_19 += VAR_13(VAR_4, -1, VAR_14, VAR_15);
 return VAR_19;
}
