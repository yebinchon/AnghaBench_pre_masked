
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float Uint64 ;


 int VAR_0 ;
 float FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int VAR_1 ;
 float VAR_2 ;
 size_t VAR_3 ;
 float* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (char*,...) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (double) ;
 double* VAR_18 ;
 int VAR_19 ;

void FUNC_5(void)
{
   int VAR_20;

   static Uint64 VAR_21;
   Uint64 VAR_22 = FUNC_0();
   float VAR_23=0;
   float VAR_24 = (VAR_22 - VAR_21) / (float) FUNC_1();
   VAR_21 = VAR_22;

   VAR_4[VAR_3] = VAR_2;
   VAR_3 = (VAR_3+1) %32;

   for (VAR_20=0; VAR_20 < 32; ++VAR_20)
      VAR_23 += VAR_4[VAR_20] / 32.0f;

   FUNC_4(-0.75);
   VAR_14 = 10;
   VAR_18[0] = VAR_18[1] = VAR_18[2] = 1.0f;
   FUNC_3("Frame time: %6.2fms, CPU frame render time: %5.2fms", VAR_24*1000, VAR_17*1000);
   FUNC_3("Tris: %4.1fM drawn of %4.1fM in range", 2*VAR_16/1000000.0f, 2*VAR_15/1000000.0f);
   FUNC_3("Vbuf storage: %dMB in frustum of %dMB in range of %dMB in cache", VAR_6>>20, VAR_5>>20, VAR_7>>20);
   FUNC_3("Num mesh builds started this frame: %d; num uploaded this frame: %d\n", VAR_11, VAR_12);
   FUNC_3("QChunks: %3d in frustum of %3d valid of %3d in range", VAR_9, VAR_8, VAR_1);
   FUNC_3("Mesh worker threads active: %d", VAR_13);
   FUNC_3("View distance: %d blocks", VAR_19*16);
   FUNC_3("%s", FUNC_2(VAR_0));

   if (VAR_10) {
      VAR_18[0] = 1.0;
      VAR_18[1] = 0.5;
      VAR_18[2] = 0.5;
      FUNC_3("SLOWNESS: Synchronous debug output is enabled!");
   }
}
