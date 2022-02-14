
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WPARAM ;
typedef scalar_t__ UINT ;
typedef scalar_t__ LRESULT ;
typedef int LPARAM ;
typedef int HWND ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static LRESULT FUNC_3(HWND VAR_9, UINT VAR_10, WPARAM VAR_11, LPARAM VAR_12, BOOL VAR_13, BOOL VAR_14)
{
    if ((VAR_10 >= VAR_4 && VAR_10 <= VAR_5) ||
         VAR_10 == VAR_3)
       {
          if (VAR_13) return VAR_13;

          return VAR_14 ? FUNC_0(VAR_9, VAR_10, VAR_11, VAR_12):
                         FUNC_1(VAR_9, VAR_10, VAR_11, VAR_12);
       }
    if ( VAR_10 == VAR_2 ||
         VAR_10 == VAR_8 || VAR_10 == VAR_1 ||
         VAR_10 == VAR_7 || VAR_10 == VAR_6)
        return VAR_13;

    return FUNC_2( VAR_9, VAR_0 );
}
