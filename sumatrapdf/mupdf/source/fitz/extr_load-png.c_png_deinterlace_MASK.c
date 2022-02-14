
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct info {unsigned int n; unsigned int depth; unsigned int width; unsigned int height; unsigned char* samples; } ;
typedef int fz_context ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int* VAR_2 ;
 unsigned int* VAR_3 ;
 unsigned int* VAR_4 ;
 unsigned int* VAR_5 ;
 int FUNC_0 (int *,unsigned char*) ;
 unsigned char* FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (unsigned char*,unsigned int,unsigned int) ;
 int FUNC_4 (unsigned char*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_5 (unsigned char*,int,unsigned int,int) ;

__attribute__((used)) static void
FUNC_6(fz_context *VAR_6, struct info *VAR_7, unsigned int *VAR_8, unsigned int *VAR_9, unsigned int *VAR_10)
{
 unsigned int VAR_11 = VAR_7->n;
 unsigned int VAR_12 = VAR_7->depth;
 unsigned int VAR_13 = (VAR_7->width * VAR_11 * VAR_12 + 7) / 8;
 unsigned char *VAR_14;
 unsigned int VAR_15, VAR_16, VAR_17, VAR_18;

 if (VAR_7->height > VAR_1 / VAR_13)
  FUNC_2(VAR_6, VAR_0, "image too large");
 VAR_14 = FUNC_1(VAR_6, VAR_7->height * VAR_13);

 for (VAR_15 = 0; VAR_15 < 7; VAR_15++)
 {
  unsigned char *VAR_19 = VAR_7->samples + (VAR_10[VAR_15]);
  unsigned int VAR_20 = VAR_8[VAR_15];
  unsigned int VAR_21 = VAR_9[VAR_15];

  FUNC_4(VAR_19, VAR_20, VAR_21, VAR_11, VAR_12);
  for (VAR_17 = 0; VAR_17 < VAR_21; VAR_17++)
  {
   for (VAR_16 = 0; VAR_16 < VAR_20; VAR_16++)
   {
    int VAR_22 = VAR_16 * VAR_2[VAR_15] + VAR_4[VAR_15];
    int VAR_23 = VAR_17 * VAR_3[VAR_15] + VAR_5[VAR_15];
    unsigned char *VAR_24 = VAR_14 + VAR_23 * VAR_13;
    for (VAR_18 = 0; VAR_18 < VAR_11; VAR_18++)
    {
     int VAR_25 = FUNC_3(VAR_19, VAR_16 * VAR_11 + VAR_18, VAR_12);
     FUNC_5(VAR_24, VAR_22 * VAR_11 + VAR_18, VAR_12, VAR_25);
    }
   }
   VAR_19 += (VAR_20 * VAR_12 * VAR_11 + 7) / 8;
  }
 }

 FUNC_0(VAR_6, VAR_7->samples);
 VAR_7->samples = VAR_14;
}
