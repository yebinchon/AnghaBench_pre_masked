
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int,int) ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (void*,int ,int**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int** VAR_16 ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static int FUNC_6(const char *VAR_17,
      void *VAR_18, char *VAR_19)
{
 unsigned int VAR_20;
 FUNC_1(VAR_18, VAR_15, VAR_14);
 FUNC_1(VAR_18, VAR_15, VAR_13);
 FUNC_1(VAR_18, VAR_15, VAR_9);
 FUNC_1(VAR_18, VAR_15, VAR_11);
 FUNC_1(VAR_18, VAR_15, VAR_12);
 FUNC_1(VAR_18, VAR_15, VAR_10);
 FUNC_2(VAR_18, VAR_15, VAR_16);

 for (VAR_20=0; VAR_20<4; VAR_20++) {
  (*VAR_16)[VAR_20] = FUNC_3((*VAR_16)[VAR_20]);
 }

 FUNC_5(VAR_19, "pcmcia:");
 FUNC_0(VAR_19, "m", VAR_14 & VAR_4,
     VAR_13);
 FUNC_0(VAR_19, "c", VAR_14 & VAR_0,
     VAR_9);
 FUNC_0(VAR_19, "f", VAR_14 & VAR_3,
     VAR_11);
 FUNC_0(VAR_19, "fn", VAR_14 & VAR_2,
     VAR_12);
 FUNC_0(VAR_19, "pfn", VAR_14 & VAR_1,
     VAR_10);
 FUNC_0(VAR_19, "pa", VAR_14 & VAR_5, (*VAR_16)[0]);
 FUNC_0(VAR_19, "pb", VAR_14 & VAR_6, (*VAR_16)[1]);
 FUNC_0(VAR_19, "pc", VAR_14 & VAR_7, (*VAR_16)[2]);
 FUNC_0(VAR_19, "pd", VAR_14 & VAR_8, (*VAR_16)[3]);

 FUNC_4(VAR_19);
 return 1;
}
