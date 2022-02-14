
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_8__ {int style; int undo_text; scalar_t__ undo_insert_count; scalar_t__ undo_position; } ;
typedef int LPWSTR ;
typedef int INT ;
typedef TYPE_1__ EDITSTATE ;
typedef int BOOL ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int,int ,int,int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (char*,scalar_t__,int ) ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static BOOL FUNC_11(EDITSTATE *VAR_5)
{
 INT VAR_6;
 LPWSTR VAR_7;



 if( VAR_5->style & VAR_2 )
            return !(VAR_5->style & VAR_1);

 VAR_6 = FUNC_10(VAR_5->undo_text);

 VAR_7 = FUNC_7((VAR_6 + 1) * sizeof(WCHAR));

 FUNC_9(VAR_7, VAR_5->undo_text);

 FUNC_5("before UNDO:insertion length = %d, deletion buffer = %s\n",
       VAR_5->undo_insert_count, FUNC_6(VAR_7));

 FUNC_3(VAR_5, VAR_5->undo_position, VAR_5->undo_position + VAR_5->undo_insert_count, VAR_3);
 FUNC_0(VAR_5);
 FUNC_1(VAR_5, VAR_4, VAR_7, VAR_6, VAR_4, VAR_4);
 FUNC_3(VAR_5, VAR_5->undo_position, VAR_5->undo_position + VAR_5->undo_insert_count, VAR_3);

        FUNC_4(VAR_5, VAR_0);
 FUNC_2(VAR_5);
 FUNC_8(VAR_7);

 FUNC_5("after UNDO:insertion length = %d, deletion buffer = %s\n",
   VAR_5->undo_insert_count, FUNC_6(VAR_5->undo_text));
 return VAR_4;
}
