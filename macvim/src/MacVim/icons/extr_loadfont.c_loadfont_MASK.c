
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef scalar_t__ OSStatus ;
typedef int FSSpec ;
typedef int FSRef ;
typedef int CFURLRef ;
typedef int CFStringRef ;
typedef int ATSFontContainerRef ;


 scalar_t__ FUNC_0 (int *,int ,int ,int *,int ,int *) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int *,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char const*,int ) ;
 int FUNC_4 (int ,int ,int ,int) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int *,int ,int *,int *,int *,int *) ;
 int FUNC_7 (int *,char*,char const**) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static PyObject* FUNC_8(PyObject* VAR_10, PyObject* VAR_11) {
  PyObject* VAR_12 = VAR_0;
  const char* VAR_13 = ((void*)0);
  int VAR_14 = FUNC_7(VAR_11, "s", &VAR_13);

  if (VAR_14) {
    CFStringRef VAR_15 = FUNC_3(VAR_5,
        VAR_13, VAR_6);
    CFURLRef VAR_16 = FUNC_4(VAR_5,
        VAR_15, VAR_7, 0);
    FSRef VAR_17;

    if (FUNC_5(VAR_16, &VAR_17)) {
      OSStatus VAR_18 = VAR_9;
      ATSFontContainerRef VAR_19;





      FSSpec VAR_20;
      FSRef VAR_21;
      if ((VAR_18 = FUNC_6(
              &VAR_21, VAR_8, ((void*)0), ((void*)0), &VAR_20, ((void*)0))) == VAR_9) {
        VAR_18 = FUNC_1(&VAR_20,
            VAR_2, VAR_3, ((void*)0),
            VAR_4, &VAR_19);
      }



      if (VAR_18 == VAR_9) {
        VAR_12 = VAR_1;
      }
    }
    FUNC_2(VAR_16);
    FUNC_2(VAR_15);
  }
  return VAR_12;
}
