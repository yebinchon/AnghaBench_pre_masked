
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int test_versions ;
typedef int cmsInt32Number ;
typedef int * cmsHPROFILE ;


 int FUNC_0 () ;
 int FUNC_1 (char*,float,scalar_t__) ;
 int FUNC_2 (int ,int *) ;
 int * FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int * FUNC_5 (int ,char*,char*) ;
 int FUNC_6 (int ,int *,char*) ;
 int FUNC_7 (int ,int *,float) ;
 double FUNC_8 (scalar_t__) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static
cmsInt32Number FUNC_10(void)
{
    cmsHPROFILE VAR_0;
    int VAR_1;
    float VAR_2[] = {
      2.3f,
      4.08f,
      4.09f,
      4.3f
    };

    for (VAR_1 = 0; VAR_1 < sizeof(VAR_2)/sizeof(VAR_2[0]); VAR_1++) {

      VAR_0 = FUNC_3(FUNC_0());
      if (VAR_0 == ((void*)0)) return 0;

      FUNC_7(FUNC_0(), VAR_0, VAR_2[VAR_1]);

      FUNC_6(FUNC_0(), VAR_0, "versions.icc");
      FUNC_2(FUNC_0(), VAR_0);

      VAR_0 = FUNC_5(FUNC_0(), "versions.icc", "r");


      if (FUNC_8(FUNC_4(FUNC_0(), VAR_0) - VAR_2[VAR_1]) > 0.005) {
        FUNC_1("Version failed to round-trip: wrote %.2f, read %.2f",
             VAR_2[VAR_1], FUNC_4(FUNC_0(), VAR_0));
        return 0;
      }

      FUNC_2(FUNC_0(), VAR_0);
      FUNC_9("versions.icc");
    }
    return 1;
}
