
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_6__ {int buffer_size; scalar_t__ hloc32W; } ;
typedef scalar_t__ HLOCAL ;
typedef TYPE_1__ EDITSTATE ;
typedef int BOOL ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__,int,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,int,...) ;
 int VAR_4 ;
 int FUNC_7 (char*,int) ;

__attribute__((used)) static BOOL FUNC_8(EDITSTATE *VAR_5, UINT VAR_6)
{
 HLOCAL VAR_7;

 if (VAR_6 <= VAR_5->buffer_size)
  return VAR_4;

 FUNC_6("trying to ReAlloc to %d+1 characters\n", VAR_6);


 FUNC_2(VAR_5, VAR_4);

 if (VAR_5->hloc32W) {
     UINT VAR_8 = FUNC_5((VAR_6 + 1) * sizeof(WCHAR));
     if ((VAR_7 = FUNC_3(VAR_5->hloc32W, VAR_8, VAR_2 | VAR_3))) {
  FUNC_6("Old 32 bit handle %p, new handle %p\n", VAR_5->hloc32W, VAR_7);
  VAR_5->hloc32W = VAR_7;
  VAR_5->buffer_size = FUNC_4(VAR_7)/sizeof(WCHAR) - 1;
     }
 }

 FUNC_0(VAR_5);

 if (VAR_5->buffer_size < VAR_6) {
  FUNC_7("FAILED !  We now have %d+1\n", VAR_5->buffer_size);
  FUNC_1(VAR_5, VAR_0);
  return VAR_1;
 } else {
  FUNC_6("We now have %d+1\n", VAR_5->buffer_size);
  return VAR_4;
 }
}
