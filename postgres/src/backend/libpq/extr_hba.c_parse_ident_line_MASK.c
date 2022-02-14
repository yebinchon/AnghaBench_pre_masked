
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int pg_wchar ;
typedef int errstr ;
struct TYPE_8__ {int line_num; scalar_t__ fields; } ;
typedef TYPE_1__ TokenizedLine ;
struct TYPE_10__ {int string; } ;
struct TYPE_9__ {int linenumber; char* ident_user; int re; void* pg_role; void* usermap; } ;
typedef int ListCell ;
typedef int List ;
typedef TYPE_2__ IdentLine ;
typedef TYPE_3__ HbaToken ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char*,char*) ;
 int * FUNC_6 (int *) ;
 TYPE_3__* FUNC_7 (int *) ;
 int * FUNC_8 (scalar_t__) ;
 int * FUNC_9 (scalar_t__,int *) ;
 int * FUNC_10 (int) ;
 TYPE_2__* FUNC_11 (int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*,int *,int) ;
 int FUNC_14 (int *,int *,int,int ,int ) ;
 int FUNC_15 (int,int *,char*,int) ;
 void* FUNC_16 (int ) ;
 int FUNC_17 (char*) ;

__attribute__((used)) static IdentLine *
FUNC_18(TokenizedLine *VAR_5)
{
 int VAR_6 = VAR_5->line_num;
 ListCell *VAR_7;
 List *VAR_8;
 HbaToken *VAR_9;
 IdentLine *VAR_10;

 FUNC_0(VAR_5->fields != VAR_3);
 VAR_7 = FUNC_8(VAR_5->fields);

 VAR_10 = FUNC_11(sizeof(IdentLine));
 VAR_10->linenumber = VAR_6;


 VAR_8 = FUNC_6(VAR_7);
 FUNC_2(VAR_8);
 VAR_9 = FUNC_7(VAR_8);
 VAR_10->usermap = FUNC_16(VAR_9->string);


 VAR_7 = FUNC_9(VAR_5->fields, VAR_7);
 FUNC_1(VAR_7);
 VAR_8 = FUNC_6(VAR_7);
 FUNC_2(VAR_8);
 VAR_9 = FUNC_7(VAR_8);
 VAR_10->ident_user = FUNC_16(VAR_9->string);


 VAR_7 = FUNC_9(VAR_5->fields, VAR_7);
 FUNC_1(VAR_7);
 VAR_8 = FUNC_6(VAR_7);
 FUNC_2(VAR_8);
 VAR_9 = FUNC_7(VAR_8);
 VAR_10->pg_role = FUNC_16(VAR_9->string);

 if (VAR_10->ident_user[0] == '/')
 {




  int VAR_11;
  pg_wchar *VAR_12;
  int VAR_13;

  VAR_12 = FUNC_10((FUNC_17(VAR_10->ident_user + 1) + 1) * sizeof(pg_wchar));
  VAR_13 = FUNC_13(VAR_10->ident_user + 1,
         VAR_12, FUNC_17(VAR_10->ident_user + 1));

  VAR_11 = FUNC_14(&VAR_10->re, VAR_12, VAR_13, VAR_4, VAR_0);
  if (VAR_11)
  {
   char VAR_14[100];

   FUNC_15(VAR_11, &VAR_10->re, VAR_14, sizeof(VAR_14));
   FUNC_3(VAR_2,
     (FUNC_4(VAR_1),
      FUNC_5("invalid regular expression \"%s\": %s",
       VAR_10->ident_user + 1, VAR_14)));

   FUNC_12(VAR_12);
   return ((void*)0);
  }
  FUNC_12(VAR_12);
 }

 return VAR_10;
}
