
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tjhandle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int VAR_9 ;
 int FUNC_2 (int *,unsigned char**,unsigned long*,int,int,int,char*,int,int,int) ;
 int FUNC_3 (int *,unsigned char*,unsigned long,int,int,int,char*,int,int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (unsigned long) ;
 unsigned long FUNC_6 (int,int,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (unsigned char*) ;
 int * FUNC_9 () ;
 int * FUNC_10 () ;

void FUNC_11(int VAR_10, int VAR_11, const int *VAR_12, int VAR_13, int VAR_14,
            char *VAR_15)
{
  tjhandle VAR_16 = ((void*)0), VAR_17 = ((void*)0);
  unsigned char *VAR_18 = ((void*)0);
  unsigned long VAR_19 = 0;
  int VAR_20, VAR_21, VAR_22;

  if (!VAR_9)
    VAR_19 = FUNC_6(VAR_10, VAR_11, VAR_14);
  if (VAR_19 != 0)
    if ((VAR_18 = (unsigned char *)FUNC_5(VAR_19)) == ((void*)0))
      FUNC_0("Memory allocation failure.");

  if ((VAR_16 = FUNC_9()) == ((void*)0) ||
      (VAR_17 = FUNC_10()) == ((void*)0))
    FUNC_1();

  for (VAR_20 = 0; VAR_20 < VAR_13; VAR_20++) {
    for (VAR_22 = 0; VAR_22 < 2; VAR_22++) {
      int VAR_23 = 0;

      if (VAR_14 == VAR_7 || VAR_14 == VAR_6 ||
          VAR_14 == VAR_8 || VAR_14 == VAR_5)
        VAR_23 |= VAR_1;
      if (VAR_22 == 1) VAR_23 |= VAR_0;
      VAR_21 = VAR_12[VAR_20];
      FUNC_2(VAR_16, &VAR_18, &VAR_19, VAR_10, VAR_11, VAR_21, VAR_15, VAR_14, 100,
               VAR_23);
      FUNC_3(VAR_17, VAR_18, VAR_19, VAR_10, VAR_11, VAR_21, VAR_15, VAR_14, VAR_23);
      if (VAR_21 >= VAR_3 && VAR_21 <= VAR_4) {
        FUNC_4("\n");
        FUNC_3(VAR_17, VAR_18, VAR_19, VAR_10, VAR_11, VAR_21 + (VAR_2 - VAR_3),
                   VAR_15, VAR_14, VAR_23);
      }
      FUNC_4("\n");
    }
  }
  FUNC_4("--------------------\n\n");

bailout:
  if (VAR_16) FUNC_7(VAR_16);
  if (VAR_17) FUNC_7(VAR_17);
  if (VAR_18) FUNC_8(VAR_18);
}
