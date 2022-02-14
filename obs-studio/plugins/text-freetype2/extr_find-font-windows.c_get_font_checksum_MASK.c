
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct dstr {int len; int * array; int member_0; } ;
struct TYPE_4__ {int * cFileName; int ftLastWriteTime; } ;
typedef TYPE_1__ WIN32_FIND_DATAA ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ HANDLE ;
typedef int FILETIME ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__,TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int *,int ,int *,int ,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (struct dstr*,char*) ;
 int FUNC_7 (struct dstr*) ;
 int FUNC_8 (struct dstr*,int ) ;
 int FUNC_9 (struct dstr*,int) ;
 int FUNC_10 (int *) ;

uint32_t FUNC_11(void)
{
 uint32_t VAR_6 = 0;
 struct dstr VAR_7 = {0};
 HANDLE VAR_8;
 WIN32_FIND_DATAA VAR_9;

 FUNC_8(&VAR_7, VAR_3);

 HRESULT VAR_10 = FUNC_3(((void*)0), VAR_0, ((void*)0),
           VAR_4, VAR_7.array);
 if (VAR_10 != VAR_5) {
  FUNC_4(VAR_2, "Error finding windows font folder");
  return 0;
 }

 VAR_7.len = FUNC_10(VAR_7.array);
 FUNC_6(&VAR_7, "\\*.*");

 VAR_8 = FUNC_1(VAR_7.array, &VAR_9);
 if (VAR_8 == VAR_1)
  goto free_string;

 FUNC_9(&VAR_7, VAR_7.len - 4);

 do {
  VAR_6 = FUNC_5(VAR_6, &VAR_9.ftLastWriteTime,
          sizeof(FILETIME));
  VAR_6 = FUNC_5(VAR_6, VAR_9.cFileName,
          FUNC_10(VAR_9.cFileName));
 } while (FUNC_2(VAR_8, &VAR_9));

 FUNC_0(VAR_8);

free_string:
 FUNC_7(&VAR_7);
 return VAR_6;
}
