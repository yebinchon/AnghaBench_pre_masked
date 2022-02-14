
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_4__ {int lbselchstring; scalar_t__ hook; int ofnW; int hwnd; } ;
typedef int LRESULT ;
typedef char* LPWSTR ;
typedef int LPARAM ;
typedef scalar_t__ LONG ;
typedef int HWND ;
typedef TYPE_1__ FD31_DATA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*,int ,int ,int ) ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ,scalar_t__,int ) ;
 int VAR_7 ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int VAR_8 ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static LRESULT FUNC_9( const FD31_DATA *VAR_9 )
{
  LONG VAR_10;
  HWND VAR_11 = VAR_9->hwnd;
  LPWSTR VAR_12;
  WCHAR VAR_13[VAR_0];


  VAR_10 = FUNC_3(VAR_11, VAR_8, VAR_5, 0, 0);
  if (VAR_10 == VAR_4) return VAR_7;
  VAR_12 = FUNC_4(VAR_1);
  FUNC_3(VAR_11, VAR_8, VAR_6, VAR_10,
       (LPARAM)VAR_12);
  FUNC_7( VAR_13, VAR_12 );
  FUNC_5(VAR_12);

  if (VAR_13[0] == '[')
    {
      VAR_13[FUNC_8(VAR_13) - 1] = 0;
      FUNC_7(VAR_13,VAR_13+1);
    }
  FUNC_6(VAR_13, VAR_3);

  FUNC_1(VAR_9->ofnW, VAR_11, VAR_13);

  if (VAR_9->hook)
    {
      if (FUNC_0(VAR_9, VAR_9->lbselchstring, VAR_8,
              FUNC_2(VAR_10,VAR_2)))
        return VAR_7;
    }
  return VAR_7;
}
