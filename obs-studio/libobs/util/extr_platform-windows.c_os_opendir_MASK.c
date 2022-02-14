
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct os_dir {int first; int wfd; int handle; } ;
struct dstr {int len; int array; int member_0; } ;
typedef struct os_dir os_dir_t ;
typedef int WIN32_FIND_DATA ;
typedef int HANDLE ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 struct os_dir* FUNC_2 (int) ;
 int FUNC_3 (struct dstr*,char*) ;
 int FUNC_4 (struct dstr*,char const*) ;
 int FUNC_5 (struct dstr*) ;
 scalar_t__ FUNC_6 (int ,int ,int **) ;

os_dir_t *FUNC_7(const char *VAR_1)
{
 struct dstr VAR_2 = {0};
 struct os_dir *VAR_3 = ((void*)0);
 WIN32_FIND_DATA VAR_4;
 HANDLE VAR_5;
 wchar_t *VAR_6;

 FUNC_4(&VAR_2, VAR_1);
 FUNC_3(&VAR_2, "/*.*");

 if (FUNC_6(VAR_2.array, VAR_2.len, &VAR_6) > 0) {
  VAR_5 = FUNC_0(VAR_6, &VAR_4);
  if (VAR_5 != VAR_0) {
   VAR_3 = FUNC_2(sizeof(struct os_dir));
   VAR_3->handle = VAR_5;
   VAR_3->first = 1;
   VAR_3->wfd = VAR_4;
  }

  FUNC_1(VAR_6);
 }

 FUNC_5(&VAR_2);

 return VAR_3;
}
