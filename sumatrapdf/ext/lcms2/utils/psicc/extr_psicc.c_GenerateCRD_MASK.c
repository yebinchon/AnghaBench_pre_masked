
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt32Number ;
typedef int * cmsHPROFILE ;
typedef int cmsContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int *) ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t FUNC_4 (int ,int *,int ,int ,char*,int ) ;
 int FUNC_5 (int ,char*,char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (size_t) ;

__attribute__((used)) static
void FUNC_8(cmsContext VAR_11)
{
 cmsHPROFILE VAR_12 = FUNC_1(VAR_11, VAR_6);
 size_t VAR_13;
 char* VAR_14;
    cmsUInt32Number VAR_15 = 0;

 if (VAR_12 == ((void*)0)) return;

    if (VAR_0) VAR_15 |= VAR_7;
    if (VAR_5) VAR_15 |= VAR_10;

    switch (VAR_4) {

     case 0: VAR_15 |= VAR_9; break;
  case 2: VAR_15 |= VAR_8; break;
  case 1:
            if (VAR_2 > 0)
                VAR_15 |= FUNC_3(VAR_2);
            break;

  default: FUNC_0("ERROR: Unknown precalculation mode '%d'", VAR_4);
  }

 VAR_13 = FUNC_4(VAR_11, VAR_12, VAR_1, VAR_15, ((void*)0), 0);
 if (VAR_13 == 0) return;

 VAR_14 = (char*) FUNC_7(VAR_13 + 1);
 if (VAR_14 == ((void*)0)) return;
        FUNC_4(VAR_11, VAR_12, VAR_1, VAR_15, VAR_14, (cmsUInt32Number) VAR_13);
 VAR_14[VAR_13] = 0;

 FUNC_5(VAR_3, "%s", VAR_14);
 FUNC_6(VAR_14);
 FUNC_2(VAR_11, VAR_12);
}
