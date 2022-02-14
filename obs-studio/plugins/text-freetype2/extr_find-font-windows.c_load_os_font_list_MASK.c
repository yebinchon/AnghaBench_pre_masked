
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct dstr {int array; int member_0; scalar_t__ len; } ;
struct TYPE_8__ {int dwFileAttributes; char* cFileName; } ;
typedef TYPE_1__ WIN32_FIND_DATAA ;
struct TYPE_9__ {scalar_t__ num_faces; } ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ FT_Long ;
typedef TYPE_2__* FT_Face ;
typedef scalar_t__ FT_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__,TYPE_2__**) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_4 (scalar_t__,TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int *,int ,int *,int ,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (TYPE_2__*,int ,int ) ;
 int FUNC_8 (struct dstr*,char*) ;
 int FUNC_9 (struct dstr*,struct dstr*) ;
 int FUNC_10 (struct dstr*) ;
 int FUNC_11 (struct dstr*,int ) ;
 int FUNC_12 (struct dstr*,scalar_t__) ;
 int VAR_7 ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (int ) ;

void FUNC_15(void)
{
 struct dstr VAR_8 = {0};
 HANDLE VAR_9;
 WIN32_FIND_DATAA VAR_10;

 FUNC_11(&VAR_8, VAR_4);

 HRESULT VAR_11 = FUNC_5(((void*)0), VAR_0, ((void*)0),
           VAR_5, VAR_8.array);
 if (VAR_11 != VAR_6) {
  FUNC_6(VAR_3, "Error finding windows font folder");
  return;
 }

 VAR_8.len = FUNC_14(VAR_8.array);
 FUNC_8(&VAR_8, "\\*.*");

 VAR_9 = FUNC_3(VAR_8.array, &VAR_10);
 if (VAR_9 == VAR_2)
  goto free_string;

 FUNC_12(&VAR_8, VAR_8.len - 4);

 do {
  struct dstr VAR_12 = {0};
  FT_Face VAR_13;
  FT_Long VAR_14 = 0;
  FT_Long VAR_15 = 1;

  if (VAR_10.dwFileAttributes & VAR_1)
   continue;

  FUNC_9(&VAR_12, &VAR_8);
  FUNC_8(&VAR_12, "\\");
  FUNC_8(&VAR_12, VAR_10.cFileName);

  while (VAR_14 < VAR_15) {
   FT_Error VAR_16 = FUNC_1(VAR_7, VAR_12.array,
         VAR_14, &VAR_13);
   if (VAR_16 != 0)
    break;

   FUNC_7(VAR_13, VAR_14++, VAR_12.array);
   VAR_15 = VAR_13->num_faces;
   FUNC_0(VAR_13);
  }

  FUNC_10(&VAR_12);
 } while (FUNC_4(VAR_9, &VAR_10));

 FUNC_2(VAR_9);

 FUNC_13();

free_string:
 FUNC_10(&VAR_8);
}
