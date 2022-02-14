
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ OSErr ;
typedef int FSRef ;
typedef int * CFURLRef ;
typedef int CFStringRef ;
typedef int CFBundleRef ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int *,int ,int) ;
 int * FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int ,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static OSErr FUNC_5(CFStringRef VAR_4,
    CFBundleRef *VAR_5)
  {
    OSErr VAR_6;
    FSRef VAR_7;
    CFURLRef VAR_8;
    CFURLRef VAR_9;


    VAR_6 = FUNC_4(VAR_2, VAR_1, 0, &VAR_7);

    if (VAR_6 == VAR_3)
    {

      VAR_8 = FUNC_3(VAR_0, &VAR_7);

      if (VAR_8 != ((void*)0))
      {

        VAR_9 = FUNC_2(VAR_0,
          VAR_8, VAR_4, 0);

        FUNC_1(VAR_8);

        if (VAR_9 != ((void*)0))
        {

          *VAR_5 = FUNC_0(VAR_0, VAR_9);

          FUNC_1(VAR_9);
        }
      }
    }

    return VAR_6;
  }
