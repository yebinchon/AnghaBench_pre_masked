
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_3__ {int undo_buffer_size; int undo_text; } ;
typedef TYPE_1__ EDITSTATE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int) ;
 int VAR_2 ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static BOOL FUNC_5(EDITSTATE *VAR_3, UINT VAR_4)
{
 UINT VAR_5;

 if (VAR_4 <= VAR_3->undo_buffer_size)
  return VAR_2;

 FUNC_3("trying to ReAlloc to %d+1\n", VAR_4);

 VAR_5 = FUNC_2((VAR_4 + 1) * sizeof(WCHAR));
 if ((VAR_3->undo_text = FUNC_1(FUNC_0(), VAR_1, VAR_3->undo_text, VAR_5))) {
  VAR_3->undo_buffer_size = VAR_5/sizeof(WCHAR) - 1;
  return VAR_2;
 }
 else
 {
  FUNC_4("FAILED !  We now have %d+1\n", VAR_3->undo_buffer_size);
  return VAR_0;
 }
}
